#ifndef INPUTPARAMSDIALOG_H
#define INPUTPARAMSDIALOG_H

#include <QDialog>

namespace Ui {
class InputParamsDialog;
}

class InputParamsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InputParamsDialog(QWidget *parent = nullptr);
    ~InputParamsDialog();

    QString get_system();
    QString get_ProcName();
    QString get_driverVersion();

private:
    Ui::InputParamsDialog *ui;


};

#endif // INPUTPARAMSDIALOG_H
