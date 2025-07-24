#include <iostream>
#include <cstdlib>

using namespace std; // falando que vou usar várias funções padrão do C++

int main() {
    system("cls");

    const int NUM_SECRETO = 42;
    int chute;
    
    cout << "Adivinhe o numero" << endl;
    cout << "Digite seu chute: ";
    cin >> chute;

    cout << "Valor do chute: " << chute << endl;
    
    bool acertou = (chute == NUM_SECRETO);
    bool maior = (chute > NUM_SECRETO);

    if (acertou) {
        cout << "Acertou" << endl;
    } else if (maior) {
        cout << "Seu chute foi maior" << endl;
    } else {
        cout << "Seu chute foi menor" << endl;
    }

    return 0;
}