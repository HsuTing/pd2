#include "buttonclick.h"

ButtonClick::ButtonClick(QWidget *parent) : QLabel(parent)
{

}

void ButtonClick::mousePressEvent(QMouseEvent *ev)
{
    emit Mouse_Pressed(this);
}

int ButtonClick::operator -(ButtonClick &B)
{
    return *this - B;
}

