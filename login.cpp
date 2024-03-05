#include "login.h"
#include "ui_login.h"
#include "transactions.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{
    this->hide();
    Transactions *trans = new Transactions(this);
    QString n= ui->name->text();
    QString acc=ui->accnum->text();
    trans->setname(n);
    trans->setacc(acc);
    trans -> setVisible(true);

}

