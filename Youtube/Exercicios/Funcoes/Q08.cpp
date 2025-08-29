#include <iostream>
#include <cstdlib>

using namespace std;

double conversorCelFah(double grausCelsius);

int main() {
    system("cls");

    double valorCelsius;

    cout << "Digite o valor em Celsius: ";
    cin >> valorCelsius;

    cout << "Valor em graus Celsius: " << valorCelsius << endl;
    cout << "Valor em graus Fahrenheit: " << conversorCelFah(valorCelsius) << endl;

    return 0;
}

double conversorCelFah(double grausCelsius) {
    double grausFahrenheit = (grausCelsius * 1.8) + 32;

    return grausFahrenheit;
}