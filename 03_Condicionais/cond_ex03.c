#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");

    //Crie um algoritimo que leia dois valores e depois crie um menu usando switch case de 4 opcoes: somar, subtrair, dividir, multiplicar,
    //apos isso realizar a conta que o usuario escolheu


    float n1, n2;
    float soma, subt, div, mult;
    int opcao;

    printf("Digite o primeiro valor: "); scanf("%f", &n1);
    printf("Digite o segundo valor: "); scanf("%f", &n2);

    printf("Selecione uma das opções de operações: \n1 - somar \n2 - subtrair \n3 - dividir \n4 - multiplicar\n");
    scanf("%d", &opcao);

    soma = n1 + n2;
    subt = n1 - n2;
    div = n1 / n2;
    mult = n1 * n2;

    switch(opcao) {
    case 1:
        printf("%.2f",soma);
        break;
    case 2:
        printf("%.2f",subt);
        break;
    case 3:
        printf("%.2f",div);
        break;
    case 4:
        printf("%.2f",mult);
        break;
    default:
        printf("Digite uma opção válida");

    }
}
