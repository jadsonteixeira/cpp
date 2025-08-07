#include <iostream> 
#include <cstdlib>
#include <cmath>
#include <iomanip> // biblioteca para formatar casas após a vírgula

using namespace std;

int main() {
    system("cls");

    int tamVetor = 10;
    int vetorA[tamVetor];
    double vetorB[tamVetor];

    cout << "Vetor A: ";
    for (int i = 0; i < tamVetor; i++) {
        vetorA[i] = i + 1;
        cout << vetorA[i] << " ";
    }
    cout << endl;

    cout << "Vetor B: ";
    for (int i = 0; i < tamVetor; i++) {
        vetorB[i] = sqrt(vetorA[i]);
        cout << fixed << setprecision(2);
        cout << vetorB[i] << " ";
    }

    return 0;
}