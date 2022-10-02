#include "add_per.h"

Ledit::Ledit(QWidget *parent) // make a class to add people for widget.cpp
    : QWidget(parent)
{

  grid = new QGridLayout();
}

QGridLayout *Ledit::get_grid()
{
    //setLayout(grid);
    return grid;
}

//void Ledit::delet()
//{
//    delete grid;
//}

//QGridLayout *Ledit :: new1()
//{
//  grid = new QGridLayout();
//  return grid;
//}
