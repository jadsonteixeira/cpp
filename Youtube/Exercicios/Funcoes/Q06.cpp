#include <iostream>
#include <cstdlib>

using namespace std;

int potencia(int base, int exp);

int main() {
    system("cls");

    int valorBase, valorExp, resultado;

    cout << "Digite o valor da base: ";
    cin >> valorBase;
    cout << "Digite o valor do expoente: ";
    cin >> valorExp;

    resultado = potencia(valorBase, valorExp);

    cout << valorBase << "^" << valorExp << " = " << resultado << endl;

    return 0;
}

int potencia(int base, int exp) {
    // tratar caso com expoente == 0
    if (exp == 0) {
        return 1;
    }

    int resultado = 1;

    for (int i = 0; i < exp; i++) {
        resultado *= base;
    }

    return resultado;
}