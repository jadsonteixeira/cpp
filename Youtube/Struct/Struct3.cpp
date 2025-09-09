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

    void mudaVel(int mv) {
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

    Carro *carros = new Carro[5];

    Carro carro1, carro2, carro3, carro4, carro5;

    carros[0] = carro1;
    carros[1] = carro2;
    carros[2] = carro3;
    carros[3] = carro4;
    carros[4] = carro5;

    carros[0].criaCarro("Onix", "Branco", 200, 200);
    carros[1].criaCarro("Tracker", "Preto", 300, 300);
    carros[2].criaCarro("Renegade", "Preto", 300, 300);
    carros[3].criaCarro("Compass", "Branco", 300, 300);
    carros[4].criaCarro("Creta", "Cinza", 250, 250);

    cout << "Meus carros\n" << endl;

    for (int i = 0; i < 5; i++) {
        carros[i].exibeCarro();
    }

    return 0;
}

/*
    struct é um conjunto de variáveis e métodos

    associando struct a vetores
*/