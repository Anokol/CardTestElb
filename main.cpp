#include "mainwindow.h"

#include <QApplication>
#include <QDir>
#include <QStandardItemModel>
#include <QTableWidget>
#include <QTableWidgetItem>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
