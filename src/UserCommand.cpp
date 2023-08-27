#include "UserCommand.h"

std::ostream& operator<<(std::ostream& out, Command command)
{
    switch (command)
    {
    case Command::QUIT:  return out << "Quit";
    case Command::UP:    return out << "Up";
    case Command::DOWN:  return out << "Down";
    case Command::LEFT:  return out << "Left";
    case Command::RIGHT: return out << "Right";
    default:             return out << "Invalid Command";
    }
}
