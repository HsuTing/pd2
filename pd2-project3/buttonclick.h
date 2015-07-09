#ifndef BUTTONCLICK_H
#define BUTTONCLICK_H

#include <QLabel>
#include <QWidget>
#include <QMouseEvent>
#include <QDebug>

#include <iostream>
using namespace std;

class ButtonClick : public QLabel
{
    Q_OBJECT
public:
    explicit ButtonClick(QWidget *parent = 0);

    void mousePressEvent(QMouseEvent *ev);
    int operator -(ButtonClick& B);
signals:
    void Mouse_Pressed(ButtonClick* a);

public slots:
};

#endif // BUTTONCLICK_H
