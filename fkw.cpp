#include <iostream>
using namespace std;
class funkcja_kw {
    public:
    int a,b,c;
    int wartosc(int x) {
        double wartosc = a*x*x+b*x+c;
        cout << "wartosc funkcji = "<< wartosc;
    }
    bool zero() {
        double delta = b*b - 4*a*c;
        if (delta >= 0) return true;
        else return false;

    }
};
int main() {
    funkcja_kw funkcja;
    funkcja.a=-1;
    funkcja.b=3;
    funkcja.c=12;
    cout << funkcja.wartosc(5) << endl;
    cout << funkcja.zero() << endl;



    return 0;
}