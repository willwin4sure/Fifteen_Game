#include "Board.h"

constexpr int g_consoleLines { 25 };

Board::Board()
    : m_emptyLoc { SIZE - 1, SIZE - 1 }
{
    for (int i { 0 }; i < SIZE; ++i)
    {
        for (int j { 0 }; j < SIZE; ++j) 
        {
            m_board[i][j] = Tile((SIZE * i + j + 1) % (SIZE * SIZE));
        }
    }
}

bool Board::inBounds(Location loc) const
{
    return (0 <= loc.first && loc.first < SIZE)
        && (0 <= loc.second && loc.second < SIZE);
}

Tile& Board::getTile(Location loc)
{
    return m_board[loc.first][loc.second];
}

void Board::moveTile(Command command)
{
    std::pair<int, int> delta = getDisplacement(-command);
    Location newEmptyLoc { 
        m_emptyLoc.first + delta.first, 
        m_emptyLoc.second + delta.second
    };
    
    if (inBounds(newEmptyLoc)) {
        std::swap(getTile(m_emptyLoc), getTile(newEmptyLoc));
        m_emptyLoc = newEmptyLoc;
    }
}

std::ostream& operator<<(std::ostream& out, const Board& board)
{
    for (int cnt { 0 }; cnt < g_consoleLines; ++cnt)
    {
        out << '\n';
    }

    for (const std::array<Tile, Board::SIZE>& row : board.m_board)
    {
        for (const Tile& tile : row)
        {
            out << tile;
        }
        out << '\n';
    }
    
    return out;
}
