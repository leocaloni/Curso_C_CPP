#include <iostream>
#include <string>
#include <stdlib.h>

#define TAM 10

void push (int pilha[TAM],int *topo, int valor) {

    if (*topo == TAM - 1) {
        std::cout << "Pilha cheia";
    }

    else {
        *topo = *topo + 1;
        pilha[*topo] = valor;
    }

}


int main () {

    int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int topo = -1;
    int valor = 1;

    while(valor != 0) {
        int valor;
        std::cout << "Digite um valor a ser empilhado (0 para): ";
        std::cin >> valor;


        push(pilha, &topo,valor);

        std::cout << "Pilha:" << std::endl;
        for(int i = 0; i < TAM; i++) {
            std::cout << pilha[i] << std::endl;
    }
    }
    return 0;
}
