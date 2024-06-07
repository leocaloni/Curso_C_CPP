#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main () {

    int matriz1 [2][2];
    int matriz2 [2][2];

    matriz1[0][0] = 1;
    matriz1[0][1] = 2;
    matriz1[1][0] = 3;
    matriz1[1][1] = 4;

    cout << "Matriz 1: \n";
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriz1[i][j] << "\t";
        }
        cout << "\n";
    }

     for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Digite um valor para a posicao " << i << "," << j << endl;
            cin >> matriz2 [i][j];
        }
    }
    cout << "\nMatriz 2: \n";
     for (int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << matriz2[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
