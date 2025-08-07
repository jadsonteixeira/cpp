#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    srand(time(NULL));

    int tamVetor = 10;
    int vetorA[tamVetor], vetorB[tamVetor], vetorC[tamVetor];

    cout << "Vetor A: ";
    for (int i = 0; i < tamVetor; i++) {
        vetorA[i] = rand() % 100;
        cout << vetorA[i] << " ";
    }
    cout << endl;

    cout << "Vetor B: ";
    for (int i = 0; i < tamVetor; i++) {
        vetorB[i] = rand() % 100;
        cout << vetorB[i] << " ";
    }
    cout << endl;

    cout << "Vetor C: ";
    for (int i = 0; i < tamVetor; i++) {
        if (vetorA[i] > vetorB[i]) {
            vetorC[i] = 1;
            cout << vetorC[i] << " ";
        } else if (vetorA[i] < vetorB[i]) {
            vetorC[i] = -1;
            cout << vetorC[i] << " ";
        } else {
            vetorC[i] = 0;
            cout << vetorC[i] << " ";
        }
    }

    return 0;
}