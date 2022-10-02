#ifndef PAGE2_H // change file names?
#define PAGE2_H

#include "p1_2.h" // to take libraries


class Page1: public QWidget
{
public:
    Page1(QWidget *parent = 0);
    ~Page1();

//private:
    //p1------------------------------
        QLabel *label = nullptr;
        QVBoxLayout *pvbxLayout = nullptr;
        QPushButton *ptr_ok =  nullptr;
        QPushButton *ptr_cancel = nullptr;
};

#endif // PAGE2_H
