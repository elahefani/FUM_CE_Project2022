#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pm("C:/Users/modern/Desktop/Project/Monopoly/BoardImage/board.jpg");
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

}

void MainWindow::on_choice3_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 3 players. ");
    ui->groupBox->hide();
    ui->choice3->hide();

}

void MainWindow::on_choice4_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 4 players. ");
    ui->groupBox->hide();
    ui->choice4->hide();

}

void MainWindow::on_choice5_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 5 players. ");
    ui->groupBox->hide();
    ui->choice5->hide();

}

void MainWindow::on_choice6_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 6 players. ");
    ui->groupBox->hide();
    ui->choice6->hide();

}

void MainWindow::on_choice7_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 7 players. ");
    ui->groupBox->hide();
    ui->choice7->hide();

}

void MainWindow::on_choice8_clicked()
{
    QMessageBox::information(this ,"Message", "Game will start with 8 players. ");
    ui->groupBox->hide();
    ui->choice8->hide();

}
