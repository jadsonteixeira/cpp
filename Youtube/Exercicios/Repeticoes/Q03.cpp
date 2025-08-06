#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int num;
    long fatorial = 1;

    do {
        cout << "Digite um numero positivo: ";
        cin >> num;

        if (num < 0) {
            cout << "Erro: digite um numero positivo" << endl;
        }
    } while (num < 0);

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    cout << num << "! = " << fatorial << endl;

    return 0;
}