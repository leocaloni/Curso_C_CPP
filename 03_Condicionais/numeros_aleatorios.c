#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main () {

    //alimentando o rand (random) de forma diferente
    srand((unsigned)time(NULL));

    int aleatorio = rand()  % 3;  // aleatorio entre 0 e 2 (apenas resto de divisao por 3)

    int aleatorio2 = (rand() %5) + 1; //aleatorio entre 1 e 5 (apenas resto de divisao por 5)

    printf("%d", aleatorio);
    printf("\n%d", aleatorio2);


}
