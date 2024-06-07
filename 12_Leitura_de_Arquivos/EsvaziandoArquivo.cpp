#include <fstream>
#include <string>
#include <iostream>

int main () {

    std::ofstream file;

    file.open("Texto.txt");

    file << "";

    file.close();

    return 0;
}
