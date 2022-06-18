#ifndef PLAYER_H
#define PLAYER_H

class Player{
private:
    long long int Money;
    int Pair;
    int Coordinates;
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
