#include <iostream>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");

    double num, pdprimo = 0;
    double result;
    
    cout << "Escreva um número: ";
    cin >> num;
    
    for(int i = 1; i <= num; i++){
        result = num/i;
        
        if(fmod(result, 1.0) == 0){
            pdprimo ++;
            
        }
    
        
    }
    
    if(pdprimo == 2){
            cout << "É PRIMO";
        }else{
            cout << " NÃO É PRIMO";
        }

    


    return 0;
}
