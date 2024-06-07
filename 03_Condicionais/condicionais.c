#include <stdio.h>
#include <stdlib.h>

void main() {

    int a = 4, opcao = 1;
    float b = 2.5;
    char c = 'x';

    //condicional simples (if e else)

    if(a == 5){
        printf("A variavel a = 5");
    }
    else if (a == 4){
        printf("A variavel a = 4");
    }
    if (a%2 != 0) {
        printf("\nA variavel a eh impar");
    }
    else {
        printf("\nA variavel a eh par");
    }
    if(b == 2.5){
        printf("\nA variavel b = 2.5");
    }
    if (c == 'x') {
        printf("\nA variavel c = x");
    }

    if (opcao == 1){
        printf("\nOpcao = 1");
    }
    else if (opcao ==2){
        printf("\nOpcao = 2");
    }
    else {
        printf("/nOpcao = 3");
    }
}
