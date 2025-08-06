#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int num;
    int somaNum = 0;
    int media = 0;
    int qntNum = 0;

    for (int i = 1; i != 0; ) {
        cout << "Digite um numero: ";
        cin >> num;
        i = num;
        somaNum += num;
        if (num != 0) {
            qntNum++;
        }
    }

    media = somaNum / qntNum;

    cout << "Quantidade de numeros: " << qntNum << endl;
    cout << "Media: " << media << endl;
 
    return 0;
}