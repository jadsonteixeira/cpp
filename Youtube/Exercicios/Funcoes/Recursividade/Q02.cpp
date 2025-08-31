#include <iostream>
#include <cstdlib>

using namespace std;

int somaAteN(int n);

int main() {
    system("cls");

    int num;

    cout << "Digite um numero: ";
    cin >> num;

    cout << "Soma de 1 ate " << num << " = " << somaAteN(num) << endl;

    return 0;
}

int somaAteN(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + somaAteN(n - 1);
    }
}