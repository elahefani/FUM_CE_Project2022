#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QString>
#include <QDebug>
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

    int num;
    srand(time(0));
    num = (rand() % 6) + 1;
    //qDebug()<< num;
    return num;
}

void MainWindow::on_choice2_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 2 players. ");
    ui->groupBox->hide();
    ui->choice2->hide();
    game.setNumOfPlayer(2);
    QPixmap pm("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/BoardImage/Monopoly.jpg");
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
    QPixmap pm("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/BoardImage/Monopoly.jpg");
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
    QPixmap pm("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/BoardImage/Monopoly.jpg");
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
    QPixmap pm("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/BoardImage/Monopoly.jpg");
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
    QPixmap pm("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/BoardImage/Monopoly.jpg");
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
    QPixmap pm("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/BoardImage/Monopoly.jpg");
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
    QPixmap pm("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/BoardImage/Monopoly.jpg");
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
        player->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Pieces/barrow.png"));
        player->setGeometry(590,535,25,25);
        Coordinates.x=460;
        Coordinates.y=405;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[0].setCoordinates(Coordinates);
        break;
    case baseball:
        player->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Pieces/baseball.png"));
        player->setGeometry(590,555,25,25);
        Coordinates.x=460;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[1].setCoordinates(Coordinates);
        break;
    case car:
        player->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Pieces/car.png"));
        player->setGeometry(570,535,25,25);
        Coordinates.x=440;
        Coordinates.y=405;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[2].setCoordinates(Coordinates);
        break;
    case dog:
        player->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Pieces/dog.png"));
        player->setGeometry(570,555,25,25);
        Coordinates.x=440;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[3].setCoordinates(Coordinates);
        break;
    case dragon:
        player->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Pieces/dragon.png"));
        player->setGeometry(550,535,25,25);
        Coordinates.x=420;
        Coordinates.y=405;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[4].setCoordinates(Coordinates);
        break;
    case ship:
        player->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Pieces/ship.png"));
        player->setGeometry(550,555,25,25);
        Coordinates.x=420;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[5].setCoordinates(Coordinates);
        break;
    case soccer:
        player->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Pieces/soccer.png"));
        player->setGeometry(550,575,25,25);
        Coordinates.x=420;
        Coordinates.y=445;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[6].setCoordinates(Coordinates);
        break;
    case surfer:
        player->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Pieces/surfer.png"));
        player->setGeometry(570,575,25,25);
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

void MainWindow::on_Chance_clicked()
{
    int number1 = randomgenerator();
    int number2 = randomgenerator();

    QLabel *chancepic1 = new QLabel(this);
    QLabel *chancepic2 = new QLabel(this);

    // Gemetries should set
    switch (number1)
    {
    case 1:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/1.jpg"));
        chancepic1->setGeometry(240,245,45,45);
        qDebug()<<number1;
        break;
    case 2:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/2.jpg"));
        chancepic1->setGeometry(240,245,45,45);
        break;
    case 3:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/3.jpg"));
        chancepic1->setGeometry(240,245,45,45);
        break;
    case 4:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/4.jpg"));
        chancepic1->setGeometry(240,245,45,45);
        break;
    case 5:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/5.jpg"));
        chancepic1->setGeometry(240,245,45,45);
        break;
    case 6:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/6.jpg"));
        chancepic1->setGeometry(240,245,45,45);
        break;
    default:
        break;
    }
    chancepic1->setFixedWidth(25);
    chancepic1->setFixedHeight(25);
    chancepic1->setScaledContents(true);
    chancepic1->show();


    switch (number2)
    {
    case 1:
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/1.jpg"));
        chancepic2->setGeometry(240,245,45,45);
        break;
    case 2:
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/2.jpg"));
        chancepic2->setGeometry(240,245,45,45);
        break;
    case 3:
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/3.jpg"));
        chancepic2->setGeometry(240,245,45,45);
        break;
    case 4:
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/4.jpg"));
        chancepic2->setGeometry(240,245,45,45);
        break;
    case 5:
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/5.jpg"));
        chancepic2->setGeometry(240,240,50,50);
        break;
    case 6:
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/6.jpg"));
        chancepic2->setGeometry(240,245,45,45);
        break;
    default:
        break;
    }

    chancepic2->show();

}
