#include "p1_2.h"

Page2::Page2(QWidget *parent) // to work with page 1-2
    : QWidget(parent)
{
    //p2------------------------------
            pvbxLayout = new QVBoxLayout;
            label2 = new QLabel("Choose an option:");
            ptr_find = new QPushButton("&Find a person");
            ptr_add = new QPushButton("&Add a person");
            ptr_other = new QPushButton("&Other");
            ptr_back = new QPushButton("&Back"); // done
            ptr_sdb = new QPushButton("&Show DB"); // done

            pvbxLayout->addWidget(label2);
            pvbxLayout->addWidget(ptr_find);
            pvbxLayout->addWidget(ptr_add);
            pvbxLayout->addWidget(ptr_other); // to do later (an average salary/age; show staff per departments;
            pvbxLayout->addWidget(ptr_sdb);
            pvbxLayout->addWidget(ptr_back);

            setLayout(pvbxLayout);


}




Page2:: ~Page2()
{
    label2 -> setVisible(0);
    ptr_find -> setVisible(0);
    ptr_add -> setVisible(0);
    ptr_other -> setVisible(0);
    ptr_sdb -> setVisible(0);
    ptr_back -> setVisible(0);

    pvbxLayout->removeWidget(label2);
    pvbxLayout->removeWidget(ptr_find);
    pvbxLayout->removeWidget(ptr_add);
    pvbxLayout->removeWidget(ptr_other); // to do later (an average salary/age; show staff per departments;
    pvbxLayout->removeWidget(ptr_sdb);
    pvbxLayout->removeWidget(ptr_back);

    delete label2;
    delete ptr_find;
    delete ptr_add;
    delete ptr_other;
    delete ptr_sdb;
    delete ptr_back;
}


