#include <iostream>
#include <cstdlib>

using namespace std;

void imprimirTela(string texto = "Padrao"); // Passando um valor padrão para aquele argumento. Caso não seja passado nenhum argumento na entrada da função, vai ser utilizado o valor padrão

int main() {
    system("cls");

    cout << "Funcao com argumento: " << endl;
    imprimirTela("Argumento \n");

    cout << "Funcao sem argumento de entrada: " << endl;
    imprimirTela();

    return 0;
}

void imprimirTela(string texto) {
    cout << "Texto: " << texto << endl;
}

// Omissão de argumentos é poder criar funções que recebem argumentos mas podemos omitir esse argumento, possibilitando o programador omitir esse argumento