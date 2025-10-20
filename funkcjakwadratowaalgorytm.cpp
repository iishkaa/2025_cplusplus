#include <iostream>
using namespace std;
void oblicz(int a, int b, int c) {
    if (a == 0) {
        cout << "to nie jest rownanie kwadratowe";
    }
    else {
        int delta = b*b - 4*a*c;
        if (delta < 0) {
            cout << "rownanie nie ma pierwiastkow";
        }
        else {
            if (delta == 0) {
                double x1 = -b/(2*a);
                cout << "x: " << x1 << endl;
            }
            else {
                double x1 = (-b - sqrt(delta))/(2*a);
                double x2 = (-b + sqrt(delta))/(2*a);
                cout << "x1: " << x1 << endl;
                cout << "x2: " << x2 << endl;
            }
        }
    }
}
int main() {
    cout << "rownanie kwadratowe z 1 m.z. :" << endl;
    oblicz(1, -6, 9);
    cout << "rownanie kwadratowe z 2 m.z. :" << endl;
    oblicz(2, 16, 9);

    return 0;
}