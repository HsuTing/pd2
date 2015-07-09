#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>

#include "newgame.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->NewGame, SIGNAL(Mouse_Pressed()), this, SLOT(Mouse_Pressed()));

    memset(map, 0, sizeof(map));
    memset(check_map, 0, sizeof(check_map));
    set_color();
    reset();
    rand_map();
    show_map();
    score = 0;
    ui->score->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Mouse_Pressed()
{
    memset(map, 0, sizeof(map));
    memset(check_map, 0, sizeof(check_map));

    reset();
    rand_map();
    show_map();
    score = 0;
    ui->score->setText("0");
}

void MainWindow::keyPressEvent(QKeyEvent * event)
{
    if(status == false) {
        if(event->key() == Qt::Key_Up) {
            if(up() == false) {
                return;
            }

            for(int i = 1; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[i][j] == 1) {
                        for(int k = i; k >= 1; k--) {
                            if(check_map[k - 1][j] == 0) {
                                map[k - 1][j] = map[k][j];
                                map[k][j] = 0;
                                check_map[k - 1][j] = 1;
                                check_map[k][j] = 0;
                            }
                        }
                    }
                }
            }

            for(int i = 1; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[i][j] == 1 && check_map[i - 1][j] == 1 && map[i][j] == map[i - 1][j]) {
                        map[i - 1][j] = map[i - 1][j] + map[i][j];
                        map[i][j] = 0;
                        check_map[i][j] = 0;
                    }
                }
            }

            for(int i = 1; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[i][j] == 1) {
                        for(int k = i; k >= 1; k--) {
                            if(check_map[k - 1][j] == 0) {
                                map[k - 1][j] = map[k][j];
                                map[k][j] = 0;
                                check_map[k - 1][j] = 1;
                                check_map[k][j] = 0;
                            }
                        }
                    }
                }
            }
        }

        if(event->key() == Qt::Key_Down) {
            if(down() == false) {
                return;
            }

            for(int i = 2; i >= 0; i--) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[i][j] == 1) {
                        for(int k = i; k <= 2; k++) {
                            if(check_map[k + 1][j] == 0) {
                                map[k + 1][j] = map[k][j];
                                map[k][j] = 0;
                                check_map[k + 1][j] = 1;
                                check_map[k][j] = 0;
                            }
                        }
                    }
                }
            }

            for(int i = 2; i >= 0; i--) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[i][j] == 1 && check_map[i + 1][j] == 1 && map[i][j] == map[i + 1][j]) {
                        map[i + 1][j] = map[i + 1][j] + map[i][j];
                        map[i][j] = 0;
                        check_map[i][j] = 0;
                    }
                }
            }

            for(int i = 2; i >= 0; i--) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[i][j] == 1) {
                        for(int k = i; k <=2; k++) {
                            if(check_map[k + 1][j] == 0) {
                                map[k + 1][j] = map[k][j];
                                map[k][j] = 0;
                                check_map[k + 1][j] = 1;
                                check_map[k][j] = 0;
                            }
                        }
                    }
                }
            }
        }

        if(event->key() == Qt::Key_Right) {
            if(right() == false) {
                return;
            }

            for(int i = 2; i >= 0; i--) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[j][i] == 1) {
                        for(int k = i; k <= 2; k++) {
                            if(check_map[j][k + 1] == 0) {
                                map[j][k + 1] = map[j][k];
                                map[j][k] = 0;
                                check_map[j][k + 1] = 1;
                                check_map[j][k] = 0;
                            }
                        }
                    }
                }
            }

            for(int i = 2; i >= 0; i--) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[j][i] == 1 && check_map[j][i + 1] == 1 && map[j][i] == map[j][i + 1]) {
                        map[j][i + 1] = map[j][i + 1] + map[j][i];
                        map[j][i] = 0;
                        check_map[j][i] = 0;
                    }
                }
            }

            for(int i = 2; i >= 0; i--) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[j][i] == 1) {
                        for(int k = i; k <= 2; k++) {
                            if(check_map[j][k + 1] == 0) {
                                map[j][k + 1] = map[j][k];
                                map[j][k] = 0;
                                check_map[j][k + 1] = 1;
                                check_map[j][k] = 0;
                            }
                        }
                    }
                }
            }
        }

        if(event->key() == Qt::Key_Left) {
            if(left() == false) {
                return;
            }

            for(int i = 1; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[j][i] == 1) {
                        for(int k = i; k >= 1; k--) {
                            if(check_map[j][k - 1] == 0) {
                                map[j][k - 1] = map[j][k];
                                map[j][k] = 0;
                                check_map[j][k - 1] = 1;
                                check_map[j][k] = 0;
                            }
                        }
                    }
                }
            }

            for(int i = 1; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[j][i] == 1 && check_map[j][i - 1] == 1 && map[j][i] == map[j][i - 1]) {
                        map[j][i - 1] = map[j][i - 1] + map[j][i];
                        map[j][i] = 0;
                        check_map[j][i] = 0;
                    }
                }
            }

            for(int i = 1; i < 4; i++) {
                for(int j = 0; j < 4; j++) {
                    if(check_map[j][i] == 1) {
                        for(int k = i; k >= 1; k--) {
                            if(check_map[j][k - 1] == 0) {
                                map[j][k - 1] = map[j][k];
                                map[j][k] = 0;
                                check_map[j][k - 1] = 1;
                                check_map[j][k] = 0;
                            }
                        }
                    }
                }
            }
        }

        if(event->key() == Qt::Key_Left || event->key() == Qt::Key_Right || event->key() == Qt::Key_Up || event->key() == Qt::Key_Down) {
            reset();
            rand_map();
            score = score + get_score();
            show_map();
            check_map_functon();
        }
    }
    else {
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                if(map[i][j] == 2014) {
                    ui->status->setText("Success!");
                }
            }
        }
    }
}

void MainWindow::reset()
{
    status = false;
    ui->status->setText("Game");
    ui->cell_1->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_2->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_3->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_4->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_5->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_6->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_7->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_8->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_9->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_10->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_11->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_12->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_13->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_14->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_15->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_16->setStyleSheet("background-color: rgba(238, 228, 218, 0.35);color: rgb(255, 255, 255);");
    ui->cell_1->setText("");
    ui->cell_2->setText("");
    ui->cell_3->setText("");
    ui->cell_4->setText("");
    ui->cell_5->setText("");
    ui->cell_6->setText("");
    ui->cell_7->setText("");
    ui->cell_8->setText("");
    ui->cell_9->setText("");
    ui->cell_10->setText("");
    ui->cell_11->setText("");
    ui->cell_12->setText("");
    ui->cell_13->setText("");
    ui->cell_14->setText("");
    ui->cell_15->setText("");
    ui->cell_16->setText("");
}

void MainWindow::set_color()
{
    color[0] = "background-color: rgba(252, 248, 244, 0.5);color: rgb(255, 255, 255);";
    color[1] = "background-color: rgba(237, 224, 200, 1);color: rgb(255, 255, 255);";
    color[2] = "background-color: rgba(242, 117, 121, 1);color: rgb(255, 255, 255);";
    color[3] = "background-color: rgba(245, 149, 99, 1);color: rgb(255, 255, 255);";
    color[4] = "background-color: rgba(246, 124, 95, 1);color: rgb(255, 255, 255);";
    color[5] = "background-color: rgba(246, 94, 59, 1);color: rgb(255, 255, 255);";
    color[6] = "background-color: rgba(237, 207, 114, 1);color: rgb(255, 255, 255);";
    color[7] = "background-color: rgba(237, 204, 97, 1);color: rgb(255, 255, 255);";
    color[8] = "background-color: rgba(237, 200, 80, 1);color: rgb(255, 255, 255);";
    color[9] = "background-color: rgba(203, 237, 80, 1);color: rgb(255, 255, 255);";
    color[10] = "background-color: rgba(237, 235, 80, 1);color: rgb(255, 255, 255);";
}

void MainWindow::rand_map()
{
    srand(time(NULL));
    int check = 0;

    do {
        int temp_x_1 = rand()%4;
        int temp_y_1 = rand()%4;
        int temp_x_2 = rand()%4;
        int temp_y_2 = rand()%4;

        if(check_map[temp_x_1][temp_y_1] == 1 || check_map[temp_x_2][temp_y_2]) {
            continue;
        }
        check = 1;

        if(temp_x_1 == temp_x_2 && temp_y_1 == temp_y_2) {
            map[temp_x_1][temp_y_1] = 4;
            check_map[temp_x_1][temp_y_1] = 1;
        }
        else {
            map[temp_x_1][temp_y_1] = 2;
            map[temp_x_2][temp_y_2] = 2;
            check_map[temp_x_1][temp_y_1] = 1;
            check_map[temp_x_2][temp_y_2] = 1;
        }
    }while(check == 0);
}

void MainWindow::print_map()
{
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            std::cout << map[i][j] << "|" << check_map[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

void MainWindow::show_map()
{
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(check_map[i][j] == 1) {
                int num = map[i][j];
                int count = 1;
                while(num / 2 != 1) {
                    num = num / 2;
                    count++;
                }

                QString changeColor = QString::fromUtf8(color[count - 1].data(), color[count - 1].size());
                stringstream tempname;
                tempname << map[i][j];
                QString name = QString::fromUtf8(tempname.str().data(), tempname.str().size());
                switch(i * 4 + j + 1) {
                    case 1:
                        ui->cell_1->setStyleSheet(changeColor);
                        ui->cell_1->setText(name);
                        break;
                    case 2:
                        ui->cell_2->setStyleSheet(changeColor);
                        ui->cell_2->setText(name);
                        break;
                    case 3:
                        ui->cell_3->setStyleSheet(changeColor);
                        ui->cell_3->setText(name);
                        break;
                    case 4:
                        ui->cell_4->setStyleSheet(changeColor);
                        ui->cell_4->setText(name);
                        break;
                    case 5:
                        ui->cell_5->setStyleSheet(changeColor);
                        ui->cell_5->setText(name);
                        break;
                    case 6:
                        ui->cell_6->setStyleSheet(changeColor);
                        ui->cell_6->setText(name);
                        break;
                    case 7:
                        ui->cell_7->setStyleSheet(changeColor);
                        ui->cell_7->setText(name);
                        break;
                    case 8:
                        ui->cell_8->setStyleSheet(changeColor);
                        ui->cell_8->setText(name);
                        break;
                    case 9:
                        ui->cell_9->setStyleSheet(changeColor);
                        ui->cell_9->setText(name);
                        break;
                    case 10:
                        ui->cell_10->setStyleSheet(changeColor);
                        ui->cell_10->setText(name);
                        break;
                    case 11:
                        ui->cell_11->setStyleSheet(changeColor);
                        ui->cell_11->setText(name);
                        break;
                    case 12:
                        ui->cell_12->setStyleSheet(changeColor);
                        ui->cell_12->setText(name);
                        break;
                    case 13:
                        ui->cell_13->setStyleSheet(changeColor);
                        ui->cell_13->setText(name);
                        break;
                    case 14:
                        ui->cell_14->setStyleSheet(changeColor);
                        ui->cell_14->setText(name);
                        break;
                    case 15:
                        ui->cell_15->setStyleSheet(changeColor);
                        ui->cell_15->setText(name);
                        break;
                    case 16:
                        ui->cell_16->setStyleSheet(changeColor);
                        ui->cell_16->setText(name);
                        break;
                }
            }
        }
    }
    stringstream tempscore;
    tempscore << score;
    QString output = QString::fromUtf8(tempscore.str().data(), tempscore.str().size());

    ui->score->setText(output);
}

void MainWindow::check_map_functon()
{
    int count = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(check_map[i][j] == 1) {
                if(i > 0) {
                    if(map[i][j] == map[i - 1][j])
                        continue;
                }
                if(i < 3) {
                    if(map[i][j] == map[i + 1][j])
                        continue;
                }
                if(j > 0) {
                    if(map[i][j] == map[i][j - 1])
                        continue;
                }
                if(j < 3) {
                    if(map[i][j] == map[i][j + 1])
                        continue;
                }

                count++;
            }
        }
    }

    if(status == false && count == 16) {
        ui->status->setText("Fail!");
        status = true;
    }
}

int MainWindow::get_score()
{
    int temp = 0;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            temp = temp + map[i][j];
        }
    }

    return temp;
}

bool MainWindow::up()
{
    int count = 0;
    for(int i = 0; i < 4; i++) {
        if(check_map[0][i] == 1) {
            count++;
        }
    }

    for(int i = 1; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(check_map[i][j] == 1) {
                count++;
            }

            if(map[i][j] == map[i - 1][j]) {
                return true;
            }
        }
    }

    if(count == 16) {
        return false;
    }
    else {
        return true;
    }
}

bool MainWindow::down()
{
    int count = 0;
    for(int i = 0; i < 4; i++) {
        if(check_map[3][i] == 1) {
            count++;
        }
    }

    for(int i = 2; i >= 0; i--) {
        for(int j = 0; j < 4; j++) {
            if(check_map[i][j] == 1) {
                count++;
            }

            if(map[i][j] == map[i + 1][j]) {
                return true;
            }
        }
    }

    if(count == 16) {
        return false;
    }
    else {
        return true;
    }
}

bool MainWindow::right()
{
    int count = 0;
    for(int i = 0; i < 4; i++) {
        if(check_map[i][3] == 1) {
            count++;
        }
    }

    for(int i = 2; i >= 0; i--) {
        for(int j = 0; j < 4; j++) {
            if(check_map[j][i] == 1) {
                count++;
            }

            if(map[j][i] == map[j][i + 1]) {
                return true;
            }
        }
    }

    if(count == 16) {
        return false;
    }
    else {
        return true;
    }
}

bool MainWindow::left()
{
    int count = 0;
    for(int i = 0; i < 4; i++) {
        if(check_map[i][0] == 1) {
            count++;
        }
    }

    for(int i = 1; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(check_map[j][i] == 1) {
                count++;
            }

            if(map[j][i] == map[j][i - 1]) {
                return true;
            }
        }
    }

    if(count == 16) {
        return false;
    }
    else {
        return true;
    }
}
