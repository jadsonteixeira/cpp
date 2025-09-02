#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// declarar constantes para o tamanho da matriz
const int LINHAS = 5;
const int COLUNAS = 5;

// declarações das funções
void preencherMatriz(int matriz[][COLUNAS], int qntLinhas);
void imprimirMatriz(int matriz[][COLUNAS], int qntLinhas);
bool jogar(int matriz[][COLUNAS], int jogadorAtual, int &pontos);

int main() {
    system("cls"); // limpa a tela (Windows)

    int matriz[LINHAS][COLUNAS];
    int pontosJogador1 = 0;
    int pontosJogador2 = 0;
    int jogadorAtual = 1;

    srand(time(0));
    preencherMatriz(matriz, LINHAS);

    cout << "ENCONTRE OS 1s" << endl;

    // loop do jogo
    while (pontosJogador1 < 3 && pontosJogador2 < 3) {
        imprimirMatriz(matriz, LINHAS);
        bool acertou = jogar(matriz, jogadorAtual, (jogadorAtual == 1) ? pontosJogador1 : pontosJogador2);

        if (acertou) {
            cout << "Jogador " << jogadorAtual << " encontrou um 1" << endl;
        } else {
            cout << "Nada encontrado nesta posicao" << endl;
        }

        jogadorAtual = (jogadorAtual == 1) ? 2 : 1;
    }

    // imprimir vencedor
    if (pontosJogador1 == 3) {
        cout << "\nJogador 1 venceu" << endl;
    } else {
        cout << "\nJogador 2 venceu" << endl;
    }

    return 0;
}

// preenche matriz com 0 ou 1
void preencherMatriz(int matriz[][COLUNAS], int qntLinhas) {
    srand(time(0));
    for (int i = 0; i < qntLinhas; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 2;
        }
    }
}

// imprime a matriz
void imprimirMatriz(int matriz[][COLUNAS], int qntLinhas) {
    for (int i = 0; i < qntLinhas; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] == 1) {
                cout << "\033[32m" << matriz[i][j] << " \033[0m"; // verde
            } else {
                cout << "\033[31m" << matriz[i][j] << " \033[0m"; // vermelho
            }
        }
        cout << endl;
    }
}

bool jogar(int matriz[][COLUNAS], int jogadorAtual, int &pontos) {
    int linha, coluna;

    cout << "Jogador " << jogadorAtual << ", escolha linha (0 - " << LINHAS - 1 << "): ";
    cin >> linha;
    cout << "Escolha coluna (0 - " << COLUNAS - 1 << "): ";
    cin >> coluna;

    // validar posição
    if (linha < 0 || linha >= LINHAS || coluna < 0 || coluna >= COLUNAS) {
        cout << "Posição inválida, tente novamente\n";
        return false;
    }

    if (matriz[linha][coluna] == 1) {
        pontos++;
        matriz[linha][coluna] = 0;
        return true;
    }

    return false;
}
