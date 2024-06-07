#include <stdlib.h>
#include <stdio.h>
#include <iostream>



void mostraSucessor(int numero);
int retornaAntecessor(int numero);

int main () {

    int a;

    std::cout << "Digite um valor inteiro para a: ";
    std::cin >> a;

    mostraSucessor(a);
    std::cout << "O antecessor de " << a << " eh igual a " << retornaAntecessor(a) << std::endl;
    return 0;
}


void mostraSucessor (int numero) {

    std::cout << "O sucessor de " << numero << " eh igual a " << numero + 1 << std::endl;

}

int retornaAntecessor (int numero) {

    return numero - 1;
}
