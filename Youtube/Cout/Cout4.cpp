#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    system("cls");

    int num = 10;

    cout << "Valor de num com espaco: " << setw(10) << num << endl;
    cout << "Valor de num com espaco + preenchimento: " << setw(10) << setfill('x') << num;

    return 0;
}