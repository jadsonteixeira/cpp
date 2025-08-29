#include <iostream>
#include <cstdlib>

using namespace std;

void preencherVetor(int vetor[], int tamanhoVetor);
void imprimirVetor(int vetor[], int tamanhoVetor);

int main() {
    system("cls");

    const int TAMANHO_VETOR = 10;
    int array[TAMANHO_VETOR];

    preencherVetor(array, TAMANHO_VETOR);
    imprimirVetor(array, TAMANHO_VETOR);

    return 0;
}

void preencherVetor(int vetor[], int tamanhoVetor) {
    for (int i = 0; i < tamanhoVetor; i++) {
        vetor[i] = i + 1;
    }
}

void imprimirVetor(int vetor[], int tamanhoVetor) {
    cout << "Vetor: ";
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}