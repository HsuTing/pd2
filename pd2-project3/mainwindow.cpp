#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "star.h"
#include "bomb.h"
#include "buttonclick.h"
#include "verticalline.h"
#include "horizontalline.h"
#include "basic.h"
#include "newgame.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SetAddr();
    Origin();
    ShowMap();

    connect(ui->RESET, SIGNAL(Mouse_Pressed()), this, SLOT(Mouse_Pressed()));
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            connect(addr[i][j], SIGNAL(Mouse_Pressed(ButtonClick*)), this, SLOT(Mouse_Pressed(ButtonClick*)));
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Mouse_Pressed(ButtonClick *a)
{
    if(move == 0) {
        return;
    }

    if(first_button == NULL) {
        first_button = a;
        first_i = FindButtonI(a);
        first_j = FindButtonJ(a);

        int start_i = first_i - 1 >= 0 ? first_i - 1 : 0;
        int start_j = first_j - 1 >= 0 ? first_j - 1 : 0;

        switch(map[first_i][first_j]) {
            case 7:
                for(int j = 0; j < 8; j++) {
                    map[first_i][j] = 0;
                    *score = *score + 10;
                }
                Drop();

                while(CheckSymbol(false) == true || Check() == false) {
                    Drop();
                }

                move = move - 1;
                ShowMap();
                first_button = NULL;
            break;
            case 8:
                for(int i = 0; i < 8; i++) {
                    map[i][first_j] = 0;
                    *score = *score + 10;
                }
                Drop();

                while(CheckSymbol(false) == true || Check() == false) {
                    Drop();
                }

                move = move - 1;
                ShowMap();
                first_button = NULL;
            break;
            case 9:
                for(int i = start_i; i < start_i + 3 && i < 8; i++) {
                    for(int j = start_j; j < start_j + 3 && j < 8; j++) {
                        map[i][j] = 0;
                        *score = *score + 10;
                    }
                }
                Drop();

                while(CheckSymbol(false) == true || Check() == false) {
                    Drop();
                }

                move = move - 1;
                ShowMap();
                first_button = NULL;
            break;
            default:
                break;
        }
    }
    else {
        second_button = a;
        second_i = FindButtonI(a);
        second_j = FindButtonJ(a);

        if(map[first_i][first_j] == 10 || map[second_i][second_j] == 10) {
            int value = (map[first_i][first_j] != 10) ? map[first_i][first_j] : map[second_i][second_j];
            int pi = (map[first_i][first_j] == 10) ? first_i : second_i;
            int pj = (map[first_i][first_j] == 10) ? first_j : second_j;
            map[pi][pj] = 0;

            for(int i = 0; i < 8; i++) {
                for(int j = 0; j < 8; j++) {
                    if(map[i][j] == value) {
                        map[i][j] = 0;
                    }
                }
            }
            Drop();

            while(CheckSymbol(false) == true || Check() == false) {
                Drop();
            }

            move = move - 1;
            ShowMap();
        }
        else if((first_i == second_i && first_j == second_j + 1) || (first_i == second_i && first_j == second_j - 1)
            || (first_i == second_i + 1 && first_j == second_j) || (first_i == second_i - 1&& first_j == second_j)) {
            Change();
            if(Compare()) {
                Drop();
                while(CheckSymbol(false) == true || Check() == false) {
                    Drop();
                }
                move = move - 1;
            }
            else {
                Change();
            }
            ShowMap();
        }

        first_button = NULL;
        second_button = NULL;
    }

    stringstream tempscore;
    tempscore << *score;
    QString output = QString::fromUtf8(tempscore.str().data(), tempscore.str().size());
    stringstream temptarget;
    temptarget << *score / 10;
    QString target = QString::fromUtf8(temptarget.str().data(), temptarget.str().size());
    stringstream tempmove;
    tempmove << "Target: ";
    tempmove << move;
    tempmove << "move";
    QString Move = QString::fromUtf8(tempmove.str().data(), tempmove.str().size());

    ui->SCORE->setText(output);
    ui->target->setText(target);
    ui->target_name->setText(Move);
    if(*score / 10 >= 50) {
        star = 1;
        ui->star_1->setPixmap(QPixmap( ":/image/button/star.png" ));
    }
    if(*score / 10 >= 150) {
        star = 2;
        ui->star_2->setPixmap(QPixmap( ":/image/button/star.png" ));
    }
    if(*score / 10 >= 200) {
        star = 3;
        ui->star_3->setPixmap(QPixmap( ":/image/button/star.png" ));
    }

    if(move == 0) {
        if(*score / 10 > 200) {
            ui->target_name->setText("Sccess!!!");
        }
        else {
            ui->target_name->setText("Fail!!!");
        }
    }
}

void MainWindow::Mouse_Pressed()
{
    Origin();
    ShowMap();
}

void MainWindow::Origin()
{
    srand(time(NULL));
    memset(map, 0, sizeof(map));
    first_button = NULL;
    second_button = NULL;

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            map[i][j] = rand()%6 + 1;
        }
    }

    while(CheckSymbol(true) == true || Check() == false) {
        Drop();
    }

    *score = 0;
    move = 30;
    star = 0;
    ui->SCORE->setText("0");
    ui->target->setText("0");
    ui->target_name->setText("Target: 30move");
    ui->star_1->setPixmap(QPixmap( "" ));
    ui->star_2->setPixmap(QPixmap( "" ));
    ui->star_3->setPixmap(QPixmap( "" ));
}

void MainWindow::SetAddr()
{
    addr[0][0] = ui->button_1;
    addr[0][1] = ui->button_2;
    addr[0][2] = ui->button_3;
    addr[0][3] = ui->button_4;
    addr[0][4] = ui->button_5;
    addr[0][5] = ui->button_6;
    addr[0][6] = ui->button_7;
    addr[0][7] = ui->button_8;

    addr[1][0] = ui->button_9;
    addr[1][1] = ui->button_10;
    addr[1][2] = ui->button_11;
    addr[1][3] = ui->button_12;
    addr[1][4] = ui->button_13;
    addr[1][5] = ui->button_14;
    addr[1][6] = ui->button_15;
    addr[1][7] = ui->button_16;

    addr[2][0] = ui->button_17;
    addr[2][1] = ui->button_18;
    addr[2][2] = ui->button_19;
    addr[2][3] = ui->button_20;
    addr[2][4] = ui->button_21;
    addr[2][5] = ui->button_22;
    addr[2][6] = ui->button_23;
    addr[2][7] = ui->button_24;

    addr[3][0] = ui->button_25;
    addr[3][1] = ui->button_26;
    addr[3][2] = ui->button_27;
    addr[3][3] = ui->button_28;
    addr[3][4] = ui->button_29;
    addr[3][5] = ui->button_30;
    addr[3][6] = ui->button_31;
    addr[3][7] = ui->button_32;

    addr[4][0] = ui->button_33;
    addr[4][1] = ui->button_34;
    addr[4][2] = ui->button_35;
    addr[4][3] = ui->button_36;
    addr[4][4] = ui->button_37;
    addr[4][5] = ui->button_38;
    addr[4][6] = ui->button_39;
    addr[4][7] = ui->button_40;

    addr[5][0] = ui->button_41;
    addr[5][1] = ui->button_42;
    addr[5][2] = ui->button_43;
    addr[5][3] = ui->button_44;
    addr[5][4] = ui->button_45;
    addr[5][5] = ui->button_46;
    addr[5][6] = ui->button_47;
    addr[5][7] = ui->button_48;

    addr[6][0] = ui->button_49;
    addr[6][1] = ui->button_50;
    addr[6][2] = ui->button_51;
    addr[6][3] = ui->button_52;
    addr[6][4] = ui->button_53;
    addr[6][5] = ui->button_54;
    addr[6][6] = ui->button_55;
    addr[6][7] = ui->button_56;

    addr[7][0] = ui->button_57;
    addr[7][1] = ui->button_58;
    addr[7][2] = ui->button_59;
    addr[7][3] = ui->button_60;
    addr[7][4] = ui->button_61;
    addr[7][5] = ui->button_62;
    addr[7][6] = ui->button_63;
    addr[7][7] = ui->button_64;
}

void MainWindow::PrintMap()
{
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cout << map[i][j];
        }
        cout << endl;
    }
}

void MainWindow::ShowMap()
{
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            switch(map[i][j]) {
                case 1:
                    addr[i][j]->setPixmap(QPixmap( ":/image/button/1.png" ));
                break;
                case 2:
                    addr[i][j]->setPixmap(QPixmap( ":/image/button/2.png" ));
                break;
                case 3:
                    addr[i][j]->setPixmap(QPixmap( ":/image/button/3.png" ));
                break;
                case 4:
                    addr[i][j]->setPixmap(QPixmap( ":/image/button/4.png" ));
                break;
                case 5:
                    addr[i][j]->setPixmap(QPixmap( ":/image/button/5.png" ));
                break;
                case 6:
                    addr[i][j]->setPixmap(QPixmap( ":/image/button/6.png" ));
                break;
                case 7:
                    addr[i][j]->setPixmap(QPixmap( ":/image/button/7.png" ));
                break;
                case 8:
                    addr[i][j]->setPixmap(QPixmap( ":/image/button/8.png" ));
                break;
                case 9:
                    addr[i][j]->setPixmap(QPixmap( ":/image/button/9.png" ));
                break;
                case 10:
                    addr[i][j]->setPixmap(QPixmap( ":/image/button/10.png" ));
                break;
                default:
                    addr[i][j]->setPixmap(QPixmap( "" ));
                break;
            }
        }
    }
}

int MainWindow::FindButtonI(ButtonClick* a)
{
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(a == addr[i][j]) {
                return i;
            }
        }
    }

    return -1;
}

int MainWindow::FindButtonJ(ButtonClick *a)
{
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(a == addr[i][j]) {
                return j;
            }
        }
    }

    return -1;
}

void MainWindow::Change()
{
    int temp = map[first_i][first_j];
    map[first_i][first_j] = map[second_i][second_j];
    map[second_i][second_j] = temp;
}

void MainWindow::Drop()
{
    srand(time(NULL));
    for(int i = 7; i >= 1; i--) {
        for(int j = 0; j < 8; j++) {
            if(map[i][j] == 0) {
                map[i][j] = map[i - 1][j];
                map[i - 1][j] = 0;
            }
        }
    }

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(map[i][j] == 0) {
                map[i][j] = rand()%6 + 1;
            }
        }
    }
}

bool MainWindow::Check()
{
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(map[i][j] == 0) {
                return false;
            }
        }
    }

    return true;
}

bool MainWindow::CheckSymbol(bool choice)
{
    bool output = false;
    Star s = Star();
    Bomb bb = Bomb();
    VerticalLine vl = VerticalLine();
    HorizontalLine hl = HorizontalLine();
    Basic b = Basic();

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(s.Compare(map, i, j, score)) {
                if(choice) {
                    map[i][j] = 0;
                }
                output = true;
            }
            else if(bb.Compare(map, i, j, score)) {
                if(choice) {
                    map[i][j] = 0;
                }
                output = true;
            }
            else if(vl.Compare(map, i, j, score)) {
                if(choice) {
                    map[i][j] = 0;
                }
                output = true;
            }
            else if(hl.Compare(map, i, j, score)) {
                if(choice) {
                    map[i][j] = 0;
                }
                output = true;
            }
            else if(b.Compare(map, i, j, score)) {
                if(choice) {
                    map[i][j] = 0;
                }
                output = true;
            }
        }
    }

    return output;
}

bool MainWindow::Compare()
{
    Star s = Star();
    Bomb bb = Bomb();
    VerticalLine vl = VerticalLine();
    HorizontalLine hl = HorizontalLine();
    Basic b = Basic();

    if(s.Compare(map, first_i, first_j, score)) {
        return true;
    }
    else if(s.Compare(map, second_i, second_j, score)) {
        return true;
    }
    else if(bb.Compare(map, first_i, first_j, score)) {
        return true;
    }
    else if(bb.Compare(map, second_i, second_j, score)) {
        return true;
    }
    else if(vl.Compare(map, first_i, first_j, score)) {
        return true;
    }
    else if(vl.Compare(map, second_i, second_j, score)) {
        return true;
    }
    else if(hl.Compare(map, first_i, first_j, score)) {
        return true;
    }
    else if(hl.Compare(map, second_i, second_j, score)) {
        return true;
    }
    else if(b.Compare(map, first_i, first_j, score)) {
        return true;
    }
    else if(b.Compare(map, second_i, second_j, score)) {
        return true;
    }
    else {
        return false;
    }
}
