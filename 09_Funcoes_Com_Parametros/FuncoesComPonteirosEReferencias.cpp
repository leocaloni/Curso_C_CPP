#include <stdlib.h>
#include <stdio.h>
#include <iostream>


void aumentaDez(int *numero);

int main () {

    int a = 5;

    std::cout << "Valor de a antes da funcao = " << a << std::endl;

    aumentaDez(&a);

    std::cout << "Valor de a depois da funcao = " << a << std::endl;

    return 0;
}


void aumentaDez (int *numero) {
    *numero += 10;
}
