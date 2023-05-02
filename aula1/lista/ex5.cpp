//ATIVIDADE 05
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    double indice = 0.45;
    double lucro = 0.12;
    double custoFabrica;

    cout << "Digite o custo de f�brica do ve�culo: ";
    cin >> custoFabrica;

    cout << "O pre�o final do carro � " << (custoFabrica * indice) + (custoFabrica * lucro) + custoFabrica << endl;
    cout << "O imposto sobre o carro �: " << custoFabrica * indice << endl;
    cout << "O valor dedicado ao lucro do vendedor �: " << custoFabrica * lucro;



    return 0;
}
