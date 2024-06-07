#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 3

int main () {

    //para acentos
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 valores para um vetor de 3 posições e depois calcule a média dos valores
    float vetor[TAMANHO], soma, media;

    for (int i=0; i<TAMANHO; i++) {
        printf("Digite o %d º valor: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma/TAMANHO;

    for (int i=0; i<TAMANHO; i++) {
        printf("\nItem %d do vetor: %.2f\n", i, vetor[i]);
    }



    printf("\nMédia dos valores do vetor: %.2f", media);

}
