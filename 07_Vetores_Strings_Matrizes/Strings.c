#include <stdio.h>
#include <stdlib.h>


int main () {

    char palavra[255];

    printf("Digite uma palavra: ");

    //limpar o buffer (responsavel pela leitura de mais de uma letra de uma vez só)
    setbuf(stdin, 0);

    //ler a string
    fgets(palavra, 255, stdin);

    //limpar memória não utilizada
    palavra[strlen(palavra)-1] = '\0';  // \0 = final da string | strlen = tamanho da string | palavra - 1 pois inicia a contagem em 0

    printf("\n%s\n", palavra);

}
