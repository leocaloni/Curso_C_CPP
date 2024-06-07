#include <stdlib.h>
#include <stdio.h>
#include <iostream>


void imprimeVetor(int *vetor, int tamanho);
void modificaVetor(int *vetor, int tamanho);

int main () {

    int v[3] = {1, 2, 3};

    imprimeVetor(v, 3);

    modificaVetor(v, 3);

    imprimeVetor(v, 3);



    return 0;
}


void imprimeVetor (int *vetor, int tamanho) {

    for(int i = 0; i<tamanho;i++) {
        std::cout << std::endl << "Item " << i+1 << " do vetor = " << vetor[i] << std::endl;
    }
}

void modificaVetor(int *vetor, int tamanho) {

    for(int i = 0; i<tamanho;i++) {
        vetor[i] += 1;
    }
}
