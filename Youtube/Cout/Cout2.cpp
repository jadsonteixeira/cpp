#include <iostream>
#include <cstdlib>
#include <iomanip> // biblioteca para manipulação de entreda e saída

using namespace std;

int main() {
    system("cls");

    int num = 15;

    cout << "Num em dec: " << num << endl;
    cout << "Num em hex: " << setbase(16) << num << endl;
    cout << "Num em oct: " << setbase(8) << num << endl;

    return 0;
}