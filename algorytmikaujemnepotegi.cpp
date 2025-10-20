#include <iostream>
using namespace std;

double potega(int a, int b) {
    double wynik = 1;
    int exp = abs(b);

    for (int i = 0; i < exp; i++) {
        wynik *= a;
    }

    if (b < 0) {
        return 1.0 / wynik;
    } else {
        return wynik;
    }
}

int main() {
    int a = 4, b = -5;
    double wynik = potega(a, b);
    cout << a << "^" << b << " = " << wynik << endl;
    return 0;
}
