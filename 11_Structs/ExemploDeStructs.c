#include <stdlib.h>
#include <stdio.h>
#include <string.h>


struct palavra {
    int ordem;
    char texto[255];
};


int main () {

    //Criar uma palavra
    struct palavra primeiraPalavra;

    //Modificando os campos
    primeiraPalavra.ordem = 10;
    strcpy(primeiraPalavra.texto, "palavra");

    //Printando valores do struct
    printf("Ordem: %d", primeiraPalavra.ordem);
    printf("\nPalavra: %s\n", primeiraPalavra.texto);

    //Vetor de Structs

    struct palavra listaDePalavra[3];

    listaDePalavra[0].ordem = 0;
    listaDePalavra[1].ordem = 1;
    listaDePalavra[2].ordem = 2;

    strcpy(listaDePalavra[0].texto, "primeira");
    strcpy(listaDePalavra[1].texto, "segunda");
    strcpy(listaDePalavra[2].texto, "terceira");

    for(int i = 0; i < 3; i++ ) {
        printf("\nOrdem da %d palavra: %d \n%d Palavra: %s\n", i, listaDePalavra[i].ordem, i+1, listaDePalavra[i].texto);
    }


    return 0;
}
