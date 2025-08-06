#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int num = 10;

    if (num > 10) {
        cout << "Numero maior que 10" << endl;
    } else if (num < 10) {
        cout << "Numero menor que 10" << endl;
    } else {
        cout << "Numero igual a 10" << endl;
    }

    return 0;
}