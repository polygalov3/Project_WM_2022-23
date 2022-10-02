#include "add_per.h"
#include <QPushButton>
#include<QWidget>

Ledit::Ledit(QWidget *parent) // a page to add people in tb
    : QWidget(parent)
{

    grid = new QGridLayout();
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


    grid->addWidget(ptr_cancel2, 4, 1);
    grid->addWidget(ptr_add2, 4, 0);
    grid->addWidget(name, 0, 0);
    grid->addWidget(le1, 0, 1);
    grid->addWidget(surname, 1, 0);
    grid->addWidget(le2, 1, 1);
    grid->addWidget(age, 2, 0);
    grid->addWidget(le3, 2, 1);
    grid->addWidget(salary, 3, 0);
    grid->addWidget(le4, 3, 1);

    setLayout(grid);


}

Ledit::~Ledit()
{


    grid ->removeWidget(ptr_add2);
    grid ->removeWidget(ptr_cancel2);
    grid ->removeWidget(name);
    grid ->removeWidget(le1);
    grid ->removeWidget(surname);
    grid ->removeWidget(le2);
    grid ->removeWidget(age);
    grid ->removeWidget(le3);
    grid ->removeWidget(salary);
    grid ->removeWidget(le4);

    delete name;
    delete surname;
    delete age;
    delete salary;
    delete le1;
    delete le2;
    delete le3;
    delete le4;
    delete ptr_add2;
    delete ptr_cancel2;



}


