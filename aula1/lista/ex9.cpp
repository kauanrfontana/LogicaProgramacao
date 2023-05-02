//ATIVIDADE 09
/* Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava dirigindo nela e calcule a multa que uma pessoa vai receber, sabendo que são pagos:
a) 50 reais se o motorista ultrapassar em até 10 km/h a velocidade permitida
b) 100 reais, se o motorista ultrapassar de 10 a 30 km/h a velocidade permitida.
c) 200 reais, se estiver acima de 31 km/h da velocidade permitida.
*/
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    int velMax;
    int velMoto;

    cout << "Digite a velocidade máxima permitida na via: " ;  
    cin >> velMax;

    cout << "Digite a velocidade do seu carro: " ;  
    cin >> velMoto;

    if ( velMoto > velMax && velMoto < velMax + 10 ){
        cout << "50 reais";
    } else if ( velMoto >= velMax + 10 && velMoto <= velMax + 30 ){
        cout << "100 reais";
    } else if ( velMoto > velMax + 30 ){
        cout << "200 reais";
    }


    return 0;
}
