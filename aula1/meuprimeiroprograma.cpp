/* #include <iostream> é uma biblioteca de arquivos de
cabeçalho que nos permite trabalhar com objetos de entrada e saída,
como cout (usado na linha 5). Os arquivos de cabeçalho adicionam
funcionalidade aos programas C ++.*/
#include <iostream>

// using namespace std significa que podemos usar nomes para objetos e variáveis da biblioteca padrão.
using namespace std;

// int main() função padrão para executar código
int main() {
    setlocale(LC_ALL, "portuguese");

    /* cout é um objeto usado junto com
    o operador de inserção ( <<) para produzir / imprimir texto. Em nosso
    exemplo, a saída será "Olá mundo".*/
    cout << "Ola mundo! \n";
    cout << "Ola mundo2!" << endl;
    cout << "Ola mundo3! \n";

    // finaliza a execução da função
    return 0;
}
