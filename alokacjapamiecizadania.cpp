#include <iostream>
using namespace std;


int main() {

    int n;
    cin >> n;
    double wynik = 0.0;
    int *tab = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "podaj liczbe: " << endl;
        cin >> tab[i];
    }
    for (int i = 0; i < n; i++) {
        cout << tab[i] << ",";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        wynik += tab[i];
    }
    wynik = wynik / n;
    cout << "Srednia arytmetyczna: " << wynik << endl;
    delete [] tab;
    return 0;
}