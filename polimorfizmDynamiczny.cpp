#include <iostream>
using namespace std;
class Operacja {
    public:
    int a, b;
    virtual void Oblicz() const {
        cout << "Operacja" << endl;
    }
    virtual ~Operacja() {}
};
class Dodawanie : public Operacja {
    public:
    void Oblicz() const override {
        int result = 0;
        result = a + b;
        cout << "Result: " << result << endl;
    }
};
class Odejmowanie : public Operacja {
    public:
    void Oblicz() const override {
        int result = 0;
        result = a - b;
        cout << "Result: " << result << endl;
    }
};
class Mnozenie : public Operacja {
    public:
    void Oblicz() const override {
        int result = 0;
        result = a * b;
        cout << "Result: " << result << endl;
    }
};
class Dzielenie : public Operacja {
    public:
    void Oblicz() const override {
        int result = 0;
        result = a / b;
        cout << "Result: " << result << endl;
    }
};
int main() {
    Operacja* dodawanie1 = new Dodawanie();
    Operacja* odejmowanie1 = new Odejmowanie();
    Operacja* mnozenie1 = new Mnozenie();
    Operacja* dzielenie1 = new Dzielenie();

    odejmowanie1->a = 5;
    odejmowanie1->b = 3;
    dodawanie1->a = 5;
    dodawanie1->b = 10;
    mnozenie1->a = 5;
    mnozenie1->b = 10;
    dzielenie1->a = 5;
    dzielenie1->b = 10;
    cout << "Dodawanie:" << endl;
    dodawanie1->Oblicz();
    cout << "Odejmowanie: " << endl;
    odejmowanie1->Oblicz();
    cout << "Mnozenie: " << endl;
    mnozenie1->Oblicz();
    cout << "Dzielenie: " << endl;
    dzielenie1->Oblicz();
}