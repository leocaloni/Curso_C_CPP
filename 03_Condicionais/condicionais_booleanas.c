#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main() {

    bool a = true, b = false;


    if(a){
        printf("a eh true");
    }

    if(b) {
        printf("\nb eh true");
    }
    else{
        printf("\nb eh false");
    }
    if(!b) {
        printf("\nb eh false");
    }
}
