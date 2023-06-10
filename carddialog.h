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

    void on_pushButtonCompare_clicked();

    void on_Add_Tests_All_clicked();

    void on_Add_Tests_clicked();

    void on_Delte_All_clicked();

    void on_Delte_All_2_clicked();

private:
    Ui::CardDialog *ui;
    void load_data();
    void show_info();
    QMap<QString, Videocard*> cards;
    QSet<QString> units;
};

#endif // CARDDIALOG_H
