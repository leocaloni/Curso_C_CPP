#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para acentos

void main() {
    setlocale(LC_ALL,""); // utilizar a lingua padrao do sistema
    printf("ol� \n");

    int a = 50;
    printf("o valor de a � = %d \n", a); //%d ser� substitu�do por a, usado em valores int
    scanf("%d", &a);                     //& significa o endere�o na mem�ria, nesse caso � o endere�o da vari�vel a
    printf("\no valor de a mudou para = %d \n", a);

    float b = 5.5;
    printf("o valor de b � = %f \n", b); //%f ser� substitu�do por b, usado em valores float
    scanf("%f", &b);
    printf("\no valor de b mudou para = %f \n", b);

    char c = 't';
    printf("o valor de c � = %c \n", c);  //%c ser� substitu�do por c, usado em valores char (letras)
    fflush(stdin); //limpando a entrada principal do buffer, como j� foi utilizado outras vezes, acaba ficando alguns "lixos" na hora da leitura do valor
    scanf("%c", &c);
    printf("\no valor de c mudou para = %c", c);

    system("pause"); //pausa o sistema ap�s executar
}
