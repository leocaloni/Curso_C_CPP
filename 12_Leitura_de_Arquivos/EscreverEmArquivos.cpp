#include <stdio.h>
#include <string>
#include <fstream>  //biblioteca para mexer com arquivos

int main () {
    //Criando o objeto do arquivo
    std::ofstream outfile;

    //Abrindo o arquivo ou criando caso não exista
    outfile.open("Texto.txt", std::ios_base::app);

    //Escrevendo no arquivo
    outfile << "Testando";

    //Fechando o arquivo
    outfile.close();

    return 0;
}
