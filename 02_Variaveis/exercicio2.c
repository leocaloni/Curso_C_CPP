#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");
    //EX02: Criar um algorítimo que leia duas notas e mostrar o valor absoluto da diferença entre elas:
    int a, b;
    printf("\nDigite o valor da primeira nota: ");
    scanf("%d", &a);

    printf("\nDigite o valor da segunda nota: ");
    scanf("%d", &b);

    printf("O valor absoluto da diferença entre as notas é = %d", abs(a-b));

}
