#include <iostream>
using namespace std;
int wartownik(int a[], int n, int x) {
a[n] = x;
    int i = 0;
    while (a[i] !=x) {
        i++;
    }
    if (i == n)
        return -1;
    else
        return i;
}
int main() {
    int n,x;
    cout << "podaj liczbe n: ";
    cin >> n;
    int *a = new int[n + 1]; // +1 dla wartownika

    cout << "podaj elementy tablicy: \n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "podaj x: ";
    cin >> x;

    int idx = wartownik(a,n,x);

    if (idx == -1) {
        cout <<"nieznaleziono elementu o wartosci " << x << endl;
    }
    else {
        cout << "znaleziono element " << x << " pod indeksem " << idx << endl;
    }
    delete[] a;

    return 0;
}