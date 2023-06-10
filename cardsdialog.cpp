#include "cardsdialog.h"
#include "ui_cardsdialog.h"

CardsDialog::CardsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CardsDialog)
{
    ui->setupUi(this);

    load_data();
}

void CardsDialog::load_data(){
    repository* repo = new repository();
    cards = repo->get_video_cards();

    for(QString& key : cards.keys()){
        ui->listWidget->addItem(key);
    }
}

CardsDialog::~CardsDialog()
{
    delete ui;
}
