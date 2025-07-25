#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    double peso, altura, imc;

    cout << "Peso: ";
    cin >> peso;
    cout << "Altura: ";
    cin >> altura;

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        cout << "IMC: " << imc << "\nAbaixo do peso";
    } else if (imc >= 18.5 && imc <= 24.9) {
        cout << "IMC: " << imc << "\nPeso normal";
    } else if (imc >= 25.0 && imc <= 29.9) {
        cout << "IMC: " << imc << "\nAcima do peso";
    } else if (imc >= 30.0 && imc <= 34.9) {
        cout << "IMC: " << imc << "\nObesidade I";
    } else if (imc >= 35.0 && imc <= 39.9) {
        cout << "IMC: " << imc << "\nObesidade II";
    } else {
        cout << "IMC: " << imc << "\nObesidade III";
    }

    return 0;
}