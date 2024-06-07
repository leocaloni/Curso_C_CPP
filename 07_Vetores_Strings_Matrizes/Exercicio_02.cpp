#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main () {

    //Preencha uma matriz 2x2 lendo valores do usuário e depois troque os valores entre a primeira e a segunda linha

    int matriz [2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Digite o valor para a posicao " << i << "," << j << ":" << endl;
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz sem inverter: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j< 2; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }

    int aux1 = matriz[0][0];
    int aux2 = matriz[0][1];

    matriz[0][0] = matriz [1][0];
    matriz[0][1] = matriz [1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;

    cout << "Matriz invertendo: " << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++){
            cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
