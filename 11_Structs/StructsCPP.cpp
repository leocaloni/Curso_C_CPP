#include <stdio.h>
#include <string>
#include <iostream>
#include <new>

struct fruta {
    std::string cor;
    std::string nome;
};


int main() {

    //Ponteiro para o struct
    fruta *fruta1 = new fruta;

    fruta1->cor = "Amarela";
    fruta1->nome = "Banana";

    std::cout << "Fruta: " << fruta1->nome << ", Cor:" << fruta1->cor << std::endl;

    //Lista de frutas

    fruta *listaDeFrutas = new fruta[2];

    listaDeFrutas[0].cor = "Vermelho";
    listaDeFrutas[0].nome = "Morango";
    listaDeFrutas[1].cor = "Verde";
    listaDeFrutas[1].nome = "Limao";

    for(int i = 0; i<2;i++) {
        std::cout << "Fruta " << i+1 << ": " << listaDeFrutas[i].nome << ", Cor: " << listaDeFrutas[i].cor << std::endl;
    }

    return 0;
}
