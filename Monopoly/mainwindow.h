#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <Game.h>
#include <Player.h>
#include <QMainWindow>
#include <string>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    Game game;
    void CreatePlayers(int );
    ~MainWindow();

private slots:
    void on_choice2_clicked();
    void on_choice3_clicked();
    void on_choice4_clicked();
    void on_choice5_clicked();
    void on_choice6_clicked();
    void on_choice7_clicked();
    void on_choice8_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
