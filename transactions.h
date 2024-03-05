#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H

#include <QWidget>

namespace Ui {
class Transactions;
}

class Transactions : public QWidget
{
    Q_OBJECT

public:
    explicit Transactions(QWidget *parent = nullptr);
    void setname(QString na);
    void setacc (QString an);
    ~Transactions();

private slots:
    void on_clear_clicked();

    void on_deposit_clicked();

    void on_withdraw_clicked();

private:
    Ui::Transactions *ui;
};

#endif // TRANSACTIONS_H
