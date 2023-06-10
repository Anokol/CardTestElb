#include "carddialog.h"
#include "ui_carddialog.h"
#include <QMessageBox>

CardDialog::CardDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CardDialog)
{
    ui->setupUi(this);
    load_data();
}

void CardDialog::load_data(){
    repository* repo = new repository();
    cards = repo->get_video_cards();

    for(QString& key : cards.keys()){
        ui->listWidget->addItem(key);
    }

    if (cards.size() > 0){
        Videocard* card = cards.values()[0];
        QList<TestInfo*> infos = card->get_results().values()[0];

        for(TestInfo* info : infos){
            ui->comboBox_Tests->addItem(info->get_type());
        }
    }
}

CardDialog::~CardDialog()
{
    delete ui;
}

void CardDialog::on_listWidget_itemSelectionChanged()
{
    QString name = ui->listWidget->currentItem()->text();

    Videocard* card = cards.find(name).value();

    ui->tableWidget->setRowCount(0);

    QSet<QString> systems;
    QSet<QString> drivers;
    QSet<QString> processors;

    QMapIterator<QString, QVector<TestInfo*>> it(card->get_results());
    int row = 0;

     while(it.hasNext()){
         it.next();
         ui->tableWidget->insertRow(row);
         //ui->tableWidget->setRowCount(row);
         QString system = it.key();

         systems.insert(it.value()[0]->get_system());
         drivers.insert(it.value()[0]->get_driver());
         processors.insert(it.value()[0]->get_ProcName());

         ui->tableWidget->setItem(row, 0, new QTableWidgetItem(it.value()[0]->get_system()));
         ui->tableWidget->setItem(row, 1, new QTableWidgetItem(it.value()[0]->get_ProcName()));
         ui->tableWidget->setItem(row, 2, new QTableWidgetItem(it.value()[0]->get_driver()));
         ui->tableWidget->setItem(row, 3, new QTableWidgetItem(""));
         ui->tableWidget->setItem(row, 4, new QTableWidgetItem(""));
         ui->tableWidget->setItem(row, 5, new QTableWidgetItem(""));

        ui->tableWidget->item(row, 0)->setBackground(Qt::gray);
        ui->tableWidget->item(row, 1)->setBackground(Qt::gray);
         ui->tableWidget->item(row, 2)->setBackground(Qt::gray);
          ui->tableWidget->item(row, 3)->setBackground(Qt::gray);
          ui->tableWidget->item(row, 4)->setBackground(Qt::gray);
          ui->tableWidget->item(row, 5)->setBackground(Qt::gray);
         QVector<TestInfo*> infos = it.value();
         row++;
         for(TestInfo* info : infos){
            //ui->tableWidget->setRowCount(row);
             ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(info->get_fps())));
            ui->tableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(info->get_frameTime())));
            ui->tableWidget->setItem(row, 5, new QTableWidgetItem(info->get_type()));

            row++;
         }
     }

     ui->comboBoxSystem1->clear();
     ui->comboBoxSystem2->clear();

     ui->comboBoxDriver1->clear();
     ui->comboBoxDriver2->clear();

     ui->comboBoxProcessor1->clear();
     ui->comboBoxProcessor2->clear();

     for(QString s : systems){
         if (ui->comboBoxSystem1->findText(s) == -1){
             ui->comboBoxSystem1->addItem(s);
             ui->comboBoxSystem2->addItem(s);
         }
     }

     for(QString s : drivers){
         if (ui->comboBoxDriver1->findText(s) == -1){
             ui->comboBoxDriver1->addItem(s);
             ui->comboBoxDriver2->addItem(s);
         }
     }

     for(QString s : processors){
         if (ui->comboBoxProcessor1->findText(s) == -1){
             ui->comboBoxProcessor1->addItem(s);
             ui->comboBoxProcessor2->addItem(s);
         }
     }
}

void CardDialog::show_info(){

}

void CardDialog::on_DelteSelect_clicked()
{
    QString name = ui->listWidget->currentItem()->text();

    Videocard* card = cards.find(name).value();
    delete ui->listWidget->currentItem();

    repository* repo =new repository();
    repo->remove_card(card);
}


void CardDialog::on_pushButtonCompare_clicked()
{
    QString card1 = ui->comboBoxSystem1->currentText() + " " + ui->comboBoxProcessor1->currentText() + " " + ui->comboBoxDriver1->currentText();
    QString card2 = ui->comboBoxSystem2->currentText() + " " + ui->comboBoxProcessor2->currentText() + " " + ui->comboBoxDriver2->currentText();

    QString name = ui->listWidget->currentItem()->text();

    Videocard* card = cards.find(name).value();
    auto results = card->get_results();

    if (results.contains(card1) && results.contains(card2)){
        auto res1 = results.find(card1);
        auto res2 = results.find(card2);

        ui->tableWidget_2->setRowCount(0);

        for(int i = 0; i < res1->size(); i++){
            QString unit = (*res1)[i]->get_type();
            if (units.contains(unit))
            {
               double percent = 100 * (double)(*res1)[i]->get_fps() / (*res2)[i]->get_fps();

               ui->tableWidget_2->insertRow(i);
               ui->tableWidget_2->setItem(i, 0, new QTableWidgetItem(QString::number(percent)));
               ui->tableWidget_2->setItem(i, 1, new QTableWidgetItem(unit));
            }
        }
    }
    else {
         QMessageBox::warning(this, "Внимание", "Нет информации об одной из видеокарт");
    }
}

void CardDialog::on_Add_Tests_All_clicked()
{
    for (int index = 0; index < ui->comboBox_Tests->count(); index++){
        QString unit = ui->comboBox_Tests->itemText(index);
        if (!units.contains(unit))
        {
            units.insert(unit);
            ui->listWidget_2->addItem(unit);
        }
    }

}

void CardDialog::on_Add_Tests_clicked()
{
    QString unit = ui->comboBox_Tests->currentText();
    if (!units.contains(unit))
    {
        units.insert(unit);
        ui->listWidget_2->addItem(unit);
    }
}

void CardDialog::on_Delte_All_clicked()
{
    units.clear();
    ui->listWidget_2->clear();
}

void CardDialog::on_Delte_All_2_clicked()
{
     QString unit = ui->listWidget_2->currentItem()->text();
     units.remove(unit);
     delete ui->listWidget_2->currentItem();

}
