#include <iostream>
using namespace std;

class trojkat {
public:
    int wysokosc, podstawa;

    void wczytaj() {
        cout << "Podaj wysokosc: ";
        cin >> wysokosc;
        cout << "Podaj podstawe: ";
        cin >> podstawa;
        cout << "-----------------------" << endl;
        cout << "Wysokosc: " << wysokosc << endl;
        cout << "Podstawa: " << podstawa << endl;
        cout << "-----------------------" << endl;
    }

    double pole() {
        return (wysokosc * podstawa) / 2.0;
    }
};

void coWieksze(trojkat Trojkat1, trojkat Trojkat2) {
    double pole1 = Trojkat1.pole();
    double pole2 = Trojkat2.pole();

    if (pole1 > pole2) {
        cout << "Wieksze pole ma Trojkat1: " << pole1 << endl;
    } else if (pole1 == pole2) {
        cout << "Pola sa rowne: " << pole1 << endl;
    } else {
        cout << "Wieksze pole ma Trojkat2: " << pole2 << endl;
    }
}

int main() {
    trojkat Trojkat1, Trojkat2;

    cout << "Trojkat 1:" << endl;
    Trojkat1.wczytaj();

    cout << "Trojkat 2:" << endl;
    Trojkat2.wczytaj();

    coWieksze(Trojkat1, Trojkat2);

    return 0;
}
