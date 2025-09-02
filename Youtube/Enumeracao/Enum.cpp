#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    enum armas{fuzil = 100, revolver = 8, rifle = 12, escopeta = 1};

    armas armaSelecionada;

    armaSelecionada = rifle;

    cout << armaSelecionada;

    return 0;
}

// um Enum representa numerais inteiros