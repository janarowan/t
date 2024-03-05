#include "login.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Transactions trans;
    Login w;
    w.show();
    //trans.show()
    return a.exec();
}
