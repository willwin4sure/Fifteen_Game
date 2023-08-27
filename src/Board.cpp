#include "Board.h"

constexpr int g_consoleLines { 25 };

Board::Board()
{
    for (int i { 0 }; i < SIZE; ++i)
    {
        for (int j { 0 }; j < SIZE; ++j) 
        {
            m_board[i][j] = Tile((SIZE * i + j + 1) % (SIZE * SIZE));
        }
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
