#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    srand(time(NULL));

    int matriz[4][4];
    int somaNum = 0;

    cout << "Matriz" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 20 + 1;
            cout << matriz[i][j] << " ";
            somaNum += matriz[i][j];
        }
        cout << endl;
    }
    cout << endl;

    cout << "Soma dos numeros: " << somaNum;

    return 0;
}