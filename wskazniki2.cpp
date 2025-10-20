#include <iostream>
using namespace std;
//zad1

int main() {
    int a;
    cin >> a;
    int *p = &a;
    cout << "wartosc a: " << a << endl;
    cout << "adres a: " << &a << endl;
    cout << "wartosc adresu wskaznika p: " << p << endl;
    cout << "wartosc wzkazywana przez p: " << *p << endl;
    return 0;
}