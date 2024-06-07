#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");

    //Crie um algoritimo que leia 3 notas e calcule a média entre elas. Se o valor for maior que 7 informe que o aluno foi aprovado, senão reprovado.


    float nota1, nota2, nota3, media;

    printf("Digite o valor da primeira nota: "); scanf("%f", &nota1);
    printf("\nDigite o valor da segunda nota: "); scanf("%f", &nota2);
    printf("\nDigite o valor da terceira nota: "); scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;
    printf("\nMédia = %f", media);

    if (media >= 7){
        printf("\nO aluno foi aprovado.");
    }
    else{
        printf("\nO aluno foi reprovado");
    }

}
