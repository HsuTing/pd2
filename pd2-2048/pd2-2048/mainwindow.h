#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

#include <cstring>
#include <cstdio>
#include <iostream>
#include <ctime>
#include <string>
#include <string.h>
#include <sstream>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void Mouse_Pressed();

private:
    Ui::MainWindow *ui;
    bool status;
    int map[4][4];
    int check_map[4][4];
    string color[11];
    int score;

    void keyPressEvent(QKeyEvent * event);
    void reset();
    void set_color();
    void rand_map();
    void print_map();
    void show_map();
    void check_map_functon();
    int get_score();
    bool up();
    bool down();
    bool right();
    bool left();
};

#endif // MAINWINDOW_H
