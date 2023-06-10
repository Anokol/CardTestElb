/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;
    QPushButton *buttonSaveDB;
    QPushButton *showResultTests;
    QComboBox *comboBoxSystem1;
    QComboBox *comboBoxProcessor1;
    QComboBox *comboBoxDriver1;
    QComboBox *comboBoxSystem2;
    QComboBox *comboBoxProcessor2;
    QComboBox *comboBoxDriver2;
    QPushButton *pushButtonCompare;
    QTableWidget *tableWidget_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1355, 576);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 151, 51));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 90, 151, 41));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(180, 20, 611, 511));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        buttonSaveDB = new QPushButton(centralwidget);
        buttonSaveDB->setObjectName(QString::fromUtf8("buttonSaveDB"));
        buttonSaveDB->setEnabled(false);
        buttonSaveDB->setGeometry(QRect(20, 140, 151, 51));
        showResultTests = new QPushButton(centralwidget);
        showResultTests->setObjectName(QString::fromUtf8("showResultTests"));
        showResultTests->setGeometry(QRect(20, 210, 151, 41));
        comboBoxSystem1 = new QComboBox(centralwidget);
        comboBoxSystem1->setObjectName(QString::fromUtf8("comboBoxSystem1"));
        comboBoxSystem1->setGeometry(QRect(900, 20, 131, 22));
        comboBoxProcessor1 = new QComboBox(centralwidget);
        comboBoxProcessor1->setObjectName(QString::fromUtf8("comboBoxProcessor1"));
        comboBoxProcessor1->setGeometry(QRect(900, 50, 131, 22));
        comboBoxDriver1 = new QComboBox(centralwidget);
        comboBoxDriver1->setObjectName(QString::fromUtf8("comboBoxDriver1"));
        comboBoxDriver1->setGeometry(QRect(900, 80, 131, 22));
        comboBoxSystem2 = new QComboBox(centralwidget);
        comboBoxSystem2->setObjectName(QString::fromUtf8("comboBoxSystem2"));
        comboBoxSystem2->setGeometry(QRect(1060, 20, 131, 22));
        comboBoxProcessor2 = new QComboBox(centralwidget);
        comboBoxProcessor2->setObjectName(QString::fromUtf8("comboBoxProcessor2"));
        comboBoxProcessor2->setGeometry(QRect(1060, 50, 131, 22));
        comboBoxDriver2 = new QComboBox(centralwidget);
        comboBoxDriver2->setObjectName(QString::fromUtf8("comboBoxDriver2"));
        comboBoxDriver2->setGeometry(QRect(1060, 80, 131, 22));
        pushButtonCompare = new QPushButton(centralwidget);
        pushButtonCompare->setObjectName(QString::fromUtf8("pushButtonCompare"));
        pushButtonCompare->setGeometry(QRect(940, 140, 111, 31));
        tableWidget_2 = new QTableWidget(centralwidget);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(860, 190, 211, 341));
        tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1030, 0, 61, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1040, 20, 47, 14));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1040, 50, 47, 14));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1040, 80, 47, 14));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(840, 20, 47, 14));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(830, 50, 61, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(800, 80, 91, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1355, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\321\201\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \321\202\320\265\321\201\321\202", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \321\202\320\265\321\201\321\202\320\276\320\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\321\201\321\202\320\265\320\274\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\201\320\270\321\217 \320\264\321\200\320\260\320\271\320\262\320\265\321\200\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "FPS", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Frame Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\265\321\202\320\265\320\273\320\270", nullptr));
        buttonSaveDB->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        showResultTests->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\321\213\320\265 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213", nullptr));
        pushButtonCompare->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\260\320\262\320\275\320\270\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "FPS", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\320\265\320\273\321\214", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\260\320\262\320\275\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\321\201\321\202\320\265\320\274\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\201\320\270\321\217 \320\264\321\200\320\260\320\271\320\262\320\265\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
