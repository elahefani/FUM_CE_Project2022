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
    //QString PlayerName;
public:
    QString Name[8];

    Player();
    void setMoney(long long int);
    long long int getMoney();

    void setPair( int);
    int getPair();

    void setCoordinates(coordinate);
    //coordinate getCoordinates();

    void setPlayerName(QString, int);
    QString getPlayerName(int);

};

#endif // PLAYER_H
