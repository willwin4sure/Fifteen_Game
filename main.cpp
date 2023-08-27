#include "src/Tile.h"
#include "src/Board.h"

#include <iostream>
#include <limits>
#include <string>

namespace UserInput
{
    enum class Command : char
    {
        UP = 'w',
        DOWN = 's',
        LEFT = 'a',
        RIGHT = 'd',
        QUIT = 'q',
    };

    constexpr std::string_view validCommands { "wasdq" };

    std::ostream& operator<<(std::ostream& out, const Command& command)
    {
        return out << static_cast<char>(command);
    }

    bool isValidCommand(char ch)
    {
        return validCommands.find(ch) != std::string::npos;
    }

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

    Command getCommandFromUser()
    {
        char ch {};
        while (!isValidCommand(ch))
        {
            ch = getCharacter();
        }
        
        return static_cast<Command>(ch);
    }
}

int main()
{
    Board board {};
    std::cout << board;

    while (true)
    {
        UserInput::Command command { UserInput::getCommandFromUser() };

        std::cout << "Valid command: " << command << '\n';

        if (command == UserInput::Command::QUIT) {
            std::cout << "\n\nBye!\n\n";
            break;
        }
    }

    return 0;
}
