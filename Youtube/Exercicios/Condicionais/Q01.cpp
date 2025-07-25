#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    double salario, valorPrestacao;

    cout << "Salario R$";
    cin >> salario;
    cout << "Prestacao R$";
    cin >> valorPrestacao;

    if (valorPrestacao > (salario * 0.2)) {
        cout << "Emprestimo negado";
    } else {
        cout << "Emprestimo aprovado";
    }

    return 0;
}