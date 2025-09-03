#include <iostream>
#include <cstdlib>
#include <stack> // biblioteca para trabalhar com pilhas

using namespace std;

int main() {
    system("cls");

    // criando a pilha
    stack <string> cartas;

    // empty() verifica se a pilha está vazia e retorna um bool (true ou false)
    if (cartas.empty()) {
        cout << "Pilha vazia\n" << endl;
    } else {
        cout << "Pilha com cartas\n" << endl;
    }

    // adicionando elementos na pilha
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    if (cartas.empty()) { // cartas.size() == 0 também funciona
        cout << "Pilha vazia\n" << endl;
    } else {
        cout << "Pilha com cartas\n" << endl;
    }

    // zerando todos os elementos da pilha
    while (!cartas.empty()) {
        cout << "Carta do topo: " << cartas.top() << endl;
        cartas.pop();
    }

    cout << "Tamanho da pilha: " << cartas.size() << endl;

    // retornar o elemento que está no topo
    cout << "Carta do topo: " << cartas.top() << endl;

    // removendo elementos de uma pilha
    cartas.pop(); // remove o elemento do topo (último adicionado)
    cartas.pop();

    cout << "Nova carta do topo: " << cartas.top() << endl;
    cout << "Tamanho da pilha: " << cartas.size() << endl;

    return 0;
}
// push() adiciona elementos na pilha
// pop() remove elemento do topo
// top() exibe qual elemento está no topo
// size() retorna o tamanho da pilha
// empty() retorna se está vazia ou não