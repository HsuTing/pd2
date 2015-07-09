#include "newgame.h"

newgame::newgame(QWidget *parent) : QLabel(parent)
{

}

void newgame::mousePressEvent(QMouseEvent *ev)
{
    emit Mouse_Pressed();
}

