#ifndef GAME_H
#define GAME_H
#include<Player.h>
//#include<mainwindow.h>
//#include <QMainWindow>
#define MaxSizeOfPlayer 8

class Game {
private:
    int NumOfPlayer;
public:

    Player* player = new Player[MaxSizeOfPlayer];
    Game();
    void setNumOfPlayer(int );
    int getNumOfPlayer();
};

#endif // GAME_H
