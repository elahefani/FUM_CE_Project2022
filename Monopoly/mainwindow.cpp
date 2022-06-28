#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
//#include <Game.h>
#include <string>
#include <iostream>
#include <time.h>

enum PlayerName{barrow,baseball,car,dog,dragon,ship,soccer,surfer};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int randomgenerator(){

    int num1;
    srand(time(0));
    num1 = (rand() % 6) + 1;

    return num1;
}

void MainWindow::on_choice2_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 2 players. ");
    ui->groupBox->hide();
    ui->choice2->hide();
    game.setNumOfPlayer(2);
    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/Monopoly.jpg");
    ui->Board->setPixmap(pm);
    ui->Board->setScaledContents(true);

    CreatePlayers(barrow);
    CreatePlayers(baseball);

}

void MainWindow::on_choice3_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 3 players. ");
    ui->groupBox->hide();
    ui->choice3->hide();
    game.setNumOfPlayer(3);
    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/Monopoly.jpg");
    ui->Board->setPixmap(pm);
    ui->Board->setScaledContents(true);

    CreatePlayers(barrow);
    CreatePlayers(baseball);
    CreatePlayers(car);

}

void MainWindow::on_choice4_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 4 players. ");
    ui->groupBox->hide();
    ui->choice4->hide();
    game.setNumOfPlayer(4);
    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/Monopoly.jpg");
    ui->Board->setPixmap(pm);
    ui->Board->setScaledContents(true);

    CreatePlayers(barrow);
    CreatePlayers(baseball);
    CreatePlayers(car);
    CreatePlayers(dog);

}

void MainWindow::on_choice5_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 5 players. ");
    ui->groupBox->hide();
    ui->choice5->hide();
    game.setNumOfPlayer(5);
    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/Monopoly.jpg");
    ui->Board->setPixmap(pm);
    ui->Board->setScaledContents(true);

    CreatePlayers(barrow);
    CreatePlayers(baseball);
    CreatePlayers(car);
    CreatePlayers(dog);
    CreatePlayers(dragon);

}

void MainWindow::on_choice6_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 6 players. ");
    ui->groupBox->hide();
    ui->choice6->hide();
    game.setNumOfPlayer(6);
    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/Monopoly.jpg");
    ui->Board->setPixmap(pm);
    ui->Board->setScaledContents(true);

    CreatePlayers(barrow);
    CreatePlayers(baseball);
    CreatePlayers(car);
    CreatePlayers(dog);
    CreatePlayers(dragon);
    CreatePlayers(ship);

}

void MainWindow::on_choice7_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 7 players. ");
    ui->groupBox->hide();
    ui->choice7->hide();
    game.setNumOfPlayer(7);
    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/Monopoly.jpg");
    ui->Board->setPixmap(pm);
    ui->Board->setScaledContents(true);

    CreatePlayers(barrow);
    CreatePlayers(baseball);
    CreatePlayers(car);
    CreatePlayers(dog);
    CreatePlayers(dragon);
    CreatePlayers(ship);
    CreatePlayers(soccer);

}

void MainWindow::on_choice8_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 8 players. ");
    ui->groupBox->hide();
    ui->choice8->hide();
    game.setNumOfPlayer(8);
    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/Monopoly.jpg");
    ui->Board->setPixmap(pm);
    ui->Board->setScaledContents(true);

    CreatePlayers(barrow);
    CreatePlayers(baseball);
    CreatePlayers(car);
    CreatePlayers(dog);
    CreatePlayers(dragon);
    CreatePlayers(ship);
    CreatePlayers(soccer);
    CreatePlayers(surfer);

}

void MainWindow::CreatePlayers(int name){
    QLabel *player = new QLabel(this);
    coordinate Coordinates;
    switch (name) {
    case barrow:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/barrow.png"));
        player->setGeometry(460,405,25,25);
        Coordinates.x=460;
        Coordinates.y=405;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[0].setCoordinates(Coordinates);
        break;
    case baseball:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/baseball.png"));
        player->setGeometry(460,425,25,25);
        Coordinates.x=460;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[1].setCoordinates(Coordinates);
        break;
    case car:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/car.png"));
        player->setGeometry(440,405,25,25);
        Coordinates.x=440;
        Coordinates.y=405;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[2].setCoordinates(Coordinates);
        break;
    case dog:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/dog.png"));
        player->setGeometry(440,425,25,25);
        Coordinates.x=440;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[3].setCoordinates(Coordinates);
        break;
    case dragon:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/dragon.png"));
        player->setGeometry(420,405,25,25);
        Coordinates.x=420;
        Coordinates.y=405;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[4].setCoordinates(Coordinates);
        break;
    case ship:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/ship.png"));
        player->setGeometry(420,425,25,25);
        Coordinates.x=420;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[5].setCoordinates(Coordinates);
        break;
    case soccer:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/soccer.png"));
        player->setGeometry(420,445,25,25);
        Coordinates.x=420;
        Coordinates.y=445;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[6].setCoordinates(Coordinates);
        break;
    case surfer:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/surfer.png"));
        player->setGeometry(440,445,25,25);
        Coordinates.x=440;
        Coordinates.y=445;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[7].setCoordinates(Coordinates);
        break;
    default:
        break;
    }

    player->setFixedWidth(25);
    player->setFixedHeight(25);
    player->setScaledContents(true);
    player->show();
}
