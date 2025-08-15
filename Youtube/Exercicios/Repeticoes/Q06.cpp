#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int qntNotas = 0;
    double nota, somaNota = 0, media = 0;

    cout << "NOTAS :" << endl;

    for (int i = 1; i <= 20; i++) {
        cout << "Digite a nota: " << endl;
        cin >> nota;
        somaNota += nota;
        qntNotas++;
    }

    media = (somaNota / qntNotas);

    cout << "Soma das notas: " << somaNota << endl;
    cout << "Quantidade de notas: " << qntNotas << endl;
    cout << "IRA: " << media << endl;

    return 0;
}