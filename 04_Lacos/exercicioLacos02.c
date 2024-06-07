#include <stdio.h>
#include <stdlib.h>

void main(){

    //crie um algotímo que imprima os números pares entre 10 a 20;

    for(int i=10; i<=20; i++){
        if(i%2==0){
            printf("\n%d", i);
        }
    }
}
