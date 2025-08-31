#include <iostream>
#include <cstdlib>

using namespace std;

void soma(int n1, int n2);
void soma();

int main() {
    system("cls");

    soma(20, 30);
    soma();

    return 0;
}

void soma(int n1, int n2) {
    int resultado = n1 + n2;
    cout << "Soma: " << resultado << endl;
}

void soma() {
    int n1 = 10, n2 = 20;
    int resultado = n1 + n2;
    cout << "Soma: " << resultado << endl;
}

// sobrecarga de funções é ter duas ou mais funções com o mesmo nome mas com argumentos de entrada diferentes