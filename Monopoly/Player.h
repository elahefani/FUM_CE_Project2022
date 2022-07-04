#ifndef PLAYER_H
#define PLAYER_H
#include <Game.h>
#include <QString>

using namespace std;

struct coordinate
{
    int x,y,height,width;
};

class Player{
private:
    //string Name[8];
    long long int Money;
    int Pair;
    coordinate Coordinates;
    QString Name;
public:


    Player();
    void setMoney(long long int);
    long long int getMoney();

    void setPair( int);
    int getPair();

    void setCoordinates(coordinate);
    //coordinate getCoordinates();
    int getX();
    int getY();
    void setX(int );
    void setY(int );

    void setPlayerName(QString );
    QString getPlayerName();

};

#endif // PLAYER_H
