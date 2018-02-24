#include <iostream>
#include "Playground.h"

int main() {
    size_t size;
    std::cout << "Enter field size: ";
    std::cin >> size;

    Playground playingField = Playground(size);
    char i = 'y';
    do {
        playingField.print();
        std::cout << std::endl;
        std::cout << "Click [y] for next move, [n] to exit; ";
        std::cin >> i;
        playingField.nextMove();
    }
    while (i != 'n');
    return 0;
}