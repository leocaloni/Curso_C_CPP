#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 6, b = 4;
    //operacoes comuns
    printf("\na soma de %d mais %d = %d", a, b, a+b);
    printf("\na subtracao de %d menos %d = %d", a, b, a-b);
    printf("\na divisao de %d e %d = %d", a, b, a/b);
    printf("\na multiplicacao de %d com %d = %d", a, b, a*b);

    //resto da divisao
    printf("\no resto da divisao entre %d com %d = %d", a, b, a%b);

    //valor absoluto (sempre positivo)
    printf("o valor absoluto de -3 = %d", abs(-3));

}
