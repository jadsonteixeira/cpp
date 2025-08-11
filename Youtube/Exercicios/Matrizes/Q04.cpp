#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    srand(time(NULL));

    int matriz[3][3];
    int matrizTransposta[3][3]; 

    cout << "Matriz original" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i+1; //rand() % (50 - 1 + 1) + 1; // 1 a 50
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matriz transposta" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizTransposta[i][j] = matriz[j][i];
            cout << matrizTransposta[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}