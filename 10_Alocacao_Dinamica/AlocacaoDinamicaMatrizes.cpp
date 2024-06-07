#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new>


int main () {

    int linhas, colunas;
    int **matriz;

    std::cout << "Digite o numero de linhas: ";
    std::cin >> linhas;
    std::cout << std::endl << "Digite o numero de colunas: ";
    std::cin >> colunas;

    matriz = (int **) new int[linhas];


    for(int i = 0; i < linhas; i++) {
        matriz[i] = (int *) new int[colunas];
    }

    std::cout << std::endl << "Matriz: " << std::endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = i;
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    free(matriz);

    return 0;
}
