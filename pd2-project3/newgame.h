#ifndef NEWGAME_H
#define NEWGAME_H

#include <QLabel>
#include <QMouseEvent>
#include <QEvent>

class newgame : public QLabel
{
    Q_OBJECT
public:
    explicit newgame(QWidget *parent = 0);

    void mousePressEvent(QMouseEvent *ev);
signals:
    void Mouse_Pressed();

public slots:
};

#endif // NEWGAME_H
