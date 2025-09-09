#include <iostream>
#include <cstdlib>

using namespace std;

struct Carro {
    string nome;
    string cor;
    int potencia;
    int velMax;
    int vel;

    void criaCarro(string stNome, string stCor, int stPotencia, int stVelMax) {
        nome = stNome;
        cor = stCor;
        potencia = stPotencia;
        velMax = stVelMax;
    }

    void exibeCarro() {
        cout << "Dados do carro" << endl;
        cout << "Nome do carro....: " << nome << endl;
        cout << "Cor do carro.....: " << cor << endl;
        cout << "Potencia.........: " << potencia << "cv" << endl;
        cout << "Velocidade atual.: " << vel << "Km/h" << endl;
        cout << "Velocidade maxima: " << velMax << "Km/h" << endl;
        cout << endl;
    }

    void mudaVelMax(int mv) {
        vel = mv; // mv = muda velocidade

        if (vel > velMax) {
            vel = velMax;
        }
        if (vel < 0) {
            vel = 0;
        }
    }
};

int main() {
    system("cls");

    Carro carro1, carro2;

    carro1.criaCarro("Onix", "Branco", 200, 200);
    carro1.exibeCarro();
    carro1.mudaVelMax(150);
    carro1.exibeCarro();

    return 0;
}

/*
    Struct é um conjunto de variáveis e métodos
*/