#include <iostream>
#include <cstdlib>

using namespace std;

void trocarValores(int *ptr1, int *ptr2);

int main() {
    system("cls");

    int num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "\nAntes da troca: " << endl;
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;

    trocarValores(&num1, &num2);
    
    cout << "\nDepois da troca: " << endl;
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;

    return 0;
}

void trocarValores(int *ptr1, int *ptr2) {
    int temp = *ptr1;   // temp recebe o valor apontado por ptr1
    *ptr1 = *ptr2;      // valor de ptr1 recebe o valor de ptr2
    *ptr2 = temp;       // valor de ptr2 recebe o valor que estava em temp
}

/*
    int *x, *y são ponteiros para inteiros, ou seja, eles vão guardar endereços de memória de variáveis inteiras

    Dentro da função trocarValores(), usamos:
        *x para acessar o valor que está no endereço de x
        *y para acessar o valor que está no endereço de y
    
    No main, usamos &num1 e &num2 para passar os endereços das variáveis num1 e num2 para a função

    Isso faz com que a função mexa diretamente nos valores originais, sem precisar retornar nada
*/