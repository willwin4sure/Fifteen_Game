#ifndef COMMAND_082723_H
#define COMMAND_082723_H

#include <ostream>

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

std::ostream& operator<<(std::ostream& out, Command command);

#endif
