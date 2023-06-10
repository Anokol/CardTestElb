/********************************************************************************
** Form generated from reading UI file 'inputparamsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTPARAMSDIALOG_H
#define UI_INPUTPARAMSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_InputParamsDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *systemName;
    QLineEdit *ProcName;
    QLineEdit *driverVersion;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *InputParamsDialog)
    {
        if (InputParamsDialog->objectName().isEmpty())
            InputParamsDialog->setObjectName(QString::fromUtf8("InputParamsDialog"));
        InputParamsDialog->resize(507, 352);
        buttonBox = new QDialogButtonBox(InputParamsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        systemName = new QLineEdit(InputParamsDialog);
        systemName->setObjectName(QString::fromUtf8("systemName"));
        systemName->setGeometry(QRect(130, 40, 113, 21));
        ProcName = new QLineEdit(InputParamsDialog);
        ProcName->setObjectName(QString::fromUtf8("ProcName"));
        ProcName->setGeometry(QRect(130, 80, 113, 21));
        driverVersion = new QLineEdit(InputParamsDialog);
        driverVersion->setObjectName(QString::fromUtf8("driverVersion"));
        driverVersion->setGeometry(QRect(130, 120, 113, 21));
        label = new QLabel(InputParamsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 81, 16));
        label_2 = new QLabel(InputParamsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 120, 91, 16));
        label_3 = new QLabel(InputParamsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 91, 16));

        retranslateUi(InputParamsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, InputParamsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, InputParamsDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(InputParamsDialog);
    } // setupUi

    void retranslateUi(QDialog *InputParamsDialog)
    {
        InputParamsDialog->setWindowTitle(QCoreApplication::translate("InputParamsDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InputParamsDialog", "\320\230\320\274\321\217 \321\201\320\270\321\201\320\270\320\265\321\202\320\274\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("InputParamsDialog", "\320\222\320\265\321\200\321\201\320\270\321\217 \320\264\321\200\320\260\320\271\320\262\320\265\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("InputParamsDialog", "\320\230\320\274\321\217 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputParamsDialog: public Ui_InputParamsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTPARAMSDIALOG_H
