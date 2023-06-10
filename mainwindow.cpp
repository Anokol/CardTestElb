#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QInputDialog>
#include <QPushButton>
#include "inputparamsdialog.h"

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
}

void MainWindow::create_info(QString system, QString ProcName, QString driver, QString fileName){ // обрабатывает то что записано в переменной

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
            pos2 = s.indexOf("ms", pos1); //позиция когда надо остановить считывание
            QString valFrameTime = s.mid(pos1, pos2 - pos1);
            double frameTime = valFrameTime.toDouble();

            TestInfo* info = new TestInfo(unit, fps, frameTime, driver, ProcName, system);
            infos.append(info);
        }
    }

    results.insert(system + " " + ProcName + " " + driver, infos);
}

void MainWindow::fill_comboboxes(){
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

void MainWindow::on_pushButton_2_clicked() //x86
{


  // ui->pushButton_2->setStyleSheet("*{background-color: #4040ff;}");

    /*bool bOk;
    QString system = QInputDialog::getText( 0,
                                         "Введите систему",
                                         ":",
                                         QLineEdit::Normal,
                                         "",
                                         &bOk
                                        );

    QString driver = QInputDialog::getText( 0,
                                         "Введите драйвер",
                                         ":",
                                         QLineEdit::Normal,
                                         "none",
                                         &bOk
                                        );
*/

    InputParamsDialog* input = new InputParamsDialog();
    if (input->exec() == 1)
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Choose file"), "", tr("Text Files (*.txt)")); //открываем тип файла, можно не только txt
        if (fileName != "") //если не пустой то
        {

             create_info(input->get_system(), input->get_ProcName(), input->get_driverVersion(), fileName);
             show_info();

             ui->buttonSaveDB->setEnabled(true);

             systems.insert(input->get_system());
             processors.insert(input->get_ProcName());
             drivers.insert(input->get_driverVersion());

             fill_comboboxes();
        }
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
    ui->buttonSaveDB->setStyleSheet("*{background-color: #4040ff;}");
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
        QMessageBox::warning(this, "Внимание", "Данные сохранены");
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

void MainWindow::on_pushButtonCompare_clicked()
{
    QString card1 = ui->comboBoxSystem1->currentText() + " " + ui->comboBoxProcessor1->currentText() + " " + ui->comboBoxDriver1->currentText();
    QString card2 = ui->comboBoxSystem2->currentText() + " " + ui->comboBoxProcessor2->currentText() + " " + ui->comboBoxDriver2->currentText();

    if (results.contains(card1) && results.contains(card2)){
        auto res1 = results.find(card1);
        auto res2 = results.find(card2);

        ui->tableWidget_2->setRowCount(0);

        for(int i = 0; i < res1->size(); i++){
           double percent = 100 * (double)(*res1)[i]->get_fps() / (*res2)[i]->get_fps();

           ui->tableWidget_2->insertRow(i);
           ui->tableWidget_2->setItem(i, 0, new QTableWidgetItem(QString::number(percent)));
           ui->tableWidget_2->setItem(i, 1, new QTableWidgetItem((*res1)[i]->get_type()));
        }
    }
    else {
         QMessageBox::warning(this, "Внимание", "Нет информации об одной из видеокарт");
    }

}
