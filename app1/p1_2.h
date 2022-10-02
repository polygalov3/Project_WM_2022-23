#ifndef P1_2_H
#define P1_2_H

#include<QObject>
#include <QWidget>
#include <QtWidgets>
#include <QLayout>


class Page2: public QWidget
{
public:
    Page2(QWidget *parent = 0);
    ~Page2();

//private:
    //p2------------------------------
        QVBoxLayout *pvbxLayout = nullptr;
        QLabel *label2 = nullptr;
        QPushButton *ptr_find = nullptr; // have to do
        QPushButton *ptr_add = nullptr; // to add a person
        QPushButton *ptr_other = nullptr; // have to do
        QPushButton *ptr_sdb = nullptr; // show database
        QPushButton *ptr_back = nullptr;
};

#endif // P1_2_H
