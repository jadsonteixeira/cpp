#include <iostream>
#include <cstdlib>

using namespace std;

void contagemRegressiva(int n, int i = 0);

int main() {
    system("cls");

    contagemRegressiva(5);

    return 0;
}

void contagemRegressiva(int n, int i) {
    cout << n << " ";

    if (n > i) {
        contagemRegressiva(--n, i);
    }
}