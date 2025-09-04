#include <iostream>
#include <cstdlib>
#include <list> // biblioteca para utilizar listas

using namespace std;

// inserindo elementos em qualquer parte da lista

int main() {
    system("cls");

    list<int> lista;
    int tamanhoLista = 10;
    list<int>::iterator it;

    for (int i = 0; i < tamanhoLista; i++) {
        lista.push_front(i);
    }

    it = lista.begin(); // início da lista
    advance(it, 7); // colocar na posição 5

    lista.insert(it, 0); // recebe a posição e o valor

    cout << "Tamanho da lista: " << lista.size() << endl;

    tamanhoLista = lista.size();

    for (int i = 0; i < tamanhoLista; i++) {
        cout << lista.front() << " ";
        lista.pop_front();
    }

    cout << "\nTamanho da lista: " << lista.size() << endl;

    return 0;
}

/*
    list<int> lista(10) - lista com 10 elementos
    list<int> lista(5, 10) - lista com 5 elementos com o valor 10

    push_front() - insere no início da lista
    push_back() - insere no final da lista
    front() - retorna o elemento que está na frente da lista
    back() - retorna o elemento que está no fim da lista
    pop_front() - remove o elemento que está na frente da lista
*/