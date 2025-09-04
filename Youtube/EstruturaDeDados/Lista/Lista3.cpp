#include <iostream>
#include <cstdlib>
#include <list> // biblioteca para utilizar listas

using namespace std;

// utilizando o sort e o reverse

int main() {
    system("cls");

    list<int> lista;
    int tamanhoLista = 10;
    list<int>::iterator it;

    // for (int i = 0; i < tamanhoLista; i++) {
    //     lista.push_front(i);
    // }

    lista.push_front(9);
    lista.push_front(0);
    lista.push_front(5);
    lista.push_front(3);
    lista.push_front(7);
    lista.push_front(2);
    lista.push_front(8);
    lista.push_front(1);
    lista.push_front(4);
    lista.push_front(6);

    cout << "Tamanho da lista: " << lista.size() << endl;

    lista.sort(); // ordena os elementos da lista
    lista.reverse(); // inverte os elementos da lista

    tamanhoLista = lista.size();

    cout << "Lista ordenada: ";
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