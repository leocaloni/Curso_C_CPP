#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

#define TAM 10


int buscaSimples (int vetor[TAM], int valorProcurado) {
    bool valorEncontrado;
    int pos;

    for(int i = 0; i < TAM; i++) {
            if (vetor[i] == valorProcurado){
                valorEncontrado = true;
                pos = i;
            }
        }

        if(valorEncontrado) {
            return pos;
        }
        else {
            return -1;
        }
}


int main () {

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

    std::cout << "Valor encontrado na posicao: " <<buscaSimples(vetor, valorProcurado) <<std::endl;

    return 0;
}
