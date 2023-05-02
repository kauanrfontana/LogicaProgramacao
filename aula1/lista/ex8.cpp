//ATIVIDADE 08
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    double nota1;
    double nota2;
    double nota3;
    
    cout << "Digite as notas, entre elas de enter: ";
    cin >> nota1;
    cin >> nota2;
    cin >> nota3;

    double MEDIA = (nota1 + nota2 + nota3)/ 3;

    if ( MEDIA >= 7 ){
        cout <<  MEDIA << ". Aprovado";
    } else if ( MEDIA >= 5 && MEDIA < 7 ){
        cout << MEDIA << ". Recuperação";
    } else if ( MEDIA < 5 ){
        cout << MEDIA << ". Reprovado";
    }
    

    return 0;
}
