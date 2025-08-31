#include <iostream>
#include <cstdlib>

using namespace std;

// funções
void cadastrarNotas(float notas[], int qnt);
void mostrarNotas(float notas[], int qnt);
float calcularMedia(float notas[], int qnt);
void verificarAprovados(float notas[], int qnt);

int main() {
    system("cls");

    int qntAlunos;

    cout << "Digite a quantidade de alunos: ";
    cin >> qntAlunos;

    float notas[qntAlunos];

    int opcao;

    do {
        cout << "\n MENU \n";
        cout << "1 - Cadastrar notas\n";
        cout << "2 - Exibir notas\n";
        cout << "3 - Calcular media dos alunos\n";
        cout << "4 - Exibir aprovados e reprovados\n";
        cout << "0 - Sair\n";
        cout << endl;
        cout << "Digite uma opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                cadastrarNotas(notas, qntAlunos);
                break;
            case 2:
                mostrarNotas(notas, qntAlunos);
                break;
            case 3: 
                cout << "Media dos alunos: " << calcularMedia(notas, qntAlunos) << endl;
                break;
            case 4:
                verificarAprovados(notas, qntAlunos);
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opcao invalida\n";
        } 
    } while (opcao != 0);

    return 0;
}

void cadastrarNotas(float notas[], int qnt) {
    for (int i = 0; i < qnt; i++) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
    }
}

void mostrarNotas(float notas[], int qnt) {
    cout << "\nNotas dos alunos:\n";
    for (int i = 0; i < qnt; i++) {
        cout << "Aluno " << i + 1 << ": " << notas[i] << endl;
    }
}

float calcularMedia(float notas[], int qnt) {
    float soma = 0;
    for (int i = 0; i < qnt; i++) {
        soma += notas[i];
    }
    return soma / qnt;
}

void verificarAprovados(float notas[], int qnt) {
    for (int i = 0; i < qnt; i++) {
        if (notas[i] >= 6) {
            cout << "Aluno " << i + 1 << ": Aprovado (Nota " << notas[i] << ")\n";
        } else {
            cout << "Aluno " << i + 1 << ": Reprovado (Nota " << notas[i] << ")\n";
        }
    }
}