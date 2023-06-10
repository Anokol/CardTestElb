#include "carddialog.h"
#include "ui_carddialog.h"

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

    QMapIterator<QString, QVector<TestInfo*>> it(card->get_results());
    int row = 0;

     while(it.hasNext()){
         it.next();
         ui->tableWidget->insertRow(row);
         //ui->tableWidget->setRowCount(row);
         QString system = it.key();
         ui->tableWidget->setItem(row, 0, new QTableWidgetItem(system));
         ui->tableWidget->setItem(row, 1, new QTableWidgetItem(""));
         ui->tableWidget->setItem(row, 2, new QTableWidgetItem(""));
         ui->tableWidget->setItem(row, 3, new QTableWidgetItem(""));

        ui->tableWidget->item(row, 0)->setBackground(Qt::gray);
        ui->tableWidget->item(row, 1)->setBackground(Qt::gray);
         ui->tableWidget->item(row, 2)->setBackground(Qt::gray);
          ui->tableWidget->item(row, 3)->setBackground(Qt::gray);
         QVector<TestInfo*> infos = it.value();
         row++;
         for(TestInfo* info : infos){
            //ui->tableWidget->setRowCount(row);
             ui->tableWidget->insertRow(row);
            ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(info->get_fps())));
            ui->tableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(info->get_frameTime())));
            ui->tableWidget->setItem(row, 3, new QTableWidgetItem(info->get_type()));

            row++;
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

