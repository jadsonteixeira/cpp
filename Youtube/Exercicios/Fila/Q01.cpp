#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

int main() {
    system("cls");

    int opcao;
    queue <string> clientes;
    string nome;

    do {
        cout << "MENU" << endl;
        cout << "1 - Adicionar cliente a fila" << endl;
        cout << "2 - Atender cliente" << endl;
        cout << "3 - Mostrar primeiro e ultimo da fila" << endl;
        cout << "4 - Mostrar quantidade de clientes na fila" << endl;
        cout << "5 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: 
                cout << "\nNome do cliente: ";
                cin >> nome;
                clientes.push(nome);
                cout << nome << " entrou na fila\n" << endl;
                break;
            
            case 2:
                if (!clientes.empty()) {
                    cout << "\nCliente atendido: " << clientes.front() << "\n\n";
                    clientes.pop();
                } else {
                    cout << "\nFila vazia. Ninguem para atender" << endl;
                }
                break;
            
            case 3:
                if (!clientes.empty()) {
                    cout << "\nPrimeiro da fila: " << clientes.front() << endl;
                    cout << "Ultimo da fila: " << clientes.back() << "\n\n";
                } else {
                    cout << "Fila vazia" << endl;
                }
                break;
            
            case 4: 
                cout << "\nTamanho da fila: " << clientes.size() << endl;
                break;

            case 5:
                cout << "\nSaindo..." << endl;
                break;

            defautl:
                cout << "\nOpcao invalida" << endl;
        }

    } while (opcao != 5);

    return 0;
}