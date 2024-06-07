#include <stdio.h>
#include <stdlib.h>

int main() {

    //Arquivo a ser lido
    FILE *file;

    file = fopen("Texto.txt", "r");

    int c;
    if (file) {
        while((c = getc(file)) != EOF){  //EOF = End Of File
            printf("%c", c);
        }
    }

    fclose(file);

    return 0;
}
