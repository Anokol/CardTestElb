#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QVector>
#include "testinfo.h"
#include "typeTest.h"
#include "videocard.h"
#include <QSet>
#include <QMap>
#include "repository.h"
#include "carddialog.h"
#include "cardsdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_buttonSaveDB_clicked();

    void on_showResultTests_clicked();

    void on_pushButtonCompare_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *testsresult;
  //  QTableWidget *testsresult;
    QMap<QString, QVector<TestInfo*>> results;
    QSet<QString> systems;
    QSet<QString> drivers;
    QSet<QString> processors;


    void show_info();
    void create_info(QString system, QString ProcName, QString driver, QString filename );// обрабатываем тип системы где идут тесты(из нажатой кнопки) и то что считали из файла
    void fill_comboboxes();
};
#endif // MAINWINDOW_H
