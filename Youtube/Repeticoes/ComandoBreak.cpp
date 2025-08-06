#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int cont = 0;

    while (cont < 100) {
        cout << cont << endl;
        cont++;

        if (cont == 50) {
            break;
        }
    }

    return 0;
}