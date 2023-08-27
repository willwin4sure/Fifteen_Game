# Fifteen_Game

Standard 15 puzzle game implemented in C++.

Run with CMake, or by using

```
g++ main.cpp src/Board.cpp src/Tile.cpp src/UserCommand.cpp -o main.exe
```

in the root directory, then running the resultant executable `main.exe`.

## TODO

Future ideas:
* Improve graphical interface, but keep it in the terminal.
* Try taking continuous input from the terminal, instead of having to press Enter each time.
* Write a solver. Test various algorithms and their runtimes (e.g. BFS, A*).
* Track move counts (and time?). Maybe also give optimal move count at end. Maybe log these to file (can then do stuff to this data).
