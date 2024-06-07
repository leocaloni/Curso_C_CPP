#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    //EX03: Crie um algorítimo que leia 3 numéros inteiros de uma só vez e coloque o resultado da multiplicação
    //entre os 3 em uma variável própria, depois exiba essa variável

    int a, b, c;
    printf("Digite três números inteiros: \n");
    printf("\n1º:");
    scanf("%d", &a);
    printf("\n2º:");
    scanf("%d", &b);
    printf("\n3º:");
    scanf("%d", &c);
    int result = a*b*c;
    printf("A multiplicação entre os três números é = %d", result);

}
