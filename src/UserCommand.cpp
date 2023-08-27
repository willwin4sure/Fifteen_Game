#include "UserCommand.h"

Command operator-(Command command)
{
    switch(command)
    {
    case Command::UP:    return Command::DOWN;
    case Command::DOWN:  return Command::UP;
    case Command::LEFT:  return Command::RIGHT;
    case Command::RIGHT: return Command::LEFT;
    default:             return command;
    }
}

std::pair<int, int> getDisplacement(Command command)
{
    switch(command)
    {
    case Command::UP:    return { -1, 0 };
    case Command::DOWN:  return { 1, 0 };
    case Command::LEFT:  return { 0, -1 };
    case Command::RIGHT: return { 0, 1 };
    default:             return { 0, 0 };
    }
}

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
