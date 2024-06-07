#include <stdio.h>
#include <stdlib.h>

void main() {

    int opcao;

    printf("Escolha uma opcao: ");
    printf("\n1 - Opcao 1");
    printf("\n2 - Opcao 2");
    printf("\n3 - Opcao 3\n");

    scanf("%d", &opcao);

    switch(opcao){

    case 1:
        printf("\nOpcao 1 foi escolhida");
        break;
    case 2:
        printf("\nOpcao 2 foi escolhida");
        break;
    case 3:
        printf("\nOpcao 3 foi escolhida");
        break;
    default:
        printf("\nOpcao invalida");
        break;
    }

}
