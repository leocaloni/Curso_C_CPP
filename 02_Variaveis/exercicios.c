#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");  //para usar acentos

    //EX01: Criar um algor�timo que leia duas notas e mostrar a m�dia entre elas:

    float a, b;
    printf("Digite o valor do primeiro n�mero: ");
    scanf("%f", &a);

    printf("\nDigite o valor do segundo n�mero: ");
    scanf("%f", &b);

    printf("A m�dia entre os valores � = %f", (a+b)/2);
}
