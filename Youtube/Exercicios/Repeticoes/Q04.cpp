#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int num;

    cout << "Digite um numero: ";
    cin >> num;

    cout << "Tabuada de: " << num << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }

    return 0;
}