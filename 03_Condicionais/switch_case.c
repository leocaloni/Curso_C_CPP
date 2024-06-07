#include <stdio.h>
#include <stdlib.h>

void main() {

    int a = 5;
    char b = 'x';

    switch(a){
    case 1:
        printf("\n A = 1");
        break;

    case 3:
        printf("\n A = 3");
        break;

    case 5:
        printf("\n A = 5");
                                    // sem o break o codigo roda tudo para abaixo do caso ocorrido
    case 6:
        printf("\nA = 6");

    }
    switch(b){

    case 'a':
        printf("B = a");
        break;

    default:
        printf("\nB = x");
        break;
    }

}
