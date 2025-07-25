#include <iostream>
#include <cstdlib>

using namespace std;

#define ANO_ATUAL 2025

int main() {
    system("cls");

    int anoNasc, idade, idadeMeses, idadeSemanas, idadeDias;

    cout << "Ano de nascimento: ";
    cin >> anoNasc;

    idade = (ANO_ATUAL - anoNasc);
    idadeMeses = idade * 12;
    idadeSemanas = idade * 52;
    idadeDias = idade * 365;

    cout << "Idade: " << idade << endl;
    cout << "Idade em meses: " << idadeMeses << endl;
    cout << "Idade em semanas: " << idadeSemanas << endl;
    cout << "Idade em dias: " << idadeDias << endl;

    return 0;
}