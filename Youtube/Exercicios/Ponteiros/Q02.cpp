#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int numeros[5];
    int *ptr;
    int soma = 0;

    cout << "Digite 5 numeros inteiros: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    ptr = numeros; // aponta para o início do vetor, pois em C++ o nome do vetor já representa o endereço do primeiro elemento

    cout << "\nElementos do vetor: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " "; // acessando cada valor com ponteiro
        soma += *(ptr + i); // somando os valores
    }

    cout << "\nSoma dos elementos: " << soma << endl;

    return 0;
}