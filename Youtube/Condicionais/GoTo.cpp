#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int n1, n2, soma;
    char opc;

    inicio: // label do goto

    cout << "Digite uma nota: ";
    cin >> n1;
    cout << "Digite outra nota: ";
    cin >> n2;

    soma = n1 + n2;

    if (soma >= 60) {
        cout << "Aprovado" << endl;
    } else if (soma < 40) {
        cout << "Reprovado" << endl;
    } else {
        cout << "Recuperação" << endl;
    }

    cout << "Digite outras notas? (s/n): ";
    cin >> opc;

    if (opc == 's' || opc == 'S') {
        goto inicio; // volta la pro label inicio
    }

    return 0;
}