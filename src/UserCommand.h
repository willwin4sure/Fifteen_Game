#ifndef COMMAND_082723_H
#define COMMAND_082723_H

#include <ostream>
#include <utility>

enum class Command
{
    INVALID,
    UP,
    DOWN,
    LEFT,
    RIGHT,
    QUIT,

    maxCommands,
};

Command operator-(Command command);
std::pair<int, int> getDisplacement(Command command);
std::ostream& operator<<(std::ostream& out, Command command);

#endif
