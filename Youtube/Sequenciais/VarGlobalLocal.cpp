#include <iostream>
#include <cstdlib>

using namespace std;

int n1, n2; // variáveis globais

int main() {
    system("cls");

    int n3, n4; // variáveis locais
    int soma;

    int n1 = 10;
    int n2 = 20;

    soma = n1 + n2;

    cout << "Soma: " << soma << endl;

    return 0;
}