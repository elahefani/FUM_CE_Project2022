#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <Game.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/Monopoly.jpg");
    ui->Board->setPixmap(pm);
    ui->Board->setScaledContents(true);
    QLabel *BoardImage = new QLabel(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_choice2_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 2 players. ");
    ui->groupBox->hide();
    ui->choice2->hide();
    game.setNumOfPlayer(2);

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
