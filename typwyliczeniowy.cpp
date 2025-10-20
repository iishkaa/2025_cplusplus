#include <iostream>
using namespace std;
//typ wyliczeniowy enum
//stworz typ oceny (ndst .. cel)
enum DniTygodnia {
    poniedzialek = 1,
    wtorek,
    sroda,
    czwartek,
    piatek,
    sobota,
    niedziela
};
enum Oceny {
    niedostateczny,
    dopuszczajaca,
    dostateczny,
    dobry,
    bardzoDobry,
    celujacy,
};
enum Kierunek {
    polnoc,
    poludnie,
    wschod,
    zachod
};
string jakiKierunek(Kierunek kierunek, string jakkierunek) {
    if (jakikierunek = "N") {
        kierunek = polnoc;
    }
    switch (kierunek) {
        case "N":
            return "polnoc";
        case "S":
            return "poludnie";
        case "E":
            return "wschod";
        default:
            return "zachod";
    }


}
string jakiDzien(DniTygodnia dzien) {
    switch (dzien) {
        case poniedzialek:
            return "poniedzialek";
        case wtorek:
            return "wtorek";
        case sroda:
            return "sroda";
        case czwartek:
            return "czwartek";
        case piatek:
            return "piatek";
        case sobota:
            return "sobota";
        default:
            return "niedziela";
    }
}
string jakaOcena(Oceny ocena) {
    switch (ocena) {
        case niedostateczny:
            return "niedostateczny";
        case dopuszczajaca:
            return "dopuszczajaca";
        case dostateczny:
            return "dostateczny";
        case dobry:
            return "dobry";
        case bardzoDobry:
            return "bardzoDobry";
        default:
            return "celujacy";
    }
}
int main() {

    DniTygodnia weekend = sobota;
    string jakikierunek = "N";
    cout << jakiDzien(weekend) << endl;
    Oceny matematyka = celujacy;
    cout << jakaOcena(matematyka) << endl;
    cout << jakiKierunek(jakikierunek);
    return 0;
}