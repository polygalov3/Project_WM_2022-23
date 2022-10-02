#include "page2.h"

Page1::Page1(QWidget *parent) // to work with page 1
    : QWidget(parent)
{
    //p1------------------------------
            pvbxLayout = new QVBoxLayout;
            ptr_ok = new QPushButton("&Ok"); //done
            ptr_cancel = new QPushButton("&Cancel"); //done
            label = new QLabel("Do you want to launch WM?");

            pvbxLayout->addWidget(label);
            pvbxLayout->addWidget(ptr_ok);
            pvbxLayout->addWidget(ptr_cancel);

            setLayout(pvbxLayout);
}

Page1::~Page1()
{
    ptr_cancel -> setVisible(0);
    ptr_ok -> setVisible(0);
    label -> setVisible(0);

    pvbxLayout->removeWidget(label);
    pvbxLayout->removeWidget(ptr_ok);
    pvbxLayout->removeWidget(ptr_cancel);

    delete label;
    delete ptr_ok;
    delete ptr_cancel;
}
