#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");

    //crie um algor�timo que imprima os n�meros de 10 a 0 em contagem regressiva

    for(int i = 10; i>=0; i--)
        printf("\n%d", i);

}
