#include "repository.h"

repository::repository()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString pathToDB = QDir::currentPath()+QString("/cardteest.db");
    db.setDatabaseName(pathToDB);
}

QMap<QString, Videocard*> repository::get_video_cards()
{
    db.open();

    QSqlQuery query;
    query.exec("SELECT * FROM TestInfo INNER JOIN VideoCard ON VideoCardID = VideoCard.Id");

    QMap<int, Videocard*> cards;
    QMap<QString, Videocard*> res_cards;

    while(query.next()){
        int id = query.value(0).toInt();
        QString type = query.value(1).toString();
        int fps = query.value(2).toInt();
        double frame_time = query.value(3).toDouble();
        QString system = query.value(4).toString();
        int id_video_card = query.value(5).toInt();
        QString name = query.value(7).toString();


       auto card_it = cards.find(id_video_card);
       Videocard* card;
       if (card_it == cards.end())
       {
            card = new Videocard(name);
            card->set_id(id_video_card);
            cards.insert(id_video_card, card);
            res_cards.insert(name, card);
       }
       else
           card = *card_it;


       TestInfo* info = new TestInfo(type, fps, frame_time, system);
       info->set_id(id);
       card->add(info);
    }

    db.close();

    return res_cards;
}

void repository::add_card(Videocard* video_card)
{
    db.open();

    QSqlQuery my_query;
    my_query.prepare("INSERT INTO VideoCard (Name) VALUES (:name);");
    my_query.bindValue(":name", video_card->get_name());
    my_query.exec();

    int id = my_query.lastInsertId().toInt();

     QMapIterator<QString, QVector<TestInfo*>> it(video_card->get_results());
     while(it.hasNext()){
         it.next();

           QString system = it.key();
           QVector<TestInfo*> infos = it.value();
           for(TestInfo* info : infos){
               QSqlQuery query;
               query.prepare("INSERT INTO TestInfo (Type, FPS, FrameTime, System, VideoCardID)  VALUES (:Type, :FPS, :FrameTime, :System, :VideoCardID);");
               query.bindValue(":Type", info->get_type());
               query.bindValue(":FPS", info->get_fps());
               query.bindValue(":FrameTime", info->get_frameTime());
               query.bindValue(":System", info->get_system());
               query.bindValue(":VideoCardID", id);

               query.exec();
           }
     }


   db.close();
}

void repository::remove_card(Videocard* card){
    db.open();

    QMapIterator<QString, QVector<TestInfo*>> it(card->get_results());

     while(it.hasNext()){
         it.next();

         QVector<TestInfo*> infos = it.value();
         for(TestInfo* info : infos){
             QSqlQuery my_query;
             my_query.prepare("DELETE FROM TestInfo WHERE Id = :id;");
             my_query.bindValue(":id",info->get_id());
             my_query.exec();
         }

         QSqlQuery query;
         query.prepare("DELETE FROM VideoCard WHERE Id = :id;");
         query.bindValue(":id",card->get_id());
         query.exec();
     }

     db.close();
}
