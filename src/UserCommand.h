#ifndef COMMAND_082723_H
#define COMMAND_082723_H

#include <ostream>

enum class Command
{
    INVALID,
    QUIT,
    UP,
    DOWN,
    LEFT,
    RIGHT,

    maxCommands,
};

std::ostream& operator<<(std::ostream& out, Command command);

#endif
