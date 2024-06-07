#include <stdio.h>
#include <stdlib.h>

void main() {

    //crie um algorítimo para ver se o valor lido é primo ou não.

    int num, div=0;

    printf("Insira um valor para saber se ele eh primo: ");
    scanf("%d", &num);

    for(int i=0;i<=num;i++){
        if(num%i==0){
            div++;
        }
    }
    printf("%d", div);
    if(div==2){
        printf("O numero %d eh primo", num);
    }
    else{
        printf("O numero %d nao eh primo", num);
    }
}
