#include <iostream>
#include <cstdlib>

using namespace std; // falando que vou usar várias funções padrão do C++

int main() {
    system("cls");

    const int NUM_SECRETO = 42;
    int chute;
    bool naoAcertou = true ;
    int qntTentativas = 0;
    double pontos = 1000.0;

    cout << "Adivinhe o numero" << endl;

    while (naoAcertou) {
        qntTentativas++;
        cout << "Tentativas: " << qntTentativas << endl;
        cout << "Digite seu chute: ";
        cin >> chute;

        double pontosPerdidos = abs(chute - NUM_SECRETO) / 2.0;
        pontos -= pontosPerdidos;

        cout << "Valor do chute: " << chute << endl;

        bool acertou = (chute == NUM_SECRETO);
        bool maior = (chute > NUM_SECRETO);

        if (acertou) {
            cout << "Acertou" << endl;
            naoAcertou = false;
        } else if (maior) {
            cout << "Seu chute foi maior\n" << endl;
        } else {
            cout << "Seu chute foi menor\n" << endl;
        }
    }

    cout << "Quantidade de tentativas: " << qntTentativas << endl;
    cout.precision(1); // quantidade de casas depois da vírgula
    cout << fixed; // fixando a quantidade de casas no cout
    cout << "Pontuacao: " << pontos << " pontos" << endl;
    cout << "Fim de jogo" << endl;

    return 0;
}