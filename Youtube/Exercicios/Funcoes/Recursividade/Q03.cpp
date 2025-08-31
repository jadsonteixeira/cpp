#include <iostream>
#include <cstdlib>

using namespace std;

int potencia(int base, int exp);

int main() {
    system("cls");

    int base, exp;

    cout << "Digite a base: ";
    cin >> base;
    cout << "Digite o expoente: ";
    cin >> exp;

    cout << base << "^" << exp << " = " << potencia(base, exp) << endl;

    return 0;
}

int potencia(int base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * potencia(base, exp - 1); 
    }
}