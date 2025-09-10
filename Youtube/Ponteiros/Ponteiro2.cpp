#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int *p;
    int vetor[10];

    p = &vetor[0]; // atribuindo o endereço de memória do primeiro elemento do vetor[0] para p
    // p = vetor; -> é a mesma coisa
    cout << "Endereco de p (vetor[0]): " << p << endl;

    // atribuindo valores as posições
    *p = 10; // vetor[0] = 10
    cout << "Valor de vetor[0]: " << vetor[0] << endl;

    // utilizando a próxima posição
    *(p++);
    cout << "Endereco de p (vetor[1]): " << p << endl;
    // atribuindo valor a posição [1]
    *p = 20;
    cout << "Valor de vetor[1]: " << vetor[1] << endl;

    // vetor[2]
    *(p++);
    cout << "Enderco de p (vetor[2]): " << p << endl;
    *p = 30;
    cout << "Valor de vetor[2]: " << vetor[2] << endl;

    return 0;
}