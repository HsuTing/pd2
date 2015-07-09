#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "buttonclick.h"

#include <iostream>
#include <ctime>
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
    void Mouse_Pressed(ButtonClick* a);
    void Mouse_Pressed();

private:
    Ui::MainWindow *ui;

    int *score;
    int move;
    int star;
    int map[8][8];
    ButtonClick* addr[8][8];
    ButtonClick* first_button;
    int first_i;
    int first_j;
    ButtonClick* second_button;
    int second_i;
    int second_j;

    void Origin();
    void SetImage();
    void SetAddr();
    void PrintMap();
    void ShowMap();
    int FindButtonI(ButtonClick *a);
    int FindButtonJ(ButtonClick *a);
    void Change();
    void Drop();
    bool Check();
    bool CheckSymbol(bool choice);
    bool Compare();
};

#endif // MAINWINDOW_H
