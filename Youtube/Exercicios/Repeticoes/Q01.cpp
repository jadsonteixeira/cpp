#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    double media;
    int somaNum = 0;

    for (int i = 0; i < 3; i++) {
        int num;
        cout << "Digite um numero: ";
        cin >> num;
        somaNum += num;
    }

    media = somaNum / 3.0;

    cout << "Media: " << media << endl;

    return 0;
}