#ifndef BOARD_082723_H
#define BOARD_082723_H

#include "Tile.h"
#include "UserCommand.h"
#include <ostream>
#include <array>
#include <utility>

class Board
{
public:
    using Location = std::pair<int, int>;

private:
    static constexpr int SIZE { 4 };
    std::array<std::array<Tile, SIZE>, SIZE> m_board;

    Location m_emptyLoc {};

public:
    Board();

    bool inBounds(Location loc) const;
    Tile& getTile(Location loc);
    bool moveTile(Command command);
    bool isWon() const;
    void randomizeBoard(int steps);

    friend std::ostream& operator<<(std::ostream& out, const Board& board);
};

#endif
