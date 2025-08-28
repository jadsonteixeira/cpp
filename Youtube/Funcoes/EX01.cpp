#include <iostream>
#include <cstdlib>

using namespace std;

// precisamos prototipar a nossa função ao programa main em C++
// apresentamos a nossa função
void texto();

int main() {
    system("cls");

    texto();

    cout << "Teste com um for" << endl;

    for (int i = 0; i < 10; i++) {
        texto();
    }

    return 0;
}

void texto() {
    cout << "Hello World" << endl;
}