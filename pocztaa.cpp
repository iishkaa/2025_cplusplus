#include <iostream>
using namespace std;
class Poczta {
    public:
    string nadawca, odbiorca, temat, tresc;
};
void Wypisz(Poczta &poczta) {
    cout << "nadawca: " << poczta.nadawca << endl;
    cout << "odbiorca: " << poczta.odbiorca << endl;
    cout << "temat: " << poczta.temat << endl;
    cout << "tresc: " << poczta.tresc << endl;
}
void Wczytaj(Poczta &poczta) {
    cout << "Podaj nadawca: ";
    getline(cin, poczta.nadawca);
    cout << "Podaj odbiorca: ";
    getline(cin, poczta.odbiorca);
    cout << "Podaj temat: ";
    getline(cin, poczta.temat);
    cout << "Podaj tresc: ";
    getline(cin, poczta.tresc);

}
int main() {
Poczta poczta;
    Wczytaj(poczta);
    cout << "WIADOMOSC: " << endl;
    Wypisz(poczta);
    return 0;
}