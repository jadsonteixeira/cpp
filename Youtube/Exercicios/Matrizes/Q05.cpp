#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int matrizIdentidade[5][5];

    cout << "Matriz identidade" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                matrizIdentidade[i][j] = 1;
            } else {
                matrizIdentidade[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrizIdentidade[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}