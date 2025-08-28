#include <iostream>
#include <cstdlib>

using namespace std;

bool verificarSeNumPar(int num);

int main() {
    system("cls");

    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if (verificarSeNumPar(num) == true) {
        cout << "Numero PAR" << endl;
    } else {
        cout << "Numero IMPAR" << endl;
    }

    return 0;
}

bool verificarSeNumPar(int num) {
    if (num % 2 == 0) {
        return true;
    }
    return false;
}