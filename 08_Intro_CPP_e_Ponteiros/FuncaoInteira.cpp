#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <stdbool.h>

using namespace std;

int retornaDez ();
float retornaQuebrado ();
char retornaLetra ();
bool retornaBooleana ();


int main () {

    int a;

    a = retornaDez();

    cout << "Valor de a = " << a << endl;

    float b = retornaQuebrado();

    cout << "Valor de b = " << b << endl;

    char c = retornaLetra();

    cout << "Valor de c = " << c << endl;

    bool d = retornaBooleana();

    cout << "Valor de d = " << d << endl;

    if (retornaBooleana) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}


int retornaDez () {

    cout << "Teste" << endl;

    return 10;
}

float retornaQuebrado () {

    return 5.5;
}

char retornaLetra () {

    return 'x';
}

bool retornaBooleana () {

    return true;
}

