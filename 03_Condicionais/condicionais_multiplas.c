#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 10, b = 10, c = 20;

    if (a > 5 && a < 15){
        printf("A eh maior que 5 e menor que 15");
    }

    if (a == 10 && b == 10){
        printf("\nA e B sao iguais a 10");
    }
    if (a == 10 || c == 10) {
        printf("\nOu A ou C eh igual a 10");
    }
    if ((a > 5 && a < 15)|| a == 20){
        printf("\nA eh maior que cinco e menor que 15 ou eh igual a 20");
    }
}
