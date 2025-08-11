#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    srand(time(NULL));

    int matriz[3][4];

    cout << "Matriz" << endl;
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++) {
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++) {
            matriz[i][j] = rand() % 10;
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}