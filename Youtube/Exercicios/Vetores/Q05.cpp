#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    srand(time(NULL));

    int tamVetor = 10;
    int vetorA[tamVetor], vetorB[tamVetor];

    cout << "Vetor A: ";
    for (int i = 0; i < tamVetor; i++) {
        vetorA[i] = rand() % 100;
        cout << vetorA[i] << " ";
    }
    cout << endl;

    cout << "Vetor B: ";
    for (int i = 0; i < tamVetor; i++) {
        if (vetorA[i] % 2 == 0) {
            vetorB[i] = 1;
            cout << vetorB[i] << " ";
        } else {
            vetorB[i] = 0;
            cout << vetorB[i] << " ";
        }
    } 

    return 0;
}