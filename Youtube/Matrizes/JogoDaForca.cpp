#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    char palavra[30], letra[1], secreta[30];
    int tam = 0, i = 0, chances = 6, acertos = 0;
    bool acerto = false;

    cout << "Digite a palavra do jogo: ";
    cin >> palavra;

    system("cls");

    while (palavra[i] != '\0') { // '\0' adiciona ao final da string para indicar que a string terminou
        i++;    // serve como contador
        tam++;  // recebe o tamanho do Array
    }

    for (int i = 0; i < 30; i++) {
        secreta[i] = '-';
    }

    while ((chances > 0) && (acertos < tam)) {
        cout << "Chances restantes: " << chances << endl;
        cout << "Palavra: ";
        for (int i = 0; i < tam; i++) {
            cout << secreta[i];
        }
        cout << endl;

        cout << "Digite uma letra: ";
        cin >> letra[0];
        for (int i = 0; i < tam; i++) {
            if (palavra[i] == letra[0]) {
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }

        if (!acerto) {
            chances--;
        }

        acerto = false;
        system("cls");
    }

    if (acertos == tam) {
        cout << "Acertou a palavra" << endl;
    } else {
        cout << "Voce perdeu" << endl;
    }

    return 0;
}