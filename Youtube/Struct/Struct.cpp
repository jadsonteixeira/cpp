#include <iostream>
#include <cstdlib>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int potencia;
    int velMax;
};

int main() {
    system("cls");

    Carro carro1;
    Carro carro2;

    carro1.nome = "Onix";
    carro1.cor = "Branco";
    carro1.potencia = 200;
    carro1.velMax = 200;

    carro2.nome = "Tracker";
    carro2.cor = "Preto";
    carro2.potencia = 300;
    carro2.velMax = 300;

    cout << "Dados do carro1" << endl;
    cout << "Nome do carro....: " << carro1.nome << endl;
    cout << "Cor do carro.....: " << carro1.cor << endl;
    cout << "Potencia.........: " << carro1.potencia << "cv" << endl;
    cout << "Velocidade maxima: " << carro1.velMax << "Km/h" << endl;

    cout << endl;

    cout << "Dados do carro2" << endl;
    cout << "Nome do carro....: " << carro2.nome << endl;
    cout << "Cor do carro.....: " << carro2.cor << endl;
    cout << "Potencia.........: " << carro2.potencia << "cv" << endl;
    cout << "Velocidade maxima: " << carro2.velMax << "Km/h" << endl;

    return 0;
}

/*
    Struct é um conjunto de variáveis e métodos
*/