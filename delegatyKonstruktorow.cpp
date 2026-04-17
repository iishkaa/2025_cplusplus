#include <iostream>
using namespace std;
class Osoba {
    public:
    string imie;
    int wiek;
    Osoba(string imie, int wiek): imie(imie), wiek(wiek) {
        //cout << "Konstrktor glowny: " << imie << " " << wiek << " lat" << endl;
    }
    Osoba(): Osoba("Kakashi", 0) {
        //cout << "Konstruktor domyslny delegujacy" << endl;
    }
    Osoba(string imie): Osoba(imie, 26) {
        //cout << "Konstruktor delegujacy imie: " << imie << " " << wiek << " lat" << endl;
    }
    void wyswietlInfo() {
        cout << "Imie: " << imie << " Wiek: " << wiek << endl;
    }
};
int main() {
    Osoba o1;
    Osoba o2("Kakashi");
    Osoba o3("Kakashi", 17);
    o2.wyswietlInfo();
    o3.wyswietlInfo();
    return 0;
}