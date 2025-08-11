#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    srand(time(NULL));

    int matriz[5][5];

    cout << "Matriz" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 101;
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    int maior = matriz[0][0];
    int menor = matriz[0][0];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    cout << "Maior numero: " << maior << endl;
    cout << "Menor numero: " << menor << endl;

    return 0;
}