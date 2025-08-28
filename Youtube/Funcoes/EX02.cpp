#include <iostream>
#include <cstdlib>

using namespace std;

void soma(int n1, int n2);

int main() {
    system("cls");

    soma(10, 10);

    return 0;
} 

// funcao com argumentos/paramentros
void soma(int n1, int n2) {
    cout << "Soma dos valores: " << n1 + n2 << endl;
}