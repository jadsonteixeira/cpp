#include <iostream>
#include <cstdlib>
#include <stack> // biblioteca para trabalhar com pilhas

using namespace std;

int main() {
    system("cls");

    // criando a pilha
    stack <string> cartas;

    // adicionando elementos na pilha
    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

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