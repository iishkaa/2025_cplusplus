#include <iostream>
#include <string>
using namespace std;

string szyfruj(string tekst, int klucz) {
    for (int i = 0; i < tekst.length(); i++) {
        if (tekst[i] >= 'a' && tekst[i] <= 'z') {
            tekst[i] = (tekst[i] - 'a' + klucz) % 26 + 'a';
        } else if (tekst[i] >= 'A' && tekst[i] <= 'Z') {
            tekst[i] = (tekst[i] - 'A' + klucz) % 26 + 'A';
        }
    }
    return tekst;
}

string deszyfruj(string tekst, int klucz) {
    for (int i = 0; i < tekst.length(); i++) {
        if (tekst[i] >= 'a' && tekst[i] <= 'z') {
            tekst[i] = (tekst[i] - 'a' - klucz + 26) % 26 + 'a';
        } else if (tekst[i] >= 'A' && tekst[i] <= 'Z') {
            tekst[i] = (tekst[i] - 'A' - klucz + 26) % 26 + 'A';
        }
    }
    return tekst;
}

int main() {
    string tekst;
    int klucz;

    cout << "Podaj tekst: ";
    getline(cin, tekst);

    cout << "Podaj klucz: ";
    cin >> klucz;

    string tekst_zaszyfrowany = szyfruj(tekst, klucz);
    string tekst_odszyfrowany = deszyfruj(tekst_zaszyfrowany, klucz);

    cout << "Zaszyfrowany: " << tekst_zaszyfrowany << endl;
    cout << "Odszyfrowany: " << tekst_odszyfrowany << endl;

    return 0;
}
