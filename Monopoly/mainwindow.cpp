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
int flag = 0;
int flag1 = 0;

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
    num = (rand() % 6) + 1;
    return num;
}

void MainWindow::PrintBoardGame(int NumOfPlayer){
    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/Monopoly.jpg");
    board->setPixmap(pm);
    board->setScaledContents(true);
    board->setGeometry(20,10,600,600);
    board->show();
    QLabel *turn = new QLabel(this);
    turn->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Turn/1.jpg"));
    turn->setGeometry(284,120,250,50);
    turn->show();
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
        Coordinates.x=590;
        Coordinates.y=535;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[0]->setCoordinates(Coordinates);
        PlayerLabel[barrow] = player;
        PlayerLabel[barrow]->setScaledContents(true);
        PlayerLabel[barrow]->show();
        break;
    case baseball:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/baseball.png"));
        player->setGeometry(590,555,25,25);
        Coordinates.x=590;
        Coordinates.y=555;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[1]->setCoordinates(Coordinates);
        PlayerLabel[baseball] = player;
        PlayerLabel[baseball]->setScaledContents(true);
        PlayerLabel[baseball]->show();
        break;
    case car:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/car.png"));
        player->setGeometry(570,535,25,25);
        Coordinates.x=570;
        Coordinates.y=535;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[2]->setCoordinates(Coordinates);
        PlayerLabel[car] = player;
        PlayerLabel[car]->setScaledContents(true);
        PlayerLabel[car]->show();
        break;
    case dog:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/dog.png"));
        player->setGeometry(570,555,25,25);
        Coordinates.x=570;
        Coordinates.y=555;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[3]->setCoordinates(Coordinates);
        PlayerLabel[dog] = player;
        PlayerLabel[dog]->setScaledContents(true);
        PlayerLabel[dog]->show();
        break;
    case dragon:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/dragon.png"));
        player->setGeometry(550,535,25,25);
        Coordinates.x=550;
        Coordinates.y=535;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[4]->setCoordinates(Coordinates);
        PlayerLabel[dragon] = player;
        PlayerLabel[dragon]->setScaledContents(true);
        PlayerLabel[dragon]->show();
        break;
    case ship:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/ship.png"));
        player->setGeometry(550,555,25,25);
        Coordinates.x=550;
        Coordinates.y=555;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[5]->setCoordinates(Coordinates);
        PlayerLabel[ship] = player;
        PlayerLabel[ship]->setScaledContents(true);
        PlayerLabel[ship]->show();
        break;
    case soccer:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/soccer.png"));
        player->setGeometry(550,575,25,25);
        Coordinates.x=550;
        Coordinates.y=575;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[6]->setCoordinates(Coordinates);
        PlayerLabel[soccer] = player;
        PlayerLabel[soccer]->setScaledContents(true);
        PlayerLabel[soccer]->show();
        break;
    case surfer:
        player->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Pieces/surfer.png"));
        player->setGeometry(575,575,25,25);
        Coordinates.x=575;
        Coordinates.y=575;
        Coordinates.height=25;
        Coordinates.width=25;
        game.player[7]->setCoordinates(Coordinates);
        PlayerLabel[surfer] = player;
        PlayerLabel[surfer]->setScaledContents(true);
        PlayerLabel[surfer]->show();
        break;
    default:
        break;
    }

    //player->setFixedWidth(25);
    //player->setFixedHeight(25);
    //player->setScaledContents(true);
    //player->show();
}


void MainWindow::on_Dice_clicked(){
    srand(time(0));
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

    if (number1 == number2)
    {
        QMessageBox::information(this ,"Message", "Pair of dice ");
        game.player[Counter]->setPair();
        if(game.player[Counter]->getPair()==3){
            //QMessageBox::information(this ,"Message", "Player Lose! ");
        }
    }

    // Show Players Turn
    int numberofplayers = game.getNumOfPlayer();
    QLabel *turn = new QLabel(this);
    if (flag1 == -1)
    {
        turn->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Turn/1.jpg"));
        turn->setGeometry(284,120,250,50);
        turn->show();
        //qDebug() << "Player 1 turn";
        flag1 = 0;
    }
    else if (flag == 0)
    {
        turn->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Turn/2.jpg"));
        turn->setGeometry(284,120,250,50);
        turn->show();
        //qDebug() << "Player 2 turn";
        if (flag < (numberofplayers - 2))
        {
            flag++;
        }
        else
        {
            flag = 0;
            flag1 = -1;
        }
    }
    else if (flag == 1)
    {
        turn->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Turn/3.jpg"));
        turn->setGeometry(284,120,250,50);
        turn->show();
        //qDebug() << "Player 3 turn";
        if (flag < (numberofplayers - 2))
        {
            flag++;
        }
        else
        {
            flag = 0;
            flag1 = -1;
        }
    }
    else if (flag == 2)
    {
        turn->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Turn/4.jpg"));
        turn->setGeometry(284,120,250,50);
        turn->show();
        //qDebug() << "Player 4 turn";
        if (flag < (numberofplayers - 2))
        {
            flag++;
        }
        else
        {
            flag = 0;
            flag1 = -1;
        }
    }
    else if (flag == 3)
    {
        turn->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Turn/5.jpg"));
        turn->setGeometry(284,120,250,50);
        turn->show();
        //qDebug() << "Player 5 turn";
        if (flag < (numberofplayers - 2))
        {
            flag++;
        }
        else
        {
            flag = 0;
            flag1 = -1;
        }
    }
    else if (flag == 4)
    {
        turn->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Turn/6.jpg"));
        turn->setGeometry(284,120,250,50);
        turn->show();
        //qDebug() << "Player 6 turn";
        if (flag < (numberofplayers - 2))
        {
            flag++;
        }
        else
        {
            flag = 0;
            flag1 = -1;
        }
    }
    else if (flag == 5)
    {
        turn->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Turn/7.jpg"));
        turn->setGeometry(284,120,250,50);
        turn->show();
        //qDebug() << "Player 7 turn";
        if (flag < (numberofplayers - 2))
        {
            flag++;
        }
        else
        {
            flag = 0;
            flag1 = -1;
        }
    }
    else if (flag == 6)
    {
        turn->setPixmap(QPixmap("C:/Users/modern/Desktop/Project/Monopoly/Turn/8.jpg"));
        turn->setGeometry(284,120,250,50);
        turn->show();
        //qDebug() << "Player 8 turn";
        if (flag < (numberofplayers - 2))
        {
            flag++;
        }
        else
        {
            flag = 0;
            flag1 = -1;
        }
    }

    int x,y;
    x=game.player[Counter]->getX()-55*(number1+number2);
    y=game.player[Counter]->getY();

    //for (int i = 1; i <= number1+number2; ++i) {
        //if(x-i*35 >0 && y>530 && y<580){
            //qDebug()<<game.player[Counter]->getY();
        //}
        //else if () {

        //}
    //}



    PlayerLabel[Counter]->setGeometry(x ,y ,60 ,60);
    game.player[Counter]->setX(x);


    PlayerLabel[Counter]->setFixedWidth(25);
    PlayerLabel[Counter]->setFixedHeight(25);
    PlayerLabel[Counter]->setScaledContents(true);
    PlayerLabel[Counter]->show();
    //qDebug()<<x;


    if(Counter == (game.getNumOfPlayer()-1)){
        Counter = 0;
    }
    else{
        Counter++;
    }
}




