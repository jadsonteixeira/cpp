#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    system("cls");

    string time1, time2;
    int golsTime1, golsTime2;

    cout << "Nome do time 1: ";
    cin >> time1;
    cout << "Nome do time 2: ";
    cin >> time2;

    cout << "Gols do " << time1 << ": ";
    cin >> golsTime1;
    cout << "Gols do " << time2 << ": ";
    cin >> golsTime2;

    if (golsTime1 > golsTime2) {
        cout << time1 << " venceu";
    } else if (golsTime1 < golsTime2) {
        cout << time2 << " venceu";
    } else {
        cout << "Empate";
    }

    return 0;
}