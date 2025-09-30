#include <iostream>
#include <vector>
using namespace std;
struct Pracownik {
    string imie, nazwisko;
};
struct Towar {
    string nazwa;
    double cena;
};
class Sklep {
    public:
    string nazwa;
    Pracownik pracownik;
    vector <Towar> towary;
    Sklep(string, Pracownik, vector <Towar>);
};

Sklep::Sklep(string nazwa, Pracownik pracownik, vector<Towar> towary): nazwa(nazwa),pracownik(pracownik),towary(towary) {}
void showSklep(const Sklep &sklep) {
    cout << "Sklep: " << sklep.nazwa << endl;
    cout << "Pracownik: \n\tImie:" << sklep.pracownik.imie << "\n\tNazwisko:" << sklep.pracownik.nazwisko << endl;
    cout << "Lista towarow: " << endl;
    for (Towar towar : sklep.towary) {
        cout << "\t" << towar.nazwa << " cena:" << towar.cena << endl;
    }
}
void nizsza(const Sklep &sklep) {
    for (Towar towar : sklep.towary) {
        if (towar.cena < 8) {
            cout << towar.nazwa << endl;
        }
    }
}
void wpisz(const Sklep &sklep) {

}
int main() {
    Sklep uNeli("uNeli", {"Tytus","Podejma"},{
            {"maslo", 10},
            {"margaryna", 5},
            {"ryz", 4.5},
            {"chlep",5}

    } );
    showSklep(uNeli);
    nizsza(uNeli);
    return 0;
}
