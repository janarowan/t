#include "transactions.h"
#include "ui_transactions.h"


Transactions::Transactions(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Transactions)
{
    ui->setupUi(this);
}
void Transactions::setname(QString name)
{
    ui-> name-> setText(name);
}
void Transactions::setacc(QString a)
{
    ui->accnum->setText(a);
}
Transactions::~Transactions()
{
    delete ui;
}

void Transactions::on_clear_clicked()
{
    ui->am_2->clear();
}


void Transactions::on_deposit_clicked()
{
    QString amountent= ui->am_2->text();
    bool ok;
    int ame;
    ame= amountent.toInt(&ok);
    int oam;
    QString old= ui->balance->text();
    oam= old.toInt(&ok);
    int newam= oam+ame;
    ui->balance->setText(QString::number(newam));
    ui->label_8->setText("Deposit completed");

}



void Transactions::on_withdraw_clicked()
{
    QString amountent= ui->am_2->text();
    bool ok;
    int ame;
    ame= amountent.toInt(&ok);
    int oam;
    QString old= ui->balance->text();
    oam= old.toInt(&ok);
    if(oam>=ame)
    {
        int newam= oam-ame;
        ui->balance->setText(QString::number(newam));
        ui->label_8->setText("Withdraw Completed");
    }
    else {
        ui->label_8->setText("Not enough funds");
    }
}

