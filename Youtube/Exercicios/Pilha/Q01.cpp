#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

int main() {
    system("cls");

    string palavra;

    cout << "Digite uma palavra: ";
    cin >> palavra;

    stack <char> pilha;

    // coloca cada caractere da palavra na pilha
    for (char c : palavra) {
        pilha.push(c);
    }

    // retira da pilha e monta a palavra invertida
    string palavraInvertida = "";
    while (!pilha.empty()) {
        palavraInvertida += pilha.top();
        pilha.pop();
    }

    cout << "Palavra original: " << palavra << endl;
    cout << "Palavra invertida: " << palavraInvertida << endl;

    if (palavra == palavraInvertida) {
        cout << "Palindromo" << endl;
    } else {
        cout << "Nao palindromo" << endl;
    }

    return 0;
}