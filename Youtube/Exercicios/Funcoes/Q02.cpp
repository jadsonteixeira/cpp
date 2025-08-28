#include <iostream>
#include <cstdlib>

using namespace std;

double soma(double n1, double n2);

int main() {
    system("cls");

    int num1, num2;

    cout << "Digite um numero: ";
    cin >> num1;
    cout << "Digite outro numero: ";
    cin >> num2;

    cout << "Soma dos numeros: " << soma(num1, num2) << endl;

    return 0;
}

double soma(double n1, double n2) {
    return n1 + n2;
}