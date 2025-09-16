#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Produkt {
public:
    struct Wymiary {
        double szerokosc,wysokosc,glebokosc;
    };
private:
        string nazwa;
        double cenaBrutto;
        int sztukWmagazynie;
       Wymiary wymiary;
public:
    //DOmySLNY
    Produkt()
        : nazwa("NONAME"), cenaBrutto(0.0), sztukWmagazynie(0),
    wymiary{0.0,0.0,0.0} {}
    // parametryczny
    Produkt(const string& n, double cena, int sztuk, double szer, double wys, double gl )
        :nazwa(n),
    cenaBrutto(cena> 0 ? cena: 0),
    sztukWmagazynie(sztuk > 0? sztuk:0 ),
    wymiary{(szer> 0 ? szer: 0), (wys > 0 ? wys: 0), (gl > 0 ? gl : 0)} {
    }
//konstruktor destruktor
    ~Produkt() {
        cout << "usuniety produkt: " << nazwa << endl;}
    string getNazwa() {return nazwa;}
    double getCenaBrutto() {return cenaBrutto;}
    int getSztukWmagazynie() {return sztukWmagazynie;}
    Wymiary getWymiary() {return wymiary;}

    bool setNazwa(const string& n) {
        if (n.empty()) return false;
        nazwa = n;
        return true;}
    bool setCenaBrutto(double cena) {
        if (cena < 0) return false;
        cenaBrutto = cena;
        return true;}
    bool setSztukWmagazynie(int sztuk) {
        if (sztuk < 0) return false;
        sztukWmagazynie = sztuk;
        return true;}
    bool setWymiary(double szer, double wys, double gl) {
        if (szer<0 || wys < 0 || gl < 0) return false;
        wymiary.szerokosc = szer;
        wymiary.wysokosc = wys;
        wymiary.glebokosc = gl;
        return true;}
    double cenaNetto(double stawkaVat) const {
        if (stawkaVat < 0 || stawkaVat >=1) return 0.0;
        return cenaBrutto / (1.0 + stawkaVat);}
    void wypisz()const {
        cout<< "Produkt:" << nazwa << endl;
        cout<<"cena brutto:" << fixed << setprecision(2)<<cenaBrutto << "zl" << endl;
        cout <<"sztuki:" << sztukWmagazynie<<endl;
        cout<<"wymiary:"<<wymiary.szerokosc<< "X"<<wymiary.wysokosc<< "X"<< wymiary.glebokosc <<endl;}
};
//mmagazyntf ----
class magazyn {
    private:
    vector<Produkt> produkty;
    public:
    void dodaj (const Produkt& p) {
        produkty.push_back(p);
    }
    int znajdzIndexPoNazwie(const string& n) {
        for (size_t i = 0; i < produkty.size(); i++) {
            if (produkty[i].getNazwa() == n) return (int)i;

        }
        return -1;
    }
    Produkt& get(int i) {
        return produkty.at(i);
    }
    void wypisz()const {
        cout <<"\n=== zawartosc magazynnu ===\n";
        for (const auto& p : produkty) {
            p.wypisz();
            cout << "--------------------\n";
        }
    }
    double wartoscBrutto(){

        double suma = 0.0;
        for ( auto& p : produkty) {
            suma += p.getCenaBrutto() * p.getSztukWmagazynie();
        }
        return suma;
    }
};
void pokazProdukt(const Produkt& p) {
    cout <<"\n [Produkt przekazywany do funkcji pomocniczej]\n"<< endl;
    p.wypisz();
}
int main() {
    Produkt p1;
    p1.setNazwa("ksiazka");
    p1.setCenaBrutto(29.99);
    p1.setSztukWmagazynie(5);
    p1.setWymiary(7.5, 0.8, 15.0);
    Produkt p2("Macbook", 3999.99, 10, 35.5, 2.0, 24.0); // parametryczny
    p1.wypisz();
    pokazProdukt(p2);
    magazyn m;
    m.dodaj(p1);
    m.dodaj(p2);
    int idx = m.znajdzIndexPoNazwie("Ksiazka");
    if (idx != -1) {
        m.get(idx).setSztukWmagazynie(8);
    }
    m.wypisz();
    cout << "Laczna wartosc brutto magazynu: "
              << fixed << setprecision(2)
              << m.wartoscBrutto() << " zl" << endl;
    return 0;
}
