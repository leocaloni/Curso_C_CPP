#include <stdlib.h>
#include <stdio.h>
#include <iostream>


void mostraSoma (int n1, int n2);
int retornaSoma (int n1, int n2);

int main () {

    int a, b, c, d;

    std::cout << "Digite o primeiro valor: ";
    std::cin >> a;
    std::cout << "Digite o segundo valor: ";
    std::cin >> b;

    mostraSoma(a, b);


    std::cout << "Digite outro valor: ";
    std::cin >> c;
    std::cout << "Digite mais um valor: ";
    std::cin >> d;

    std::cout << "A soma entre " << c << " mais " << d << " eh igual a " << retornaSoma(c, d) << std::endl;

    return 0;
}


void mostraSoma (int n1, int n2) {

    std::cout << "A soma entre " << n1 << " e " << n2 << " eh igual a " << n1+n2 << std::endl;

}

int retornaSoma (int n1, int n2) {

    return n1 + n2;
}
