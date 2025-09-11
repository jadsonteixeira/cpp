#include <iostream>
#include <cstdlib>
#include <stdio.h> // biblioteca para uso do printf e scanf

using namespace std;

int main() {
    system("cls");

    int num = 1;
    int num2 = 2;
    int num3;
    char nome[20];

    printf("Digite um numero: ");
    scanf("%d", &num3);
    printf("Digite um nome: ");
    scanf("%s", &nome);

    printf("Numeros: %d %d %d \n", num, num2, num3);
    printf("Nome: %s", nome);

    return 0;
}