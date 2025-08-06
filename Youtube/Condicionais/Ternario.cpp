#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    system("cls");

    int n1, n2, nota;
    string res, res2;
    int num = 11;

    cout << "Digite uma nota: ";
    cin >> n1;
    cout << "Digite outra nota: ";
    cin >> n2;

    nota = n1 + n2;

    (nota >= 60) ? res = "Aprovado" : res = "Reprovado";
    res2 = (nota >= 60) ? "Aprovado" : "Reprovado";
    (num >= 10) ? num++ : num--;

    cout << "Situacao: " << res << endl;
    cout << "Situacao 2: " << res2 << endl;
    cout << "Numero: " << num << endl;
 
    return 0;
}