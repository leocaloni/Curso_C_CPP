#include <stdio.h>
#include <stdlib.h>

int main () {

    int linhas, colunas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("\nDigite o numero de colunas: ");
    scanf("%d", &colunas);

    //Criando um ponteiro de ponteiro
    int **matriz;

    //Alocando espaço para o vetor de ponteiros (linhas da matriz)
    matriz = (int **) malloc(linhas * sizeof(int *));

    //Alocando memória para as colunas de cada linha

    for(int i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    printf("\nMatriz:\n\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = i;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    free(matriz);


    return 0;
}
