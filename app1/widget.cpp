#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    resize(600,400); // to  set up window size

//p1------------------------------
        pvbxLayout = new QVBoxLayout;
        ptr_ok = new QPushButton("&Ok"); //done
        ptr_cancel = new QPushButton("&Cancel"); //done
        label = new QLabel("Do you want to launch WM?");
//p2------------------------------
        label2 = new QLabel("Choose an option:");
        ptr_find = new QPushButton("&Find a person");
        ptr_add = new QPushButton("&Add a person");
        ptr_other = new QPushButton("&Other");
        ptr_back = new QPushButton("&Back"); // done
        ptr_sdb = new QPushButton("&Show DB"); // done
//p3------------------------------
        ptr_add2 = new QPushButton("&Add");
        ptr_cancel2 = new QPushButton("&Cancel");

        name = new QLabel("Name:", this);
        name->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        age = new QLabel("Age:", this);
        age->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        surname = new QLabel("Surname:", this);
        surname->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
        salary = new QLabel("Salary:", this);
        salary->setAlignment(Qt::AlignRight | Qt::AlignVCenter);

        le1 = new QLineEdit(this);
        le2 = new QLineEdit(this);
        le3 = new QLineEdit(this);
        le4 = new QLineEdit(this);

        //l = new Ledit(this);






    //pvbxLayout->setContentsMargins(10,10,10,100); // widget parameters
    //pvbxLayout->setSpacing(1); // widget parameters

    page1(); // start function

    setWindowTitle("Work Manager");
    setLayout(pvbxLayout);

}

Widget::~Widget()
{
    x.clear();
    delete ui;
}
//page_1---
void Widget::page1()
{
    p2_visible(0);
    p3_visible(0);
    p1_visible(1);



    pvbxLayout->addWidget(label);
    pvbxLayout->addWidget(ptr_ok);
    pvbxLayout->addWidget(ptr_cancel);
    connect(ptr_ok, &QPushButton::clicked,this, &Widget::page2);
    connect(ptr_cancel, &QPushButton::clicked, qApp, &QApplication::quit);
}
//page_2---
void Widget::page2() // Have to do functions for buttons
{
    p3_visible(0);

    //setLayout(pvbxLayout);
    p2_visible(1);
    p1_visible(0);

    pvbxLayout->addWidget(label2);
    pvbxLayout->addWidget(ptr_find);
    pvbxLayout->addWidget(ptr_add);
    pvbxLayout->addWidget(ptr_other); // to do later (an average salary/age; show staff per departments;
    pvbxLayout->addWidget(ptr_sdb);
    pvbxLayout->addWidget(ptr_back);



    connect(ptr_sdb, &QPushButton::clicked, this, &Widget::show_db); // show tb
    connect(ptr_back, &QPushButton::clicked, this, &Widget::page1); // back on page
    connect(ptr_add, &QPushButton::clicked, this, &Widget::page3); // add a person

}


//page_3--
void Widget::page3()
{
    p2_visible(0);
    p3_visible(1);

    //Ledit l(this); // for func. show_db/add_person

   l->grid->addWidget(name, 0, 0);
   l->get_grid()->addWidget(le1, 0, 1);
   l->get_grid()->addWidget(surname, 1, 0);
   l->get_grid()->addWidget(le2, 1, 1);
   l->get_grid()->addWidget(age, 2, 0);
   l->get_grid()->addWidget(le3, 2, 1);
   l->get_grid()->addWidget(salary, 3, 0);
   l->get_grid()->addWidget(le4, 3, 1);


   l->get_grid()->addWidget(ptr_add2, 4, 0); // to add a person
   l->get_grid()->addWidget(ptr_cancel2, 4, 1); // to open p2

   setLayout(l->get_grid());
   l->show();

   connect(ptr_add2, &QPushButton::clicked, this, &Widget::add_0person); // have to finish add func
   connect(ptr_cancel2, &QPushButton::clicked, this, &Widget::page2);


}

//turn on/off visibility--- !!!maybe you can turn on/off layout(all widgets)?
void Widget:: p1_visible(int n)
{
    ptr_cancel -> setVisible(n);
    ptr_ok -> setVisible(n);
    label -> setVisible(n);
}

void Widget:: p2_visible(int n)
{
    label2 -> setVisible(n);
    ptr_find -> setVisible(n);
    ptr_add -> setVisible(n);
    ptr_other -> setVisible(n);
    ptr_sdb -> setVisible(n);
    ptr_back -> setVisible(n);

}

void Widget:: p3_visible(int n) //???
{
    name -> setVisible(n);
    surname -> setVisible(n);
    age -> setVisible(n);
    salary -> setVisible(n);
    le1 -> setVisible(n);
    le2 -> setVisible(n);
    le3 -> setVisible(n);
    le4 -> setVisible(n);
    ptr_add2 ->setVisible(n);
    ptr_cancel2 ->setVisible(n);

    qDebug() << n;


    if(n == 1)
    {
        l = new Ledit(this);
        delete pvbxLayout;
        pvbxLayout = nullptr;
    }

    if(pvbxLayout == nullptr && n == 0 )
    {

        pvbxLayout = new QVBoxLayout;
        delete l; //!!!!!you delete link.grid but not class.grid(oroginal) => ++add
     }

}


void Widget::show_db()
{
    x.show_db();
}



void Widget::add_0person() // to do massive_name!!!
{
// input:name + surname
        tb_str[0] = le1->text();
        tb_str[1] = le2->text();
// input:age + salary
        tb_int[0] = (le3 ->text()).toInt();
        tb_int[1] = (le4 ->text()).toInt();

    x.add_1person(tb_int, tb_str);

}
