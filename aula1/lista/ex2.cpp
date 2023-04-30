//ATIVIDADE 02
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    const double pi = 3.14;
    double raio;
    double altura;

    cout << "Digite o raio: ";
    cin >> raio;

    cout << "Digite a altura: ";
    cin >> altura;

    double areaBase = pi * pow(raio, 2);
    double volume = pi * altura * pow(raio, 2);
    

    cout << "A área da vase dele é: " << areaBase << "O volume do cilindro é: " << volume << endl ;


    return 0;
}
