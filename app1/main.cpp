#include "widget.h"

#include <db_connect.h>


#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Widget w;
    w.show();

    return a.exec();
}

