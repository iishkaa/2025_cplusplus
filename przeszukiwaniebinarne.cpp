#include <iostream>
using namespace std;

int szukaj(int x, int tab[], int n) {
    int l = 0;
    int p = n - 1;

    while (l <= p) {
        int sr = (l + p) / 2;

        if (tab[sr] == x) {
            return sr;
        }
        else if (tab[sr] < x) {
            l = sr + 1;
        }
        else {
            p = sr - 1;
        }
    }
    return -1;
}

int main() {
    int tab[] = {1, 2, 3, 20, 35, 60, 61};
    int n = sizeof(tab) / sizeof(tab[0]);
    int x = 60;
    int result = szukaj(x, tab, n);

    if (result != -1) {
        cout << "Znaleziono element " << x << " na pozycji " << result << endl;
    }
    else {
        cout << "Nie znaleziono: " << x << endl;
    }

    return 0;
}
