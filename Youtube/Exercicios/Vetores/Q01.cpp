#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int tamVetor = 10;
    int vetorA[tamVetor], vetorB[tamVetor];

    cout << "Vetor A: ";
    for (int i = 0; i < tamVetor; i++) {
        vetorA[i] = i + 1;
        cout << vetorA[i] << " ";
    }
    cout << endl;

    cout << "Vetor B: ";
    for (int i = 0; i < tamVetor; i++) {
        vetorB[i] = vetorA[i] * 2;
        cout << vetorB[i] << " ";
    }

    return 0;
}