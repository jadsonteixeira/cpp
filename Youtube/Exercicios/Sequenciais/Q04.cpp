#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    double salario, vendas, comissao, novoSalario;

    cout << "Salario: ";
    cin >> salario;
    cout << "Vendas: ";
    cin >> vendas;

    comissao = vendas * 0.04;
    novoSalario = salario + comissao;

    cout << "Comissao: " << comissao << endl;
    cout << "Novo salario: " << novoSalario << endl;

    return 0;
}