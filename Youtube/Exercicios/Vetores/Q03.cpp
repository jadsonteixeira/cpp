#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    system("cls");
    srand(time(NULL)); 

    int vetor[10];
    int tamVetor = sizeof(vetor) / sizeof(vetor[0]);
    int somaInf15 = 0;
    int qntIgual15 = 0;
    int somaSup15 = 0;
    int qntSup15 = 0;
    double mediaSup15 = 0;

    cout << "Vetor: ";
    for (int i = 0; i < tamVetor; i++) {
        vetor[i] = rand() % 30 + 1;
        cout << vetor[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < tamVetor; i++) {
        if (vetor[i] < 15) {
            somaInf15 += vetor[i];
        } else if (vetor[i] == 15) {
            qntIgual15++;
        } else {
            somaSup15 += vetor[i];
            qntSup15++;
        }
    }
    mediaSup15 = (double) somaSup15 / qntSup15;

    cout << "Soma inferiores a 15: " << somaInf15 << endl;
    cout << "Quantidade iguais a 15: " << qntIgual15 << endl;
    cout << "Soma superiores a 15: " << somaSup15 << endl;
    cout << "Quantidade superiore a 15: " << qntSup15 << endl;
    cout << fixed << setprecision(2);
    cout << "Media dos superiores a 15: " << mediaSup15 << endl;

    return 0;
}