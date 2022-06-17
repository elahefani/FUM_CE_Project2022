#ifndef GAME_H
#define GAME_H
#include<Player.h>
#include<mainwindow.h>
#include <QMainWindow>
#define MaxSizeOfPlayer 8


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class Game :public QMainWindow{
public:
    int NumOfPlayer;
    Player* player = new Player[MaxSizeOfPlayer];
    Game();
};

#endif // GAME_H
