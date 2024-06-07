#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10


void imprime_vetor(int vetor[TAM], int tamanho){

    std::cout << "\n";

    for(int i = 0; i < TAM; i++){
        std::cout << vetor[i] << " - ";
    }
}

void insertionSort(int vetor[TAM]) {

    int atual, j;
    for(int i = 1; i < TAM; i++) {
        atual = vetor[i];
        j = i - 1;
        while((j >=0) && (atual < vetor[j])) {
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = atual;
    }
}

int main() {

    int vetor [TAM] = {3, 56, 1, 345, 6, 98, 2, 1234, 5, 567};

    imprime_vetor(vetor, TAM);

    insertionSort(vetor);

    imprime_vetor(vetor, TAM);



    return 0;
}
