#include <fstream>
#include <string>
#include <iostream>


int main () {

    std::ifstream input ("Texto.txt");
    std::string texto;

    for(std::string line; getline(input, line);) {
        texto += line;
    }

    std::cout << texto;


    return 0;
}
