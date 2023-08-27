#include "Tile.h"

int Tile::getNum() const
{
    return m_num;
}

bool Tile::isEmpty() const
{
    return m_num == 0;
}

std::ostream& operator<<(std::ostream& out, const Tile& tile)
{
    out << ' ';
    if (tile.isEmpty()) out << "  ";
    else
    {
        int num = tile.getNum();

        if (num <= 9) out << ' ';
        out << num;
    }
    out << ' ';
    return out;
}
