#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    int num = 0;

    while (num < 10) {
        cout << num << endl;
        num++;
        if (num == 8) {
            break;
        }
    }

    return 0;
}