#include <iostream>
#include <string>
using namespace std;

class PLayer {
private: string name; //- imie gracza
    int level; //- lvl gracza
    static int globalXP; // - wspolne pkt doswaidczenia
public:
    //konstruktor
    PLayer(string playerName) {
        name = playerName;
        level = 1; //domyslnie 1
    }
    //metoda wypisujaca: info o graczuuu
    void showInfo() {
        cout <<"imie: " << name << endl;
        cout << "level: " << level << endl;
        cout << "wspolne XP: " << globalXP << endl;
    }
    //static metoda grindowania xp
    static void addXP(int xp) {
        globalXP += xp;
    }
    //static metoda do get xp
    static int getXP() {
        return globalXP;
    }
};
//inicjowanie static zmiennej
int PLayer::globalXP = 0;

int main() {
    PLayer p1("Itachi"), p2("Kakashi"), p3("Sasuke");

    PLayer::addXP(100);
    PLayer::addXP(200);

    p1.showInfo();
    p2.showInfo();
    p3.showInfo();

    cout << "Aktualne wspolne XP: " << PLayer::getXP() << endl;
    return 0;

}