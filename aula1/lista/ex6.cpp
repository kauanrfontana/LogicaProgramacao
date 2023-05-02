//ATIVIDADE 06
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    int n1;
    int n2;
    int n3;
    cout << "Digite 3 números, dando enter entre eles: \n";
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if (n1 > n2 + n3){
        cout << "O primeiro número é maior que a soma dos outros dois.";
    } else{
        cout << "A soma dos dois últimos números é maior que o primeiro";
    }


    return 0;
}
