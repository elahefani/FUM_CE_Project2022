#ifndef GAME_H
#define GAME_H
#include<Player.h>

#define MaxSizeOfPlayer 8


class Game
{

private:
    int NumOfPlayer;
public:
    Player player[MaxSizeOfPlayer];
    Game();
    void setNumOfPlayer(int );
    int getNumOfPlayer();
    void setDefPlayer();
    void setPlayer(long long int ,int ,int ,int ,int ,int );


};

#endif // GAME_H
