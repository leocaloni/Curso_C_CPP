#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <new> //Aloca memória

int main () {

    int tamanho;

    std::cout << "Digite o tamanho do vetor: ";
    std:: cin >> tamanho;


    //Criando um ponteiro que recebe o novo vetor vazio

    int *vetor = new int [tamanho];

    for(int i = 0; i<tamanho;i++) {
        vetor[i] = i * 10;
        std::cout << "Valor na posicao " << i << " = " << vetor[i] << std::endl;
    }

    return 0;
}


