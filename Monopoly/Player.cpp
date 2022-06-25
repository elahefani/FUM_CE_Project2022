#include <Player.h>
#include <mainwindow.h>

Player::Player(){
    Money = 1500;
    Pair = 0;
    Coordinates.x = 0;
    Coordinates.y = 0;
    Coordinates.z = 0;
    Coordinates.t = 0;
}

void Player::setMoney(long long int Money){
    this->Money = Money;
}

long long int Player::getMoney(){
    return Money;
}

void Player::setPair(int Pair){
    this->Pair = Pair;
}

int Player::getPair(){
    return Pair;
}
