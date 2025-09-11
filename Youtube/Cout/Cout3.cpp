#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main() {
    system("cls");

    float pi = M_PI;

    cout.precision(3); // 3 porque é como se contasse com a vírgula
    cout << "Valor de PI: " << pi << endl;

    cout.precision(-1); // volta a precisão normal
    cout << "Valor de PI: " << pi << endl;

    cout << "Notacao cientifica: " << std::scientific << pi;

    return 0;
}