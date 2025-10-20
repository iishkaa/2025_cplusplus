#include <iostream>
using namespace std;
class Player{
private:
    int exp;
    int level;
public:
    string name;
    int ranking;

    Player(int,int,string,int); //konstruktor parametryczny prototyp
    Player(int,int);
};

Player::Player(int exp, int level, string name, int ranking)//konstruktor paramatryczny
{
    this->exp = exp;
    this->level = level;
    this->name = name;
    this->ranking = ranking;

}

Player::Player(int, int):exp(exp),level(level) { //
}

int main() {


    return 0;
}
