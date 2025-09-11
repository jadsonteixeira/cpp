#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int vetor[5];
    int *ptr;
    int maior = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    ptr = vetor;

    cout << "Vetor: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";

        if (*(ptr + i) > maior) {
            maior = *(ptr + i);
        }
    }


    cout << "\nMaior elemento: " << maior << endl;

    return 0;
}