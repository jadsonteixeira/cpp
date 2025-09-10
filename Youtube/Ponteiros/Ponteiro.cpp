#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    string veiculo = "Carro";
    string *pv; // armazena o endereço de outra variável

    pv = &veiculo; // ponteiro pv recebe o endereço da variável veiculo

    cout << "Endereco de pv (veiculo)....: " << pv << endl;
    cout << "Endereco da variavel veiculo: " << &veiculo << endl;

    // manipulando o valor da variável veiculo através do ponteiro
    *pv = "Moto"; // no endereço apontado por *pv adicione o valor "Moto"
    // estou dizendo que eu quero armazenar o valor "Moto" na variável do endereço que está armazenado no *pv
    cout << "Novo valor de veiculo............: " << veiculo << endl;
    cout << "Valor da variavel do endereco *pv: " << *pv << endl;

    return 0;
}

/*
    Ponteiro: armazena o endereço de uma outra variável

    O ponteiro deve ser do mesmo tipo da variável que ele vai apontar
    
    End     Tipo    Valor   Nome
    1000    int     4       num

    int *ptr;
    ptr = &num -> o ponteiro está recebendo a referência (endereço) da variável num

    cout << ptr; -> exibe o endereço que está armazenado no ptr
    cout << *ptr; -> exibe o valor da variável que está armazenada naquele endereço

    Utilizando um ponteiro, é possível acessar uma variável em qualquer lugar do código, independente do escopo ou lugar onde está variável esteja

    Por exemplo: acessar o valor de uma variável local de uma função, mas fora da função
*/