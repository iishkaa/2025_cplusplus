#include <iostream>
using namespace std;
class Samochod {
    public:
    string marka, model;
    int rok_produkcji;
    double poj_silnika;
    Samochod(string, string, int, double);
};

Samochod::Samochod(string marka, string model, int rok_produkcji, double poj_silnika) {
    this->marka = marka;
    this->model = model;
    this->rok_produkcji = rok_produkcji;
    this->poj_silnika = poj_silnika;

}
void wyswietlDane(const Samochod& samochod1) {
    cout << "marka: " << samochod1.marka << endl;
    cout << "model: " << samochod1.model << endl;
    cout << "rok produkcji: " << samochod1.rok_produkcji << endl;
    cout << "pojemnosc silnika: " << samochod1.poj_silnika << endl;
}

int main() {
    Samochod samochod1("mazda", "A", 2012, 10.9);
    Samochod samochod2("pezot", "Ab", 2023, 23.5);
    Samochod samochod3("subaru", "A13", 1990, 23.7);
    cout << "----------------" << endl;
    wyswietlDane(samochod1);
    cout << "----------------" << endl;
    wyswietlDane(samochod2);
    cout << "----------------" << endl;
    wyswietlDane(samochod3);
    cout << "----------------" << endl;

    return 0;
}
