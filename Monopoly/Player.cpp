//#include <Player.h>
#include <mainwindow.h>
#include <QString>

Player::Player(){
    Money = 1500;
    Pair = 0;
    Coordinates.x = 0;
    Coordinates.y = 0;
    Coordinates.height = 0;
    Coordinates.width = 0;
}

void Player::setMoney(long long int Money){
    this->Money = Money;
}

long long int Player::getMoney(){
    return Money;
}

void Player::setPair(){
    Pair++;
}

int Player::getPair(){
    return Pair;
}

void Player::setCoordinates(coordinate Coordinates){
    this->Coordinates = Coordinates;
}

//coordinate Player::setCoordinates(){
    //return Coordinates;
//}

void Player::setPlayerName(QString Name){
    this->Name = Name;
}

QString Player::getPlayerName(){
    return Name;
}

int Player::getX(){
    return Coordinates.x;
}

int Player::getY(){
    return Coordinates.y;
}

void Player::setX(int x){
    Coordinates.x = x;
}

void Player::setY(int y){
    Coordinates.y = y;
}

void Player::removeMoney(int Money)
{
    this->Money -= Money;
}

void Player::addMoney(int Money)
{
    this->Money += Money;
}
