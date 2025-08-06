#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    char turno;

    cout << "M - Matutino \nV - Vespertino \nN - Noturno \nDigite o turno: ";
    cin >> turno;

    switch (turno) {
        case 'M':
        case 'm':
            cout << "Bom dia" << endl;
            break;
        case 'V':
        case 'v':
            cout << "Boa tarde" << endl;
            break;
        case 'N':
        case 'n':
            cout << "Boa noite" << endl;
            break;
        default:
            cout << "Opcao invalida" << endl;
    }

    return 0;
}