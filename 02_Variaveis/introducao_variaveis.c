#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para acentos

void main() {
    setlocale(LC_ALL,""); // utilizar a lingua padrao do sistema
    printf("olá \n");

    int a = 50;
    printf("o valor de a é = %d \n", a); //%d será substituído por a, usado em valores int
    scanf("%d", &a);                     //& significa o endereço na memória, nesse caso é o endereço da variável a
    printf("\no valor de a mudou para = %d \n", a);

    float b = 5.5;
    printf("o valor de b é = %f \n", b); //%f será substituído por b, usado em valores float
    scanf("%f", &b);
    printf("\no valor de b mudou para = %f \n", b);

    char c = 't';
    printf("o valor de c é = %c \n", c);  //%c será substituído por c, usado em valores char (letras)
    fflush(stdin); //limpando a entrada principal do buffer, como já foi utilizado outras vezes, acaba ficando alguns "lixos" na hora da leitura do valor
    scanf("%c", &c);
    printf("\no valor de c mudou para = %c", c);

    system("pause"); //pausa o sistema após executar
}
