//ATIVIDADE 03
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    double n1;
    double n2;

    cout << "Digite um número: ";
    cin >> n1;

    cout << "Digite outro número: ";
    cin >> n2;

    cout << "Sua soma é: " << n1 + n2 << endl << "Seu produto é: " << n1 * n2 << endl << "O quociente entre eles é: " << n1 / n2;


    return 0;
}
