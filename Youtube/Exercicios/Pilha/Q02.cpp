#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

int main() {
    system("cls");

    int numero;
    
    cout << "Digite um numero inteiro e positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Invalido, digite apenas positivos" << endl;
        return 0;
    }

    stack <int> pilha;

    if (numero == 0) {
        cout << "Numero em binario: 0" << endl;
        return 0;
    }

    int n = numero;

    while (n > 0) {
        int resto = n % 2; // pega o bit
        pilha.push(resto); // empilha o bit na pilha
        n = n / 2;         // reduz o numero
    }

    cout << "Numero em binario: ";
    // desempilha para formar o binario
    while (!pilha.empty()) {
        cout << pilha.top();
        pilha.pop();
    }
    cout << endl;

    return 0;
}