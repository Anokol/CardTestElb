#ifndef CARDSDIALOG_H
#define CARDSDIALOG_H

#include <QDialog>
#include "repository.h"
#include "videocard.h"
#include "testinfo.h"

namespace Ui {
class CardsDialog;
}

class CardsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CardsDialog(QWidget *parent = nullptr);
    ~CardsDialog();

private:
    Ui::CardsDialog *ui;
    void load_data();
    QMap<QString, Videocard*> cards;
};

#endif // CARDSDIALOG_H
