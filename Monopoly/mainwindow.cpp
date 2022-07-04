#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <Game.h>
#include <Player.h>
#include <string>
#include <iostream>
#include <time.h>
#include <ctime>

int Counter=0;

enum PlayerName{barrow,baseball,car,dog,dragon,ship,soccer,surfer};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DicePtr->hide();
    ui->groupBox->setStyleSheet("background-color : lightblue");
    GroupName_ptr->hide();
    buttonName_ptr->hide();

    for (int i = 0; i < 8; ++i) {
        playerName_ptr[i] = new QLineEdit(this);
        labelName_ptr[i] = new QLabel(this);
        PlayerLabel[i]= new QLabel(this);
        playerName_ptr[i]->hide();
        labelName_ptr[i]->hide();
        PlayerLabel[i]->hide();
    }
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
    Dice->setGeometry(128,200,140,70);
    Dice->setText("Roll the dice");
    Dice->show();
}

void MainWindow::setGroupName(){
    QGroupBox *GroupName = new QGroupBox(this);
    GroupName->setGeometry(240,190,171,220);
    GroupName->setTitle(" Please enter name of players ");
    GroupName->setAutoFillBackground(true);
    GroupName->setStyleSheet("background-color : lightgreen");
    GroupName->show();
    GroupName_ptr = GroupName;
}

QString MainWindow::ConvertEnumtoString(int num){
    QString str;
    switch (num) {
    case barrow:
        str = "barrow :";
        break;
    case baseball:
        str = "baseball :";
        break;
    case car:
        str = "car :";
        break;
    case dog:
        str = "dog :";
        break;
    case dragon:
        str = "dragon :";
        break;
    case ship:
        str = "ship :";
        break;
    case soccer:
        str = "soccer :";
        break;
    case surfer:
        str = "surfer :";
        break;
    default:
        break;
    }
    return str;
}

void MainWindow::setLabelName(){
    QLabel *name[game.getNumOfPlayer()];
    int y=210;
    for (int i = 0; i < game.getNumOfPlayer(); ++i) {
        name[i] = new QLabel(this);
        name[i]->setText(ConvertEnumtoString(i));
        name[i]->setGeometry(250,y,60,20);
        y=y+20;
        name[i]->show();
        labelName_ptr[i] = name[i];
    }
}


void MainWindow::setPushbuttonName(){
    QPushButton *NameButton = new QPushButton(this);
    NameButton->setGeometry(293,385,70,20);
    NameButton->show();
    connect(NameButton,SIGNAL(clicked()),this,SLOT(on_PushbottonName_clicked()));
    NameButton->setText("OK");
    buttonName_ptr=NameButton;
    QLineEdit *p[8];

    int y=212;
    for (int i = 0; i < game.getNumOfPlayer(); ++i) {
        p[i] = new QLineEdit(this);
        p[i]->setGeometry(300,y,70,20);
        y = y+20;
        p[i]->show();
        playerName_ptr[i] =p[i];
    }
}


void MainWindow::on_PushbottonName_clicked(){

    //check beshe ke hame bazikuna esm daran va esm hashon shabih nis

    for (int i = 0; i < game.getNumOfPlayer(); ++i) {
        game.player[i]->setPlayerName(playerName_ptr[i]->text());
        playerName_ptr[i]->hide();
        labelName_ptr[i]->hide();
    }
    GroupName_ptr->hide();
    buttonName_ptr->hide();

    PrintBoardGame(game.getNumOfPlayer());

}


void MainWindow::on_choice2_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 2 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(2);

    setGroupName();
    setLabelName();

    setPushbuttonName();
}


void MainWindow::on_choice3_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 3 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(3);

    setGroupName();
    setLabelName();
    setPushbuttonName();

}

void MainWindow::on_choice4_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 4 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(4);

    setGroupName();
    setLabelName();
    setPushbuttonName();


}

void MainWindow::on_choice5_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 5 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(5);

    setGroupName();
    setLabelName();

    setPushbuttonName();

}

void MainWindow::on_choice6_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 6 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(6);

    setGroupName();
    setLabelName();


    setPushbuttonName();
}


void MainWindow::on_choice7_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 7 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(7);

    setGroupName();
    setLabelName();

    setPushbuttonName();

}

void MainWindow::on_choice8_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 8 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(8);

    setGroupName();
    setLabelName();

    setPushbuttonName();

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
        game.player[0]->setCoordinates(Coordinates);
        PlayerLabel[barrow] = player;
        break;
    case baseball:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/baseball.png"));
        player->setGeometry(590,555,25,25);
        Coordinates.x=460;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[1]->setCoordinates(Coordinates);
        PlayerLabel[baseball] = player;
        break;
    case car:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/car.png"));
        player->setGeometry(570,535,25,25);
        Coordinates.x=440;
        Coordinates.y=405;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[2]->setCoordinates(Coordinates);
        PlayerLabel[car] = player;
        break;
    case dog:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/dog.png"));
        player->setGeometry(570,555,25,25);
        Coordinates.x=440;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[3]->setCoordinates(Coordinates);
        PlayerLabel[dog] = player;
        break;
    case dragon:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/dragon.png"));
        player->setGeometry(550,535,25,25);
        Coordinates.x=420;
        Coordinates.y=405;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[4]->setCoordinates(Coordinates);
        PlayerLabel[dragon] = player;
        break;
    case ship:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/ship.png"));
        player->setGeometry(550,555,25,25);
        Coordinates.x=420;
        Coordinates.y=425;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[5]->setCoordinates(Coordinates);
        PlayerLabel[ship] = player;
        break;
    case soccer:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/soccer.png"));
        player->setGeometry(550,575,25,25);
        Coordinates.x=420;
        Coordinates.y=445;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[6]->setCoordinates(Coordinates);
        PlayerLabel[soccer] = player;
        break;
    case surfer:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/surfer.png"));
        player->setGeometry(575,575,25,25);
        Coordinates.x=440;
        Coordinates.y=445;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[7]->setCoordinates(Coordinates);
        PlayerLabel[surfer] = player;
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
    // Geometries set
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
        chancepic2->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Chance/Chance/2.png"));
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

    if (number1 == number2)
    {
        QMessageBox::information(this ,"Message", "Pair of dice ");
    }

    //DicePtr->hide();
    if(Counter == (game.getNumOfPlayer()-1)){
        Counter = 0;
    }
    else{
        Counter++;
    }

    int x,y;
    game.player[Counter]->setX(game.player[Counter]->getX()-10*(number1+number2));

    PlayerLabel[Counter]->setGeometry(game.player[Counter]->getX()-10*(number1+number2) ,game.player[Counter]->getY()+120 ,60 ,60);
    qDebug()<<game.player[Counter]->getY();

}




