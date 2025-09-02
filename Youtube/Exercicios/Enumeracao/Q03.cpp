#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    system("cls");

    enum Moeda{real, dolar, euro};

    double valorReais;
    cout << "Digite o valor em Reais: R$";
    cin >> valorReais;

    int opcao;
    cout << "Qual moeda deseja converter? " << endl;
    cout << "1 - Dolar" << endl;
    cout << "2 - Euro" << endl;
    cout << "Opcao: ";""
    cin >> opcao;

    Moeda moedaConverter;

    if (opcao == 1) {
        moedaConverter = dolar;
    } else if (opcao == 2) {
        moedaConverter = euro;
    } else {
        cout << "Opcao invalida" << endl;
        return 1;
    }

    switch (moedaConverter) {
        case dolar: 
            cout << "Valor em Dolar: US$" << valorReais * 5 << endl;
            break;
        case euro: 
            cout << "Valor em Euro: " << valorReais * 6 << " Euros" << endl;
            break;
    }

    return 0;
}