#include <iostream>
#include <string>
using namespace std;
// Klasa Car
class Car {
public:
    string marka;
    int rok;
    Car(string m = "Nieznana", int r = 0) : marka(m), rok(r) {}
    void show() const {
        cout << "Marka: " << marka << ", Rok: " << rok << endl;
    }
};
class Figura {
public:
    virtual void rysuj() { cout << "Figura" << endl; }
    virtual ~Figura() {}
};

class Kolo : public Figura {
public:
    void rysuj() override { cout << "Rysuje kolo" << endl; }
};

class Kwadrat : public Figura {
public:
    void rysuj() override { cout << "Rysuje kwadrat" << endl; }
};

int main() {
    // 1. Zwykły obiekt
    Car car1("Toyota", 2010);
    car1.show();

    // 2. Wskaźnik do obiektu (bez new)
    Car car2("BMW", 2015);
    Car* ptrCar = &car2;
    ptrCar->show();

    // 3. Obiekt dynamiczny (z new)
    Car* dynCar = new Car("Audi", 2020);
    dynCar->show();
    delete dynCar;

    // 4. Tablica dynamiczna 5 obiektów Car
    int n = 5;
    Car* cars = new Car[n]{
        Car("Ford", 2008),
        Car("Opel", 2011),
        Car("Kia", 2016),
        Car("Mazda", 2019),
        Car("Honda", 2022)
    };

    cout << "\nTablica samochodów:\n";
    for (int i = 0; i < n; i++) {
        cars[i].show();
    }
    delete[] cars;



    cout << "\nPolimorfizm:\n";
    Figura* f; // wskaźnik do klasy bazowej
    Kolo k;
    Kwadrat kw;

    f = &k;
    f->rysuj();

    f = &kw;
    f->rysuj();

    return 0;
}
