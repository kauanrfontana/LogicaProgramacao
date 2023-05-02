//ATIVIDADE 07
#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    double A;
    double B;
    
    cout << "Digite dois números, entre eles de enter: ";
    cin >> A;
    cin >> B;

    if ( A > B ){
        cout <<  A;
    } else if ( B > A ){
        cout << B;
    } else {
        cout << "A=B";
    }
    

    return 0;
}
