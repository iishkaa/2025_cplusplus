#include <iostream>
using namespace std;
void show(int *a) {
    cout << *a << endl;
}

int main() {

    int *tab = new int[6] {1,2,3,4,5};
    cout << tab[3] << endl;
    cout << *(tab+3) << endl;
    delete [] tab;

    int *zwykla = new int(6);
    *zwykla = 7;
    cout << *zwykla << endl;
    delete zwykla;
    //tablica 2-wymiarowa dynamiczna
    int **tabb = new int*[3];
    for (int i = 0; i < 3; i++) {
        tabb[i] = new int[3];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            tabb[i][j] = i*j;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << tabb[i][j] << " ";
        cout << endl;
    }
    //usuwanie jej
    delete [] tabb;
    return 0;
}