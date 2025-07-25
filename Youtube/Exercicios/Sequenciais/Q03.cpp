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

    cout << "IMC: " << imc << endl;

    return 0;
}