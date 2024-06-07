#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void main() {

    int vetor[TAM];

    //passando valores para o vetor

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("\nPosicao 0 = %d \nPosicao 1 = %d \nPosicao 2 = %d\n",vetor[0], vetor[1], vetor[2]);

    for (int cont = 0; cont < TAM; cont++) {
        printf("\n Posicao %d: %d\n", cont, vetor[cont]);
    }

    for (int cont = 0; cont < TAM; cont++) {
        vetor[cont] += 1;
        printf("\n Posicao %d: %d\n", cont, vetor[cont]);
    }

    for (int cont = 0; cont < TAM; cont++) {
        printf("Digite o %d  valor: ", cont);
        scanf("%d", &vetor[cont]);
    }

    for (int cont = 0; cont < TAM; cont++) {
        printf("\n Posicao %d: %d\n", cont, vetor[cont]);
    }



    system("pause");

}
