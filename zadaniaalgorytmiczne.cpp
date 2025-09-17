#include <iostream>
using namespace std;
void przedzialParzystych(int a, int b) {
    int suma = 0;
    for (int i = a; i <= b; i++) {
        if (i%2 == 0) {
            suma += i;
        }
    }
            cout<< "suma parzystych z przedzialu "<<a<<" "<<b<< " wynosi: " << suma << endl;
}
void Odwrocone(int A[], int n) {
    int i = 0;
    int j = n - 1;
    while(i < j) {
      int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;
        j--;
    }
}
bool CzyJestpalindrom(const string& s) {
    int i = 0;
    int j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main() {
    int a;
    int b;
    cout << "a: "<< "\n" << endl;
    cin >> a;
    cout << "b: "<< "\n" << endl;
    cin >> b;
    przedzialParzystych(a, b);
    int n;
    cout << "dlugosc tablicy: "<< "\n" << endl;
    cin >> n;
    if (n < 0 || n > 100) {
        cout << "blad: nieprawidlowa dlugosc tablicy"<< endl;
        return 1;
    }
  int A[n];
    cout << "podaj "<<  n  <<" elementow" << endl;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    Odwrocone(A, n);
    cout << "tablica po odwroceniu: " ;
    for (int x : A) {
        cout << x << " ";
    }
    cout << endl;
string s ;
cout << "podaj Napis: ";
    cin >> s;

    if (CzyJestpalindrom(s)) {
        cout << "jest palindromem" << endl;
    }
    else {
        cout << "nie jest palindromem" << endl;
    }
    return 0;
}