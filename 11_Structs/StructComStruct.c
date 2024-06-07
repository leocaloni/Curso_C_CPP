#include <stdio.h>


typedef struct Data {
    int dia;
    int mes;
    int ano;
}Data;

struct Aluno {
    int id;
    Data nascimento;
};

int main() {

    struct Aluno aluno1;

    aluno1.id = 15;
    aluno1.nascimento.ano = 2005;
    aluno1.nascimento.mes = 01;
    aluno1.nascimento.dia = 13;

    printf("Aluno %d, nascido em: %d/%d/%d", aluno1.id, aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);

    return 0;
}
