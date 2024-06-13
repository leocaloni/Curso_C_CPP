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

void selectionSort(int vetor[TAM]) {

    int posMenor, aux;

    for(int i = 0; i < TAM; i++) {
        posMenor = i;
        for(int j = i + 1; j < TAM; j++) {
            if(vetor[j] < vetor[posMenor]) {
                posMenor = j;
            }
        }
        if(posMenor != i) {
            aux = vetor[i];
            vetor[i] = vetor[posMenor];
            vetor[posMenor] = aux;
        }
    }


}


int main() {

    int vetor [TAM] = {3, 56, 1, 345, 6, 98, 2, 1234, 5, 567};

    imprime_vetor(vetor, TAM);

    selectionSort(vetor);

    imprime_vetor(vetor, TAM);



    return 0;
}
