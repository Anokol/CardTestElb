#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include "QVariant"
#include <QString>
#include <QDir>
#include <QVector>
#include <QMap>
#include "videocard.h"

using namespace std;

class repository
{
private:
     QSqlDatabase db;
public:
    repository();

   QMap<QString, Videocard*> get_video_cards();
   void add_card(Videocard* video_card);
   void remove_card(Videocard* card);
};

#endif // REPOSITORY_H
