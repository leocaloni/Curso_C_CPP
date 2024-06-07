#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");  //para usar acentos

    //EX01: Criar um algorítimo que leia duas notas e mostrar a média entre elas:

    float a, b;
    printf("Digite o valor do primeiro número: ");
    scanf("%f", &a);

    printf("\nDigite o valor do segundo número: ");
    scanf("%f", &b);

    printf("A média entre os valores é = %f", (a+b)/2);
}
