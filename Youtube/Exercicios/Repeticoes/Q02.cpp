#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    system("cls");

    int num;

    cout << "Digite um numero: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " nao e primo";
    } else {
        bool isPrimo = true;
        int limite = (int) sqrt(num);

        for (int i = 2; i <= limite; i++) {
            if (num % i == 0) {
                isPrimo = false;
                break;
            }
        }

        if (isPrimo) {
            cout << num << " e primo" << endl;
        } else {
            cout << num << " nao e primo" << endl;
        }
    }

    return 0;
}