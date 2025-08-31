#include <iostream>
#include <cstdlib>

using namespace std;

int fatorial(int n);
int fibonacci(int n);

int main() {
    system("cls");

    int valor, resultado;

    valor = 5;
    resultado = fatorial(valor);
    cout << "Fatorial de " << valor << " = " << resultado;

    cout << endl;

    cout << "Fibonacci com " << valor << " valores: ";
    for (int i = 0; i < valor; i++) {
        cout << fibonacci(i + 1) << " ";
    }

    return 0;
}

int fatorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * fatorial(n - 1);
}

int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}