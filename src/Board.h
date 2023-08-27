#ifndef BOARD_082723_H
#define BOARD_082723_H

#include "Tile.h"
#include <ostream>
#include <array>

class Board
{
private:
    static constexpr int SIZE { 4 };
    std::array<std::array<Tile, SIZE>, SIZE> m_board;

public:
    Board();
    friend std::ostream& operator<<(std::ostream& out, const Board& board);
};

#endif
