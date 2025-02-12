#include "caculator.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    caculator w;
    w.setStyleSheet("background-color:rgb(230,230,230);");
    w.setWindowTitle("计算器");
    w.show();

    return a.exec();
}
