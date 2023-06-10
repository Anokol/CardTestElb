#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QInputDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   /* testsresult=new QStandardItemModel(5, 5, this );
    ui->tableView->setModel(testsresult);
    testsresult->setHeaderData(0, Qt::Horizontal, "Frame-Time\nubuntu");
    testsresult->setHeaderData(1, Qt::Horizontal, "ubuntu x86");
    testsresult->setHeaderData(2, Qt::Horizontal, "Эльбрус");
    testsresult->setHeaderData(3, Qt::Horizontal, "Frame-Time\nЭльбрус");
    testsresult->setHeaderData(4, Qt::Horizontal, "Раздница\n производительности");

    testsresult->setHeaderData(0, Qt::Vertical, "Fps");
    testsresult->setHeaderData(1, Qt::Vertical, "Render");
    testsresult->setHeaderData(2, Qt::Vertical, "Texture");
    testsresult->setHeaderData(3, Qt::Vertical, "Bump");
    testsresult->setHeaderData(4, Qt::Vertical, "Build");



    QTableWidgetItem* item = new QTableWidgetItem("Курлы курлы");
    ui->tableView->setItem(0, 2, item);*/



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::show_info(){
    ui->tableWidget->setRowCount(0);

    QMapIterator<QString, QVector<TestInfo*>> it(results);
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

void MainWindow::create_info(QString system, QString fileName){ // обрабатывает то что записано в переменной

    QVector<TestInfo*> infos;
    QSet<QString> setUnits;

    QFile file(fileName); //имя файла
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);

    while(!in.atEnd()){
        QString s = in.readLine(); //читаем строку из файла

        if (s.contains("FPS:")){ //вылавливаем из обрабатываемой строки fps
           QString unit = s.mid(1, s.indexOf(" ") - 2);

           if (setUnits.contains(unit))
               continue;

           setUnits.insert(unit);
           int pos1 = s.indexOf("FPS:") + 5; //позиция с начала слова когда надо считывать значения
           int pos2 = s.indexOf(" ", pos1);

            QString valFPS = s.mid(pos1, pos2 - pos1);
            int fps = valFPS.toInt();

            pos1 = s.indexOf("FrameTime:") + 10; //позиция с начала слова когда надо считывать значения
            pos2 = s.indexOf("ms", pos1); //позиция когда нодо остановить считывание
            QString valFrameTime = s.mid(pos1, pos2 - pos1);
            double frameTime = valFrameTime.toDouble();

            TestInfo* info = new TestInfo(unit, fps, frameTime, system);
            infos.append(info);
        }
    }

    results.insert(system, infos);
}

void MainWindow::on_pushButton_2_clicked() //x86
{
    bool bOk;
    QString str = QInputDialog::getText( 0,
                                         "Введите систему",
                                         ":",
                                         QLineEdit::Normal,
                                         "Tarja",
                                         &bOk
                                        );
    if (bOk) {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Choose file"), "", tr("Text Files (*.txt)")); //открываем тип файла, можно не только txt
        if (fileName != "") //если не пустой то
        {
             create_info(str, fileName);
             show_info();

             ui->buttonSaveDB->setEnabled(true);

        }
    }
}

void MainWindow::on_pushButton_3_clicked() //эльбрус
{

    QString fileName = QFileDialog::getOpenFileName(this, tr("Choose file"), "", tr("Text Files (*.txt)")); //открываем тип файла, можно не только txt
    if (fileName != "") //если не пустой то
    {
        QFile file(fileName); //имя файла
        if(!file.open(QIODevice::ReadOnly)) { //открываем файл если он не открывается, выдаем ошибку
            QMessageBox::information(0, "error", file.errorString());
            return;
        }

        create_info("Эльбрус", fileName);
        show_info();
        ui->buttonSaveDB->setEnabled(true);

    }


}

void MainWindow::on_pushButton_clicked()
{
    repository repo;
    repo.get_video_cards();
    //ui->tableWidget->insertRow(0);
    //ui->tableWidget->setItem(0, 0, new QTableWidgetItem("syst"));
}



void MainWindow::on_buttonSaveDB_clicked()
{
    bool bOk;
    QString str = QInputDialog::getText( 0,
                                         "Введите Видеокарту",
                                         "Модель видеокарты",
                                         QLineEdit::Normal,
                                         "",
                                         &bOk
                                        );
    if (bOk) {

        Videocard* videocard = new Videocard(str, results);
        repository* repo = new repository();
        repo->add_card(videocard);
        QMessageBox::warning(this, "Внимание", "Дынные сохранены");
        ui->buttonSaveDB->setEnabled(false);

    }

}

void MainWindow::on_showResultTests_clicked()
{
    CardDialog* dialog = new CardDialog();
    dialog->exec();
    //CardsDialog* dialog = new CardsDialog();
   // dialog->exec();
}
