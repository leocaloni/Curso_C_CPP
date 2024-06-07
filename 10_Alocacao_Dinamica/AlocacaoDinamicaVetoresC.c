#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho);


int main () {


    int *vetor, tamanho;

    printf("Digite um tamanho para o vetor: ");
    scanf("%d", &tamanho);

    //Ponteiro recebe o endereço de memória que foi alocado para o vetor
    vetor = alocaVetor(tamanho);

    for(int i = 0; i<tamanho;i++) {
        vetor[i] = i * 10;
    }

    for (int i = 0; i<tamanho;i++){
        printf("%d\n", vetor[i]);
    }


    //Limpando a memória usada na execução do programa
    free(vetor);

    return 0;
}



int* alocaVetor(int tamanho) {

    //Criando um ponteiro auxiliar
    int *aux;

    //Alocação dinâmica de memória
    aux = (int*) malloc(tamanho * sizeof(int));

    //Retorna o ponteiro que aponta para a primeira posição do vetor alocado
    return aux;

}
