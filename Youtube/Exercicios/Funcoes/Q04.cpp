#include <iostream>
#include <cstdlib>

using namespace std;

int fatorial(int num);

int main() {
    system("cls");

    int num;

    do {
        cout << "Digite um numero: ";
        cin >> num;

        if (num < 0) {
            cout << "ERRO: digite um numero maior que 0 (zero)" << endl;
        }

        cout << "Fatorial de " << num << "!: " << fatorial(num) << endl;

    } while (num < 0);

    return 0;
}

int fatorial(int num) {
    long fatorial = 1;

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    return fatorial;
}