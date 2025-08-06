#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int num;
    char opc;

    inicio:

    cout << "Digite um numero: ";
    cin >> num;

    switch (num) {
        case 1:
            cout << "Verde" << endl;
            break;
        case 2: 
            cout << "Azul" << endl;
            break;
        case 3:
            cout << "Vermelho" << endl;
            break;
        case 4:
        case 5:
        case 6:
            cout << "Preto" << endl;
            break;
        default:
            cout << "Numero invalido" << endl;
    }

    cout << "Outra cor? (s/n): ";
    cin >> opc;
    if (opc == 's' || opc == 'S') {
        goto inicio;
    }

    return 0;
}