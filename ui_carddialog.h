/********************************************************************************
** Form generated from reading UI file 'carddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDDIALOG_H
#define UI_CARDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_CardDialog
{
public:
    QListWidget *listWidget;
    QTableWidget *tableWidget;
    QPushButton *DelteSelect;
    QComboBox *comboBoxProcessor1;
    QComboBox *comboBoxDriver1;
    QLabel *label;
    QComboBox *comboBoxDriver2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_3;
    QComboBox *comboBoxProcessor2;
    QLabel *label_2;
    QLabel *label_5;
    QComboBox *comboBoxSystem2;
    QComboBox *comboBoxSystem1;
    QLabel *label_4;
    QTableWidget *tableWidget_2;
    QPushButton *pushButtonCompare;
    QListWidget *listWidget_2;
    QPushButton *Add_Tests;
    QComboBox *comboBox_Tests;
    QPushButton *Add_Tests_All;
    QPushButton *Delte_All;
    QPushButton *Delte_All_2;

    void setupUi(QDialog *CardDialog)
    {
        if (CardDialog->objectName().isEmpty())
            CardDialog->setObjectName(QString::fromUtf8("CardDialog"));
        CardDialog->resize(1337, 630);
        listWidget = new QListWidget(CardDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 40, 256, 531));
        tableWidget = new QTableWidget(CardDialog);
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
        tableWidget->setGeometry(QRect(290, 40, 611, 531));
        DelteSelect = new QPushButton(CardDialog);
        DelteSelect->setObjectName(QString::fromUtf8("DelteSelect"));
        DelteSelect->setGeometry(QRect(20, 580, 91, 31));
        comboBoxProcessor1 = new QComboBox(CardDialog);
        comboBoxProcessor1->setObjectName(QString::fromUtf8("comboBoxProcessor1"));
        comboBoxProcessor1->setGeometry(QRect(1010, 80, 131, 22));
        comboBoxDriver1 = new QComboBox(CardDialog);
        comboBoxDriver1->setObjectName(QString::fromUtf8("comboBoxDriver1"));
        comboBoxDriver1->setGeometry(QRect(1010, 110, 131, 22));
        label = new QLabel(CardDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1140, 30, 61, 20));
        comboBoxDriver2 = new QComboBox(CardDialog);
        comboBoxDriver2->setObjectName(QString::fromUtf8("comboBoxDriver2"));
        comboBoxDriver2->setGeometry(QRect(1170, 110, 131, 22));
        label_6 = new QLabel(CardDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(940, 80, 61, 16));
        label_7 = new QLabel(CardDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(910, 110, 91, 16));
        label_3 = new QLabel(CardDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1150, 80, 47, 14));
        comboBoxProcessor2 = new QComboBox(CardDialog);
        comboBoxProcessor2->setObjectName(QString::fromUtf8("comboBoxProcessor2"));
        comboBoxProcessor2->setGeometry(QRect(1170, 80, 131, 22));
        label_2 = new QLabel(CardDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1150, 50, 47, 14));
        label_5 = new QLabel(CardDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(950, 50, 47, 14));
        comboBoxSystem2 = new QComboBox(CardDialog);
        comboBoxSystem2->setObjectName(QString::fromUtf8("comboBoxSystem2"));
        comboBoxSystem2->setGeometry(QRect(1170, 50, 131, 22));
        comboBoxSystem1 = new QComboBox(CardDialog);
        comboBoxSystem1->setObjectName(QString::fromUtf8("comboBoxSystem1"));
        comboBoxSystem1->setGeometry(QRect(1010, 50, 131, 22));
        label_4 = new QLabel(CardDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1150, 110, 47, 14));
        tableWidget_2 = new QTableWidget(CardDialog);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(940, 220, 211, 341));
        tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pushButtonCompare = new QPushButton(CardDialog);
        pushButtonCompare->setObjectName(QString::fromUtf8("pushButtonCompare"));
        pushButtonCompare->setGeometry(QRect(1030, 170, 111, 31));
        listWidget_2 = new QListWidget(CardDialog);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(1170, 260, 151, 221));
        Add_Tests = new QPushButton(CardDialog);
        Add_Tests->setObjectName(QString::fromUtf8("Add_Tests"));
        Add_Tests->setGeometry(QRect(1160, 220, 61, 22));
        comboBox_Tests = new QComboBox(CardDialog);
        comboBox_Tests->setObjectName(QString::fromUtf8("comboBox_Tests"));
        comboBox_Tests->setGeometry(QRect(1160, 170, 121, 22));
        Add_Tests_All = new QPushButton(CardDialog);
        Add_Tests_All->setObjectName(QString::fromUtf8("Add_Tests_All"));
        Add_Tests_All->setGeometry(QRect(1240, 220, 81, 22));
        Delte_All = new QPushButton(CardDialog);
        Delte_All->setObjectName(QString::fromUtf8("Delte_All"));
        Delte_All->setGeometry(QRect(1170, 500, 80, 22));
        Delte_All_2 = new QPushButton(CardDialog);
        Delte_All_2->setObjectName(QString::fromUtf8("Delte_All_2"));
        Delte_All_2->setGeometry(QRect(1170, 530, 121, 22));

        retranslateUi(CardDialog);

        QMetaObject::connectSlotsByName(CardDialog);
    } // setupUi

    void retranslateUi(QDialog *CardDialog)
    {
        CardDialog->setWindowTitle(QCoreApplication::translate("CardDialog", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CardDialog", "\320\241\320\270\321\201\321\202\320\265\320\274\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CardDialog", "\320\237\321\200\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CardDialog", "\320\224\321\200\320\260\320\271\320\262\320\265\321\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CardDialog", "FPS", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CardDialog", "Frame Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CardDialog", "\320\237\320\276\320\272\320\260\320\267\320\265\321\202\320\265\320\273\320\270", nullptr));
        DelteSelect->setText(QCoreApplication::translate("CardDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("CardDialog", "\320\241\321\200\320\260\320\262\320\275\320\270\321\202\321\214", nullptr));
        label_6->setText(QCoreApplication::translate("CardDialog", "\320\237\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200", nullptr));
        label_7->setText(QCoreApplication::translate("CardDialog", "\320\222\320\265\321\200\321\201\320\270\321\217 \320\264\321\200\320\260\320\271\320\262\320\265\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("CardDialog", "\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("CardDialog", "\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("CardDialog", "\320\241\320\270\321\201\321\202\320\265\320\274\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("CardDialog", "\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("CardDialog", "FPS", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("CardDialog", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\320\265\320\273\321\214", nullptr));
        pushButtonCompare->setText(QCoreApplication::translate("CardDialog", "\320\241\321\200\320\260\320\262\320\275\320\270\321\202\321\214", nullptr));
        Add_Tests->setText(QCoreApplication::translate("CardDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        Add_Tests_All->setText(QCoreApplication::translate("CardDialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\321\201\320\265", nullptr));
        Delte_All->setText(QCoreApplication::translate("CardDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265", nullptr));
        Delte_All_2->setText(QCoreApplication::translate("CardDialog", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\213\320\264\320\265\320\273\320\265\320\275\320\275\320\276\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardDialog: public Ui_CardDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDDIALOG_H
