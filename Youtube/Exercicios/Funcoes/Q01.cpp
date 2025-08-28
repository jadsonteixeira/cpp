#include <iostream>
#include <cstdlib>

using namespace std;

int dobro(int num);

int main() {
    system("cls");

    int num;

    cout << "Digite um numero: ";
    cin >> num;

    cout << "Dobro: " << dobro(num) << endl;

    return 0;
}

int dobro(int num) {
    return num * 2;
}