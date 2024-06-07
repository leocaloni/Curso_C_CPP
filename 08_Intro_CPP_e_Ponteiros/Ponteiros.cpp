#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main () {

    //variáveis armazenam valores
    int a = 10;

    //ponteiros armazenam posições na memória
    int *ponteiro;

    ponteiro = &a;

    cout << "Valor da variavel a = " << a << endl;

    //* pode ser lido como "CONTEÚDO APONTADO POR"

    *ponteiro = 40;
    cout << "Valor da variavel a = " << a << endl;

    return 0;
}
