#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int n1, n2, n3, media;

    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;

    media = ((n1 * 2) + (n2 * 3) + (n3 * 5));

    cout << "Media: " << media << endl;

    return 0;
}