#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");

    //crie um algoritimo que leia 3 valores e informe se eles sao iguais entre si para formarem os lados de um triangulo equilateri

    float a, b, c;

    printf("Digite o primeiro lado: "); scanf("%f", &a);
    printf("\nDigite o segundo lado: "); scanf("%f", &b);
    printf("\nDigite o terceiro lado: "); scanf("%f", &c);

    if (a == b && b == c){
        printf("O tri�ngulo � equil�tero");
    }
    else {
        printf("O tri�ngulo n�o � equil�tero");
    }
}
