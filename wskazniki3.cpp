#include <iostream>
using namespace std;
//zad3
int main() {
    int n;
    int suma;
    double srednia;
    cin >> n;
    int *tab = new int[n];
    for (int i = 0; i < n; i++) {

        cout << "podaj liczbe: ";
        cin >> tab[i];
    }
    for (int i = 0; i < n; i++) {
        cout << tab[i] << endl;
    }
    for (int i = 0; i < n; i++) {
        suma = suma + tab[i];
    }
    for (int i = 0; i < n; i++) {
        srednia = suma / n;
    }
    cout << "suma: " << suma << endl;
    cout << "srednia: " << srednia << endl;
    delete[] tab;

    return 0;
}