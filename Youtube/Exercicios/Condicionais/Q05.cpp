#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int num1, num2, opc;

    inicio:

    cout << "Digite um numero: ";
    cin >> num1;
    cout << "Digite outro numero: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "Primeiro numero e maior" << endl;
    } else if (num2 > num1) {
        cout << "Segundo numero e maior" << endl; 
    } else {
        cout << "Numeros iguais" << endl;
    }

    cout << "1 - continuar \n2 - sair \nOpcao: ";
    cin >> opc;
    if (opc == 1) {
        goto inicio;
    } else {
        cout << "Fim do programa" << endl;
        return 0;
    }

    return 0;
}