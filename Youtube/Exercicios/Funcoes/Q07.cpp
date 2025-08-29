#include <iostream>
#include <cstdlib>

using namespace std;

int quadrado(int num);
void imprimir(int n);

int main() {
    system("cls");

    int valor;

    cout << "Digite um numero: ";
    cin >> valor;

    imprimir(valor);

    return 0;
}

int quadrado(int num) {
    return num * num;
}

void imprimir(int n) {
    cout << "O quadrado de " << n << " = " << quadrado(n) << endl;
}