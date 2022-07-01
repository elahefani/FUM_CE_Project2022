#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <Game.h>
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
    playerName2_ptr->hide();
    labelName2_ptr->hide();
    playerName3_ptr->hide();
    labelName3_ptr->hide();
    playerName4_ptr->hide();
    labelName4_ptr->hide();
    playerName5_ptr->hide();
    labelName5_ptr->hide();
    playerName6_ptr->hide();
    labelName6_ptr->hide();
    playerName7_ptr->hide();
    labelName7_ptr->hide();
    playerName8_ptr->hide();
    labelName8_ptr->hide();
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
    QPixmap pm("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/BoardImage/Monopoly.jpg");
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

void MainWindow::setLabelName(QLabel * name, QString text, int x, int y){
    name->setGeometry(x,y,60,20);
    name->setText(text);
    name->show();
}


void MainWindow::setPushbuttonName(){
    QPushButton *NameButton = new QPushButton(this);
    NameButton->setGeometry(293,385,70,20);
    NameButton->show();
    connect(NameButton,SIGNAL(clicked()),this,SLOT(on_PushbottonName_clicked()));
    NameButton->setText("OK");
    buttonName_ptr=NameButton;

    QLineEdit *playerName1=new QLineEdit(this);
    QLineEdit *playerName2=new QLineEdit(this);
    QLineEdit *playerName3=new QLineEdit(this);
    QLineEdit *playerName4=new QLineEdit(this);
    QLineEdit *playerName5=new QLineEdit(this);
    QLineEdit *playerName6=new QLineEdit(this);
    QLineEdit *playerName7=new QLineEdit(this);
    QLineEdit *playerName8=new QLineEdit(this);

    switch (game.getNumOfPlayer()) {
    case 2:
        playerName1->setGeometry(300,212,70,20);
        playerName1->show();
        playerName1_ptr = playerName1;

        playerName2->setGeometry(300,232,70,20);
        playerName2->show();
        playerName2_ptr = playerName2;
        break;
    case 3:
        playerName1->setGeometry(300,212,70,20);
        playerName1->show();
        playerName1_ptr = playerName1;

        playerName2->setGeometry(300,232,70,20);
        playerName2->show();
        playerName2_ptr = playerName2;

        playerName3->setGeometry(300,252,70,20);
        playerName3->show();
        playerName3_ptr = playerName3;
        break;
    case 4:
        playerName1->setGeometry(300,212,70,20);
        playerName1->show();
        playerName1_ptr = playerName1;

        playerName2->setGeometry(300,232,70,20);
        playerName2->show();
        playerName2_ptr = playerName2;

        playerName3->setGeometry(300,252,70,20);
        playerName3->show();
        playerName3_ptr = playerName3;

        playerName4->setGeometry(300,272,70,20);
        playerName4->show();
        playerName4_ptr = playerName4;
        break;
    case 5:
        playerName1->setGeometry(300,212,70,20);
        playerName1->show();
        playerName1_ptr = playerName1;

        playerName2->setGeometry(300,232,70,20);
        playerName2->show();
        playerName2_ptr = playerName2;

        playerName3->setGeometry(300,252,70,20);
        playerName3->show();
        playerName3_ptr = playerName3;

        playerName4->setGeometry(300,272,70,20);
        playerName4->show();
        playerName4_ptr = playerName4;

        playerName5->setGeometry(300,292,70,20);
        playerName5->show();
        playerName5_ptr = playerName5;
        break;
    case 6:
        playerName1->setGeometry(300,212,70,20);
        playerName1->show();
        playerName1_ptr = playerName1;

        playerName2->setGeometry(300,232,70,20);
        playerName2->show();
        playerName2_ptr = playerName2;

        playerName3->setGeometry(300,252,70,20);
        playerName3->show();
        playerName3_ptr = playerName3;

        playerName4->setGeometry(300,272,70,20);
        playerName4->show();
        playerName4_ptr = playerName4;

        playerName5->setGeometry(300,292,70,20);
        playerName5->show();
        playerName5_ptr = playerName5;

        playerName6->setGeometry(300,312,70,20);
        playerName6->show();
        playerName6_ptr = playerName6;
        break;
    case 7:
        playerName1->setGeometry(300,212,70,20);
        playerName1->show();
        playerName1_ptr = playerName1;

        playerName2->setGeometry(300,232,70,20);
        playerName2->show();
        playerName2_ptr = playerName2;

        playerName3->setGeometry(300,252,70,20);
        playerName3->show();
        playerName3_ptr = playerName3;

        playerName4->setGeometry(300,272,70,20);
        playerName4->show();
        playerName4_ptr = playerName4;

        playerName5->setGeometry(300,292,70,20);
        playerName5->show();
        playerName5_ptr = playerName5;

        playerName6->setGeometry(300,312,70,20);
        playerName6->show();
        playerName6_ptr = playerName6;

        playerName7->setGeometry(300,332,70,20);
        playerName7->show();
        playerName7_ptr = playerName7;
        break;
    case 8:
        playerName1->setGeometry(300,212,70,20);
        playerName1->show();
        playerName1_ptr = playerName1;

        playerName2->setGeometry(300,232,70,20);
        playerName2->show();
        playerName2_ptr = playerName2;

        playerName3->setGeometry(300,252,70,20);
        playerName3->show();
        playerName3_ptr = playerName3;

        playerName4->setGeometry(300,272,70,20);
        playerName4->show();
        playerName4_ptr = playerName4;

        playerName5->setGeometry(300,292,70,20);
        playerName5->show();
        playerName5_ptr = playerName5;

        playerName6->setGeometry(300,312,70,20);
        playerName6->show();
        playerName6_ptr = playerName6;

        playerName7->setGeometry(300,332,70,20);
        playerName7->show();
        playerName7_ptr = playerName7;

        playerName8->setGeometry(300,352,70,20);
        playerName8->show();
        playerName8_ptr = playerName8;
        break;
    default:
        break;
    }
}


void MainWindow::on_PushbottonName_clicked(){
    game.players.setPlayerName(playerName1_ptr->text(), 0);
    game.players.setPlayerName(playerName2_ptr->text(), 1);
    game.players.setPlayerName(playerName3_ptr->text(), 2);
    game.players.setPlayerName(playerName4_ptr->text(), 3);
    game.players.setPlayerName(playerName5_ptr->text(), 4);
    game.players.setPlayerName(playerName6_ptr->text(), 5);
    game.players.setPlayerName(playerName7_ptr->text(), 6);
    game.players.setPlayerName(playerName8_ptr->text(), 7);

    GroupName_ptr->hide();

    playerName1_ptr->hide();
    labelName1_ptr->hide();

    playerName2_ptr->hide();
    labelName2_ptr->hide();

    playerName3_ptr->hide();
    labelName3_ptr->hide();

    playerName4_ptr->hide();
    labelName4_ptr->hide();

    playerName5_ptr->hide();
    labelName5_ptr->hide();

    playerName6_ptr->hide();
    labelName6_ptr->hide();

    playerName7_ptr->hide();
    labelName7_ptr->hide();

    playerName8_ptr->hide();
    labelName8_ptr->hide();

    buttonName_ptr->hide();

    //qDebug() << game.players.getPlayerName(1);

    PrintBoardGame(game.getNumOfPlayer());

}

void MainWindow::on_choice2_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 2 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(2);

    setGroupName();

    QLabel *name1 = new QLabel(this);
    QLabel *name2 = new QLabel(this);

    QString text = "barrow :";
    setLabelName(name1,text,250,210);
    text = "baseball :";
    setLabelName(name2,text,250,230);

    setPushbuttonName();

    labelName1_ptr = name1;
    labelName2_ptr = name2;

}


void MainWindow::on_choice3_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 3 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(3);

    setGroupName();

    QLabel *name1 = new QLabel(this);
    QLabel *name2 = new QLabel(this);
    QLabel *name3 = new QLabel(this);

    QString text = "barrow :";
    setLabelName(name1,text,250,210);
    text = "baseball :";
    setLabelName(name2,text,250,230);
    text = "car :";
    setLabelName(name3,text,250,250);

    setPushbuttonName();

    labelName1_ptr = name1;
    labelName2_ptr = name2;
    labelName3_ptr = name3;

}

void MainWindow::on_choice4_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 4 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(4);

    setGroupName();

    QLabel *name1 = new QLabel(this);
    QLabel *name2 = new QLabel(this);
    QLabel *name3 = new QLabel(this);
    QLabel *name4 = new QLabel(this);

    QString text = "barrow :";
    setLabelName(name1,text,250,210);
    text = "baseball :";
    setLabelName(name2,text,250,230);
    text = "car :";
    setLabelName(name3,text,250,250);
    text = "dog :";
    setLabelName(name4,text,250,270);

    setPushbuttonName();

    labelName1_ptr = name1;
    labelName2_ptr = name2;
    labelName3_ptr = name3;
    labelName4_ptr = name4;

}

void MainWindow::on_choice5_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 5 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(5);

    setGroupName();

    QLabel *name1 = new QLabel(this);
    QLabel *name2 = new QLabel(this);
    QLabel *name3 = new QLabel(this);
    QLabel *name4 = new QLabel(this);
    QLabel *name5 = new QLabel(this);

    QString text = "barrow :";
    setLabelName(name1,text,250,210);
    text = "baseball :";
    setLabelName(name2,text,250,230);
    text = "car :";
    setLabelName(name3,text,250,250);
    text = "dog :";
    setLabelName(name4,text,250,270);
    text = "gragon :";
    setLabelName(name5,text,250,290);

    setPushbuttonName();

    labelName1_ptr = name1;
    labelName2_ptr = name2;
    labelName3_ptr = name3;
    labelName4_ptr = name4;
    labelName5_ptr = name5;

}

void MainWindow::on_choice6_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 6 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(6);

    setGroupName();

    QLabel *name1 = new QLabel(this);
    QLabel *name2 = new QLabel(this);
    QLabel *name3 = new QLabel(this);
    QLabel *name4 = new QLabel(this);
    QLabel *name5 = new QLabel(this);
    QLabel *name6 = new QLabel(this);

    QString text = "barrow :";
    setLabelName(name1,text,250,210);
    text = "baseball :";
    setLabelName(name2,text,250,230);
    text = "car :";
    setLabelName(name3,text,250,250);
    text = "dog :";
    setLabelName(name4,text,250,270);
    text = "gragon :";
    setLabelName(name5,text,250,290);
    text = "ship :";
    setLabelName(name6,text,250,310);

    setPushbuttonName();

    labelName1_ptr = name1;
    labelName2_ptr = name2;
    labelName3_ptr = name3;
    labelName4_ptr = name4;
    labelName5_ptr = name5;
    labelName6_ptr = name6;

}


void MainWindow::on_choice7_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 7 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(7);

    setGroupName();

    QLabel *name1 = new QLabel(this);
    QLabel *name2 = new QLabel(this);
    QLabel *name3 = new QLabel(this);
    QLabel *name4 = new QLabel(this);
    QLabel *name5 = new QLabel(this);
    QLabel *name6 = new QLabel(this);
    QLabel *name7 = new QLabel(this);

    QString text = "barrow :";
    setLabelName(name1,text,250,210);
    text = "baseball :";
    setLabelName(name2,text,250,230);
    text = "car :";
    setLabelName(name3,text,250,250);
    text = "dog :";
    setLabelName(name4,text,250,270);
    text = "gragon :";
    setLabelName(name5,text,250,290);
    text = "ship :";
    setLabelName(name6,text,250,310);
    text = "soccer :";
    setLabelName(name7,text,250,330);

    setPushbuttonName();

    labelName1_ptr = name1;
    labelName2_ptr = name2;
    labelName3_ptr = name3;
    labelName4_ptr = name4;
    labelName5_ptr = name5;
    labelName6_ptr = name6;
    labelName7_ptr = name7;

}

void MainWindow::on_choice8_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 8 players. ");
    ui->groupBox->hide();
    game.setNumOfPlayer(8);

    setGroupName();

    QLabel *name1 = new QLabel(this);
    QLabel *name2 = new QLabel(this);
    QLabel *name3 = new QLabel(this);
    QLabel *name4 = new QLabel(this);
    QLabel *name5 = new QLabel(this);
    QLabel *name6 = new QLabel(this);
    QLabel *name7 = new QLabel(this);
    QLabel *name8 = new QLabel(this);

    QString text = "barrow :";
    setLabelName(name1,text,250,210);
    text = "baseball :";
    setLabelName(name2,text,250,230);
    text = "car :";
    setLabelName(name3,text,250,250);
    text = "dog :";
    setLabelName(name4,text,250,270);
    text = "gragon :";
    setLabelName(name5,text,250,290);
    text = "ship :";
    setLabelName(name6,text,250,310);
    text = "soccer :";
    setLabelName(name7,text,250,330);
    text = "surfer :";
    setLabelName(name8,text,250,350);

    setPushbuttonName();

    labelName1_ptr = name1;
    labelName2_ptr = name2;
    labelName3_ptr = name3;
    labelName4_ptr = name4;
    labelName5_ptr = name5;
    labelName6_ptr = name6;
    labelName7_ptr = name7;
    labelName8_ptr = name8;

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
    // Geometries set
    switch (number1)
    {
    case 1:
        chancepic1->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/1.png"));
        chancepic1->setGeometry(130,120,60,60);
        //qDebug()<<number1;
        break;
    case 2:
        chancepic1->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/2.png"));
        chancepic1->setGeometry(130,120,60,60);
        break;
    case 3:
        chancepic1->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/3.png"));
        chancepic1->setGeometry(130,120,60,60);
        break;
    case 4:
        chancepic1->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/4.png"));
        chancepic1->setGeometry(130,120,60,60);
        break;
    case 5:
        chancepic1->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/5.png"));
        chancepic1->setGeometry(130,120,60,60);
        break;
    case 6:
        chancepic1->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/6.png"));
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
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/1.png"));
        chancepic2->setGeometry(210,120,60,60);
        break;
    case 2:
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/2.png"));
        chancepic2->setGeometry(210,120,60,60);
        break;
    case 3:
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/3.png"));
        chancepic2->setGeometry(210,120,60,60);
        break;
    case 4:
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/4.png"));
        chancepic2->setGeometry(210,120,60,60);
        break;
    case 5:
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/5.png"));
        chancepic2->setGeometry(210,120,60,60);
        break;
    case 6:
        chancepic2->setPixmap(QPixmap("C:/Users/Atmospher-PC/Desktop/Project Or/FUM_CE_Project2022/Monopoly/Chance/6.png"));
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

}
