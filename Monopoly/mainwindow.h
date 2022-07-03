#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <Game.h>
//#include <Player.h>
#include <QMainWindow>
#include <string>
#include <QLabel>
#include <QPushButton>
#include <QRadioButton>
#include <QLineEdit>
#include <QGroupBox>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    Game game;
    void PrintBoardGame(int );
    int RandomGenerator();
    void CreatePlayers(int );
    void Dice();
    void setGroupName();
    void setLabelName();
    void setPushbuttonName();
    QString ConvertEnumtoString(int );

    ~MainWindow();

private slots:
    void on_choice2_clicked();
    void on_choice3_clicked();
    void on_choice4_clicked();
    void on_choice5_clicked();
    void on_choice6_clicked();
    void on_choice7_clicked();
    void on_choice8_clicked();

    void on_Dice_clicked();

    void on_PushbottonName_clicked();

private:
    Ui::MainWindow *ui;
    QLabel *board = new QLabel(this);
    QLabel *chancepic1 = new QLabel(this);
    QLabel *chancepic2 = new QLabel(this);
    QPushButton *DicePtr = new QPushButton(this);
    QLineEdit *playerName_ptr[8];

    QLabel *labelName_ptr[8];
    QGroupBox *GroupName_ptr = new QGroupBox;
    QPushButton *buttonName_ptr = new QPushButton;
    QLabel *PlayerLabel[8];

};
#endif // MAINWINDOW_H
