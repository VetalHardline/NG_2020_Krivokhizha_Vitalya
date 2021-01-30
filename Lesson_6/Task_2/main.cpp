#include "redaktor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    redaktor w;
    w.show();
    return a.exec();
}
