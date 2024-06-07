#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

#define TAM 10

int buscaBinaria(int vetor[TAM], int valorProcurado) {
    int esquerda = 0;
    int direita = TAM - 1;
    int meio;

    while (esquerda <= direita) {
         meio = (esquerda + direita)/2;

    if (valorProcurado == vetor[meio]) {
        return meio;
    }

    if (vetor[meio] < valorProcurado) {
        esquerda = meio + 1;
    }
    else {
        direita = meio - 1;
    }
    }
}

int main() {

    int vetor[TAM] = {1, 23, 44, 56, 63, 72, 84, 90, 98, 101};
    int valorProcurado;
    int pos;
    bool valorEncontrado;

    std::cout << "Vetor:\n";
    for(int i = 0; i < TAM; i++) {
        std::cout << vetor[i] << "|";
    }

    std::cout << "\n\nDigite o valor que deseja procurar: ";
    std::cin >> valorProcurado;

    std::cout << "Valor encontrado na posicao: " <<buscaBinaria(vetor, valorProcurado) <<std::endl;




    return 0;
}
