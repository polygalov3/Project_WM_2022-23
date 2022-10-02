#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    resize(600,400); // to  set up window size

    page1(); // start function

    setWindowTitle("Work Manager");

}

Widget::~Widget()
{
    x.clear(); // delete information(which inserted during the app process) in tb
    delete ui;
}
//page_1---
void Widget::page1()
{

    p0_2visible();
    p1->show();

    connect(p1->ptr_ok, &QPushButton::clicked,this, &Widget::page2);
    connect(p1->ptr_cancel, &QPushButton::clicked, qApp, &QApplication::quit);
}

//page_2---
void Widget::page2() // Have to do functions for buttons
{

    p1_3visible();
    p->show();

    connect(p->ptr_sdb, &QPushButton::clicked, this, &Widget::show_db); // show tb
    connect(p->ptr_back, &QPushButton::clicked, this, &Widget::page1); // back on page
    connect(p->ptr_add, &QPushButton::clicked, this, &Widget::page3); // add a person

}

//page_3--
void Widget::page3()
{
   p2_4visible();
   l->show();

   connect(l->ptr_add2, &QPushButton::clicked, this, &Widget::add_0person);
   connect(l->ptr_cancel2, &QPushButton::clicked, this, &Widget::page2);
}

//Page changer. Where _ is a current page
void Widget:: p0_2visible()
{
    if(p == nullptr)
        p1 = new Page1(this);

    if(p != nullptr)
    {
       p1 = new Page1(this);
      delete p;
       p = nullptr;
    }
}

void Widget:: p1_3visible()
{

    if(p1 != nullptr)
    {
        p = new Page2(this);
        delete p1;
        p1 = nullptr;
    }

    if(l != nullptr )
    {
        p = new Page2(this);
        delete l;
        l = nullptr;
     }
}

void Widget:: p2_4visible()
{

    if(p != nullptr)
    {
        l = new Ledit(this);
        delete p;
        p = nullptr;
    }

//    if(p4 != nullptr ){} IN FUTURE maybe


}

void Widget::show_db()
{
    x.show_db();
}

void Widget::add_0person() // tmake getters in Ledit class
{
// input:name + surname
        tb_str[0] = l->le1->text();
        tb_str[1] = l->le2->text();
// input:age + salary
        tb_int[0] = (l->le3 ->text()).toInt();
        tb_int[1] = (l->le4 ->text()).toInt();

    x.add_1person(tb_int, tb_str);

}
