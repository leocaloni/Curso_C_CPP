#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL,"");

    int a = 5, b = 10, c = 15;

    if (a>2){
        printf("%d � maior que dois", a);
    }
    if (c>= b) {
        printf("\n%d � maior ou igual a %d", c, b);
    }
}
