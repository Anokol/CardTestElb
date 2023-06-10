#include "inputparamsdialog.h"
#include "ui_inputparamsdialog.h"

InputParamsDialog::InputParamsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputParamsDialog)
{
    ui->setupUi(this);
}

InputParamsDialog::~InputParamsDialog()
{
    delete ui;
}

QString InputParamsDialog::get_system(){
    return ui->systemName->text();
}

QString InputParamsDialog::get_ProcName(){
    return ui->ProcName->text();
}

QString InputParamsDialog::get_driverVersion(){

    return ui->driverVersion->text();
}
