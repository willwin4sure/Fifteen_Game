#ifndef TILE_082723_H
#define TILE_082723_H

#include <iostream>

class Tile
{
private:
    int m_num {};

public:
    Tile() = default;
    explicit Tile(int number);

    int getNum() const;
    bool isEmpty() const;
};

std::ostream& operator<<(std::ostream& out, const Tile& tile);

#endif
