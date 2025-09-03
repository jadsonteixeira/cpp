#include <iostream>
#include <cstdlib>
#include <queue> // biblioteca para usar fila

using namespace std;

int main() {
    system("cls");

    queue <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da fila: " << cartas.size() << endl;
    cout << "Primeira carta.: " << cartas.front() << endl;
    cout << "Ultima carta...: " << cartas.back() << "\n\n";

    while (!cartas.empty()) {
        cout << "Primeira carta: " << cartas.front() << endl;
        cartas.pop();
    }

    return 0;
}

/*
empty() -
size() -
front() -
back() -
push() -
pop() -
*/