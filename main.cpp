#include <iostream>
using namespace std;
class Samochod {
public:
    int kola = 4, siedzenia = 5;
    static double poj_silnika;
};
class Samolot {
public:
    static int counter;
    int ilosc_siedzen = 400;
    static int liczba_pilotow;
    Samolot() {
        counter++;
    }
    ~Samolot() {
        counter--;
    };
    static void show() {
        //counter--;
    }
};
int Samolot :: counter = 0;
int Samolot::liczba_pilotow = 2;
double Samochod::poj_silnika = 1.6;
int main() {
    Samochod astra, focus, micra;
    astra.poj_silnika = 2.0;
    //cout << micra.poj_silnika << endl;

    Samolot A,B,C, D, E;
    A.ilosc_siedzen = 200;
    C.ilosc_siedzen = 230;
    cout << "Licznik: " << Samolot::counter<< endl;
    cout << "Samolot A: " << A.ilosc_siedzen<< endl;

    Samolot::show();
    return 0;
}
//stworz klase samolot (utworz kilka wlasciwosc i jedna statyczna licznik ktora policzy ile obiektow klasy samolot utworzono mozna tworzyc wlasne metody)
