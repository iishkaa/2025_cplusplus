#include <iostream>
using namespace std;
int x = 0;

void zrobcos() {
    //cos robi
}
/**
 * KontoBankowe - przechowuje dane:
 * saldo
 * wplata
 * wyplata
 * mozna tez pobrac saldo;
 *
 */
class KontoBankowe {
    private:
    double saldo;
    public:
    KontoBankowe(double poczatkoweSaldo);
    void wplata(double kwota);
    void wyplata(double kwota);
    double pobierzSaldo() const;
};
/**
 *
 * @param szerokosc - szerokosc prostokąta
 * @param wysokosc - wysokosc prostokąta
 * @return - oblicza pole prostokąta
 */
int obliczPoleProstokata(int szerokosc, int wysokosc) {
    return wysokosc * szerokosc;
}
const int m = 5, n = 5;
bool pseudoKod( int A[][m]) {
    bool P[n][m];
    P[0][0] = true;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            if (A[i][j] == 0) {
                P[i][j] = false;
            }
            else {
                if (i == 1 && j != 1) {
                    P[i][j] = P[i][j-1];
                }
                if (i != 1 && j == 1) {
                    P[i][j] = P[i-1][j];
                }
                if (i != 1 && j != 1) {
                    P[i][j] = P[i][j-1] || P[i-1][j];
                }
            }
        }
    }
    return P[n-1][m-1];
}
int main() {

    int A[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = 1;
        }
    }
    //a)
    //A[0][1] = 0;
    //A[1][2] = 0;
    //A[n-1][m-1] = 1;
    //b)
    //A[0][1] = 0;
    //A[1][1] = 0;
    //A[1][3] = 0;
    //A[2][3] = 0;
    //c)
    A[0][2] = 0;
    A[0][3] = 0;
    A[0][4] = 0;
    A[1][0] = 0;
    A[2][0] = 0;

    cout << pseudoKod(A);

    return 0;
}