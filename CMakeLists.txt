cmake_minimum_required(VERSION 3.11.0)
project(Fifteen_Game VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(Fifteen_Game main.cpp src/Tile.cpp src/Board.cpp src/UserCommand.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
