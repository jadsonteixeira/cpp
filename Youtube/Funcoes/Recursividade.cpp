#include <iostream>
#include <cstdlib>

using namespace std;

void contador(int n);
void contador2(int num, int cont = 0);

int main() {
    system("cls");

    cout << "Funcao sem recursividade" << endl;
    contador(10);

    cout << "\n\nFuncao com recursividade" << endl;
    contador2(10, 0);

    return 0;
}

// funções sem recursividade
void contador(int n) {
    for (int i = 0; i <= n; i++) {
        cout << i << " ";
    }
}

// função com recursividade
void contador2(int num, int cont) {
    cout << cont << " ";

    if (num > cont) {
        contador2(num, ++cont);
    }
}

// Recursividade é uma função que chama a si própria

// Cada chamada da função vai usar o seu próprio registro de ativação, que contém suas próprias variáveis e parâmetros