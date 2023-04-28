/* #include <iostream> � uma biblioteca de arquivos de
cabe�alho que nos permite trabalhar com objetos de entrada e sa�da,
como cout (usado na linha 5). Os arquivos de cabe�alho adicionam
funcionalidade aos programas C ++.*/
#include <iostream>

// using namespace std significa que podemos usar nomes para objetos e vari�veis da biblioteca padr�o.
using namespace std;

// int main() fun��o padr�o para executar c�digo
int main() {
    setlocale(LC_ALL, "portuguese");

    /* cout � um objeto usado junto com
    o operador de inser��o ( <<) para produzir / imprimir texto. Em nosso
    exemplo, a sa�da ser� "Ol� mundo".*/
    cout << "Ola mundo! \n";
    cout << "Ola mundo2!" << endl;
    cout << "Ola mundo3! \n";

    // finaliza a execu��o da fun��o
    return 0;
}
