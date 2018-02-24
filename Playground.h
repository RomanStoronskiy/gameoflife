//
// Created by liquidcore7 on 24.02.18.
//

#ifndef GAMEOFLIFE_PLAYGROUND_H
#define GAMEOFLIFE_PLAYGROUND_H

#include <cstdlib>
#include <vector>
#include <cstdint>

class Playground {
    size_t _size;
    std::vector<std::vector<char>> _field;

    uint8_t countNeighbours() const;

public:
    explicit Playground(size_t _size);
    void nextMove();

    void print() const;
};


#endif //GAMEOFLIFE_PLAYGROUND_H
