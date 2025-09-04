#include <iostream>
#include <cstdlib>
#include <string>
#include <list>

using namespace std;

int main() {
    system("cls");

    list<string> tarefas;
    int opcao;
    string tarefa;

    inicio:

    cout << "1 - Adicionar tarefa" << endl;
    cout << "2 - Remover tarefa" << endl;
    cout << "3 - Mostrar tarefas" << endl;
    cout << "4 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Tarefa: ";
            cin >> tarefa;
            tarefas.push_front(tarefa);
            goto inicio;
            break;

        case 2: 
            cout << "Nome da tarefa: ";
            cin >> tarefa;
            tarefas.remove(tarefa);
            goto inicio;
            break;
        
        case 3:
            cout << "Minhas tarefas" << endl;
            if (tarefas.empty()) {
                cout << "Nenhuma tarefa" << endl;
                goto inicio;
            } else {
                for (string p : tarefas) {
                    cout << p << "\n";
                }
                goto inicio;
                break;
            }

        default:
            break;
    }

    return 0;
}