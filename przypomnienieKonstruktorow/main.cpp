#include <iostream>
using namespace std;
//utworz klase drzewo: rodzaj, wysokosc, wiek i konstruktory: domyslny parametryczny kopiujacy i wyswietl.
class Samochod {
    string marka, model;
    double poj_silnika = 1.5;
    int il_drzwi = 5;

    Samochod();
    Samochod(string, string);
    Samochod(string, string, double, int);
    Samochod(const Samochod &);
    explicit Samochod(const Samochod*);
};

Samochod::Samochod() {
    marka = "BYD";
    model = "TANG";
}

Samochod::Samochod(string marka, string model) : marka(marka), model(model) { } //domyslny

Samochod::Samochod(string marka, string , double poj, int drzwi) : marka(marka), model(model), poj_silnika(poj) , il_drzwi(drzwi) { } //parametryczny

Samochod::Samochod(const Samochod &a): marka(a.marka), model(a.model), poj_silnika(a.poj_silnika), il_drzwi(a.il_drzwi) { } //kopiujacy
Samochod::Samochod(const Samochod *a): marka(a ->marka), model(a->model), poj_silnika(a->poj_silnika), il_drzwi(a->il_drzwi) { }
int main() {
    return 0;
}
