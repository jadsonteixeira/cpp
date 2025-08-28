#include <iostream>
#include <cstdlib>

using namespace std;

double media(double n1, double n2, double n3);

int main() {
    system("cls");

    int num1, num2, num3;

    cout << "Digite tres numeros a seguir: \n" << endl;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    cout << "Digite o terceiro numero: ";
    cin >> num3;

    cout << "Media: " << media(num1, num2, num3) << endl;

    return 0;
}

double media(double n1, double n2, double n3) {
    double media = (n1 + n2 + n3) / 3;

    return media;
}