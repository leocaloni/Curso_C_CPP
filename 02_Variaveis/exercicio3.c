#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    //EX03: Crie um algor�timo que leia 3 num�ros inteiros de uma s� vez e coloque o resultado da multiplica��o
    //entre os 3 em uma vari�vel pr�pria, depois exiba essa vari�vel

    int a, b, c;
    printf("Digite tr�s n�meros inteiros: \n");
    printf("\n1�:");
    scanf("%d", &a);
    printf("\n2�:");
    scanf("%d", &b);
    printf("\n3�:");
    scanf("%d", &c);
    int result = a*b*c;
    printf("A multiplica��o entre os tr�s n�meros � = %d", result);

}
