#ifndef CARDDIALOG_H
#define CARDDIALOG_H

#include <QDialog>
#include "repository.h"
#include "videocard.h"
#include "testinfo.h"

namespace Ui {
class CardDialog;
}

class CardDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CardDialog(QWidget *parent = nullptr);
    ~CardDialog();

private slots:
    void on_listWidget_itemSelectionChanged();

    void on_DelteSelect_clicked();

private:
    Ui::CardDialog *ui;
    void load_data();
    void show_info();
    QMap<QString, Videocard*> cards;
};

#endif // CARDDIALOG_H
