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
#include <ctime>

enum PlayerName{barrow,baseball,car,dog,dragon,ship,soccer,surfer};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DicePtr->hide();
    ui->groupBox->setStyleSheet("background-color : lightblue");
    playerName1_ptr->hide();
    labelName1_ptr->hide();
    GroupName_ptr->hide();
    buttonName_ptr->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::RandomGenerator(){

    int num;
    //srand(time(0));
    num = (rand() % 6) + 1;
    return num;
}

void MainWindow::PrintBoardGame(int NumOfPlayer){
    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/Monopoly.jpg");
    board->setPixmap(pm);
    board->setScaledContents(true);
    board->setGeometry(20,10,600,600);
    board->show();
    for(int i =0; i<NumOfPlayer; i++){
        CreatePlayers(i);
    }

    Dice();
}

void MainWindow::Dice(){
    QPushButton *Dice = new QPushButton(this);
    DicePtr = Dice;
    connect(Dice,SIGNAL(clicked()),this,SLOT(on_Dice_clicked()));
    Dice->setGeometry(127,115,140,70);
    Dice->show();
}

void MainWindow::setGroupName(){
    QGroupBox *GroupName = new QGroupBox(this);
    GroupName->setGeometry(240,190,171,171);
    GroupName->setTitle(" Please enter name of players ");
    GroupName->setAutoFillBackground(true);
    GroupName->setStyleSheet("background-color : lightgreen");
    GroupName->show();
    GroupName_ptr = GroupName;
}

void MainWindow::setLabelName(QLabel * name, QString text, int x, int y){
    name->setGeometry(x,y,60,20);
    name->setText(text);
    name->show();
}


void MainWindow::setPushbuttonName(){
    QPushButton *NameButton = new QPushButton(this);
    NameButton->setGeometry(293,335,70,20);
    NameButton->show();
    connect(NameButton,SIGNAL(clicked()),this,SLOT(on_PushbottonName_clicked()));
    NameButton->setText("OK");
    buttonName_ptr=NameButton;

    QLineEdit *playerName1=new QLineEdit(this);
    switch (game.getNumOfPlayer()) {
    case 2:
        playerName1->setGeometry(300,212,70,20);
        playerName1->show();
        playerName1_ptr = playerName1;
        break;
    default:
        break;
    }
}


void MainWindow::on_PushbottonName_clicked(){
    QString name = playerName1_ptr->text();
    playerName1_ptr->hide();
    GroupName_ptr->hide();
    labelName1_ptr->hide();
    buttonName_ptr->hide();
    qDebug()<<name;
    PrintBoardGame(game.getNumOfPlayer());

}

void MainWindow::on_choice2_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 2 players. ");
    ui->groupBox->hide();
    ui->choice2->hide();
    game.setNumOfPlayer(2);

    setGroupName();

    QLabel *name1 = new QLabel(this);
    QString text = "barrow :";
    setLabelName(name1,text,250,210);
    setPushbuttonName();
    labelName1_ptr = name1;


}


void MainWindow::on_choice3_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 3 players. ");
    ui->groupBox->hide();
    ui->choice3->hide();
    game.setNumOfPlayer(3);
}

void MainWindow::on_choice4_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 4 players. ");
    ui->groupBox->hide();
    ui->choice4->hide();
    game.setNumOfPlayer(4);
}

void MainWindow::on_choice5_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 5 players. ");
    ui->groupBox->hide();
    ui->choice5->hide();
    game.setNumOfPlayer(5);
}

void MainWindow::on_choice6_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 6 players. ");
    ui->groupBox->hide();
    ui->choice6->hide();
    game.setNumOfPlayer(6);
}


void MainWindow::on_choice7_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 7 players. ");
    ui->groupBox->hide();
    ui->choice7->hide();
    game.setNumOfPlayer(7);
}

void MainWindow::on_choice8_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 8 players. ");
    ui->groupBox->hide();
    ui->choice8->hide();
    game.setNumOfPlayer(8);

}

void MainWindow::CreatePlayers(int name){
    QLabel *player = new QLabel(this);
    coordinate Coordinates;
    switch (name) {
    case barrow:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/barrow.png"));
        player->setGeometry(590,535,25,25);
        Coordinates.x=460;
        Coordinates.y=405;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[0].setCoordinates(Coordinates);
        break;
    case baseball:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/baseball.png"));
        player->setGeometry(590,555,25,25);
        Coordinates.x=460;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[1].setCoordinates(Coordinates);
        break;
    case car:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/car.png"));
        player->setGeometry(570,535,25,25);
        Coordinates.x=440;
        Coordinates.y=405;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[2].setCoordinates(Coordinates);
        break;
    case dog:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/dog.png"));
        player->setGeometry(570,555,25,25);
        Coordinates.x=440;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[3].setCoordinates(Coordinates);
        break;
    case dragon:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/dragon.png"));
        player->setGeometry(550,535,25,25);
        Coordinates.x=420;
        Coordinates.y=405;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[4].setCoordinates(Coordinates);
        break;
    case ship:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/ship.png"));
        player->setGeometry(550,555,25,25);
        Coordinates.x=420;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[5].setCoordinates(Coordinates);
        break;
    case soccer:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/soccer.png"));
        player->setGeometry(550,575,25,25);
        Coordinates.x=420;
        Coordinates.y=445;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[6].setCoordinates(Coordinates);
        break;
    case surfer:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/surfer.png"));
        player->setGeometry(575,575,25,25);
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

void MainWindow::on_Dice_clicked(){
    int number1 = RandomGenerator();
    int number2 = RandomGenerator();
    // Gemetries should set
    switch (number1)
    {
    case 1:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/1.png"));
        chancepic1->setGeometry(130,120,60,60);
        //qDebug()<<number1;
        break;
    case 2:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/2.png"));
        chancepic1->setGeometry(130,120,60,60);
        break;
    case 3:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/3.png"));
        chancepic1->setGeometry(130,120,60,60);
        break;
    case 4:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/4.png"));
        chancepic1->setGeometry(130,120,60,60);
        break;
    case 5:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/5.png"));
        chancepic1->setGeometry(130,120,60,60);
        break;
    case 6:
        chancepic1->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/6.png"));
        chancepic1->setGeometry(130,120,60,60);
        break;
    default:
        break;
    }
    chancepic1->setFixedWidth(60);
    chancepic1->setFixedHeight(60);
    chancepic1->setScaledContents(true);
    chancepic1->show();


    switch (number2)
    {
    case 1:
        chancepic2->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/1.png"));
        chancepic2->setGeometry(210,120,60,60);
        break;
    case 2:
        chancepic2->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/2.png"));
        chancepic2->setGeometry(210,120,60,60);
        break;
    case 3:
        chancepic2->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/3.png"));
        chancepic2->setGeometry(210,120,60,60);
        break;
    case 4:
        chancepic2->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/4.png"));
        chancepic2->setGeometry(210,120,60,60);
        break;
    case 5:
        chancepic2->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/5.png"));
        chancepic2->setGeometry(210,120,60,60);
        break;
    case 6:
        chancepic2->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/6.png"));
        chancepic2->setGeometry(210,120,60,60);
        break;
    default:
        break;
    }

    chancepic2->setFixedWidth(60);
    chancepic2->setFixedHeight(60);
    chancepic2->setScaledContents(true);
    chancepic2->show();
    DicePtr->hide();

}
