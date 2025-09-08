#include <iostream>
#include <vector>
using namespace std;

class Osoba {
protected:
    int pesel;
public:
    string imie, nazwisko;
    void setOsoba(int pesel, string imie, string nazwisko) {
        this->pesel = pesel;
        this->imie = imie;
        this->nazwisko = nazwisko;
    }
};

class Uczen : public Osoba {
private:
    int nr;
public:
    void setUczen(int pesel, string imie, string nazwisko, int nr) {
        Osoba::setOsoba(pesel, imie, nazwisko);
        this->nr = nr;
    }
};

class Nauczyciel : public Osoba {
    vector <string> przedmioty;
public:
    void setNauczyciel(int pesel, string imie, string nazwisko, vector<string> przedmioty) {
        Osoba::setOsoba(pesel, imie, nazwisko);
        this->przedmioty = przedmioty;
    }
};

class Klasa {
public:
    vector <Uczen> uczniowie;
    Nauczyciel wychowawca;
    Klasa(vector<Uczen> u, Nauczyciel n) : uczniowie(u), wychowawca(n) {}
};

int main() {
    Uczen Maciej, Michalina;
    Nauczyciel Kamil;

    Maciej.setUczen(354672845, "Maciej", "Sliwa", 1);
    Michalina.setUczen(356845367, "Michalina", "Wolna", 2);
    Kamil.setNauczyciel(356125367, "Kamil", "Strzala", {"Informatyka", "Programowanie obiektowe"});

    Klasa zsp4p({ Maciej, Michalina }, Kamil);

    cout << "Wychowawca: " << zsp4p.wychowawca.imie << " " << zsp4p.wychowawca.nazwisko << endl;
    cout << "Uczniowie: " << endl;
    for (auto &u : zsp4p.uczniowie) {
        cout << "- " << u.imie << " " << u.nazwisko << endl;
    }

    return 0;
}
