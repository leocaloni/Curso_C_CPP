#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main () {

    //vari�veis armazenam valores
    int a = 10;

    //ponteiros armazenam posi��es na mem�ria
    int *ponteiro;

    ponteiro = &a;

    cout << "Valor da variavel a = " << a << endl;

    //* pode ser lido como "CONTE�DO APONTADO POR"

    *ponteiro = 40;
    cout << "Valor da variavel a = " << a << endl;

    return 0;
}
