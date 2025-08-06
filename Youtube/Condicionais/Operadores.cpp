#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int num = 8;
    int num2 = 1;

    if (!num) {
        cout << "Verdadeiro" << endl;
    } else {
        cout << "Falso" << endl;
    }

    if (num < 4 && num > 7) {
        cout << "Numero aceito" << endl;
    } else {
        cout << "Nao aceito" << endl;
    }

    return 0;
}