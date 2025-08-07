#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int vetor[10];
    int tamArray = sizeof(vetor) / sizeof(vetor[0]);

    cout << "Vetor: ";
    for (int i = 0; i < tamArray; i++) {
        vetor[i] = i + 1;
        cout << vetor[i] << " ";
    }

    return 0;
}