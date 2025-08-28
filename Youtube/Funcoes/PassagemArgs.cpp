#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]) {
    system("cls");

    if (argc > 1) {
        if (!strcmp(argv[1], "sol")) {
            cout << "Vou ao clube" << endl;
        } else if (!strcmp(argv[1], "nublado")) {
            cout << "Vou ao cinema" << endl;
        } else {
            cout << "Vou ficar em casa" << endl;
        }
    }

    return 0;
}

// int argc = guarda a quantidade de parâmetros informado
// char *argv[] é um ponteiro para uma matriz de ponteiros de caracteres

// o primeiro argumento é o nome do programa (por padrão do compilador)
