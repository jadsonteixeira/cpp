#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    enum NivelAcesso{convidado, usuario, moderador, adm};
    int opcao;

    cout << "LOGIN" << endl;
    cout << "1 - Convidado \n2 - Usuario \n3 - Moderador \n4 - Administrador \nEscolha uma opcao: ";
    cin >> opcao;

    cout << endl;

    if (opcao < 1 && opcao > 4) {
        cout << "Opcao invalida" << endl;
        return 1;
    }

    NivelAcesso nivel = static_cast<NivelAcesso>(opcao - 1);

    switch (nivel) {
        case convidado:
            cout << "Convidado autorizado" << endl;
            break;
        case usuario:
            cout << "Usuario normal" << endl;
            break;
        case moderador:
            cout << "Moderator autorizado" << endl;
            break;
        case adm:
            cout << "Bem vindo Administrador" << endl;
            break;
        default:
            cout << "Opcao invalida" << endl;
    }

    return 0;
}