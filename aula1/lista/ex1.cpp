//ATIVIDADE 01
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    int numEntrada;
    cout << "Digite um número e exibirei seu sucessor: ";
    cin >> numEntrada;
    cout << "Seu sucessor é: " << ++numEntrada;


    return 0;
}