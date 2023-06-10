/********************************************************************************
** Form generated from reading UI file 'cardsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDSDIALOG_H
#define UI_CARDSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_CardsDialog
{
public:
    QListWidget *listWidget;

    void setupUi(QDialog *CardsDialog)
    {
        if (CardsDialog->objectName().isEmpty())
            CardsDialog->setObjectName(QString::fromUtf8("CardsDialog"));
        CardsDialog->resize(781, 478);
        listWidget = new QListWidget(CardsDialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(30, 20, 291, 441));

        retranslateUi(CardsDialog);

        QMetaObject::connectSlotsByName(CardsDialog);
    } // setupUi

    void retranslateUi(QDialog *CardsDialog)
    {
        CardsDialog->setWindowTitle(QCoreApplication::translate("CardsDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardsDialog: public Ui_CardsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDSDIALOG_H
