#ifndef PLAYER_H
#define PLAYER_H


struct coor
{
    int x,y,z,t;
};

class Player{
private:
    long long int Money;
    int Pair;
    coor Coordinates;
public:

    Player();
    void setMoney(long long int);
    long long int getMoney();

    void setPair( int);
    int getPair();

    //void setCoordinates( int);
    //int getCoordinates();
};

#endif // PLAYER_H
