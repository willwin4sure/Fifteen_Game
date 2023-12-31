#include "src/Tile.h"
#include "src/Board.h"
#include "src/UserCommand.h"

#include <iostream>
#include <limits>
#include <string>

namespace UserInput
{
    void ignoreLine()
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    char getCharacter()
    {
        std::cout << ">> ";
        char op {};
        std::cin >> op;
        ignoreLine();
        return op;
    }

    Command getCommand()
    {
        char ch { getCharacter() };
        switch (ch)
        {
        case 'q': return Command::QUIT;
        case 'w': return Command::UP;
        case 's': return Command::DOWN;
        case 'a': return Command::LEFT;
        case 'd': return Command::RIGHT;
        default: return Command::INVALID;
        }
    }

    Command getCommandFromUser()
    {
        Command command { Command::INVALID };

        while (command == Command::INVALID)
        {
            command = getCommand();
        }
        
        return command;
    }
}

int main()
{
    Board board {};
    board.randomizeBoard(10000);
    std::cout << board;

    while (true)
    {
        Command command { UserInput::getCommandFromUser() };

        std::cout << "Valid command: " << command << '\n';

        if (command == Command::QUIT) {
            std::cout << "\n\nBye!\n\n";
            break;
        } else {
            bool moved = board.moveTile(command);
            if (moved) std::cout << board;
            if (board.isWon()) {
                std::cout << "\n\nYou won!\n\n";
                break;
            }
        }
    }

    return 0;
}
