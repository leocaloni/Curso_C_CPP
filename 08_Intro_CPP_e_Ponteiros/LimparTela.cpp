#include <stdlib.h>
#include <stdio.h>
#include <iostream>


void limpaTela();

int main () {

    int a;

    std::cout << "Digite um valor para a: ";
    std::cin >> a;

    //limpando a tela
    limpaTela();

    std::cout << "Valor de a = " << a << std::endl;

    return 0;
}


void limpaTela() {

    system("CLS");
}
