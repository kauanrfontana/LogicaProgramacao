//ATIVIDADE 04
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    double anosFumados;
    double cigarrosDia;
    double preco;

    cout << "Digite a quantidade de anos fumados: ";
    cin >> anosFumados;

    cout << "Digite a quantidade de cigarros fumados ao dia: ";
    cin >> cigarrosDia;

    cout << "Digite o preço atual da carteira de cigarro: ";
    cin >> preco;

    cout << "O seu gasto com cigarro total foi: \n R$ " << (((365 * anosFumados) * cigarrosDia) / 20) * preco; 

    
    return 0;
}
