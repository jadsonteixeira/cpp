#include <iostream>
#include <cstdlib>

using namespace std;

void imprimir(string vetor[4]);

int main() {
    system("cls");

    string transportes[4] = {"Carro", "Moto", "Skate", "Bicicleta"};

    imprimir(transportes);

    return 0;
}

// funcao para imprimir valores de um vetor
void imprimir(string vetor[4]) {
    for (int i = 0; i < 4; i++) {
        cout << vetor[i] << endl;
    }
}