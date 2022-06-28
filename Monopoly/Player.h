#ifndef PLAYER_H
#define PLAYER_H
#include<Game.h>
#include<QString>


struct coordinate
{
    int x,y,height,width;
};

class Player{
private:
    long long int Money;
    int Pair;
    coordinate Coordinates;
    QString PlayerName;
public:

    Player();
    void setMoney(long long int);
    long long int getMoney();

    void setPair( int);
    int getPair();

    void setCoordinates(coordinate);
    //coordinate getCoordinates();

    void setPlayerName(QString );
    QString getPlayrtName();
};

#endif // PLAYER_H
