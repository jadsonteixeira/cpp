#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    enum DiaSemana{dom, seg, ter, qua, qui, sex, sab};
    int opcao;

    cout << "Digite um numero (0 - 6): ";
    cin >> opcao;

    // verificacao
    if (opcao < 0 || opcao > 6) {
        cout << "Numero invalido. Digite um valor entre 0 e 6" << endl;
        return 1;
    }

    DiaSemana dia = static_cast<DiaSemana>(opcao);

    switch (dia) {
        case dom:
            cout << "Domingo";
            break;
        case seg:
            cout << "Segunda";
            break;
        case ter:
            cout << "Terca";
            break;
        case qua:
            cout << "Quarta";
            break;
        case qui:
            cout << "Quinta";
            break;
        case sex:
            cout << "Sexta";
            break;
        case sab:
            cout << "Sabado";
            break;
        default:
            cout << "Opcao invalida!";
    }

    return 0;
}