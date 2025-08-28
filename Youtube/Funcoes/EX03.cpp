#include <iostream>
#include <cstdlib>

using namespace std;

int soma2(int n1, int n2);

int main() {
    system("cls");

    int resultado;

    resultado = soma2(10, 10);

    cout << "Resultado: " << resultado << endl;
    cout << "Resultado: " << soma2(10, 20) << endl;

    return 0;
}

// funcao com retorno
int soma2(int n1, int n2) {
    return n1 + n2;
}