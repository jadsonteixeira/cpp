#include <iostream>
#include <cstdlib>

using namespace std;

int maiorNumero(int n1, int n2, int n3);

int main() {
    system("cls");

    int num1, num2, num3;

    cout << "Digite numero 1: ";
    cin >> num1;
    cout << "Digite numero 2: ";
    cin >> num2;
    cout << "Digite numero 3: ";
    cin >> num3;

    cout << "Maior numero: " << maiorNumero(num1, num2, num3) << endl;

    return 0;
}

int maiorNumero(int n1, int n2, int n3) {
    if (n1 > n2 && n1 > n3) {
        return n1;
    } else if (n2 > n1 && n2 > n3) {
        return n2;
    } else {
        return n3;
    }
}