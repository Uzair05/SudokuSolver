#include <string>
#include <fstream>
#include <iostream>

#include "boardDefinitions.hpp"
#include "readBoard.hpp"

Board readBoard(std::string& path) {
    Board board{};
    std::fstream board_read;
    board_read.open(path, std::ios::in);

    if (board_read) {
        std::string input;
        while (board_read >> input) {
            std::vector<int> _board_row{};
            for (const char& c : input) {
                _board_row.push_back(
                    static_cast<int>((c == '_' ? '0' : c) -
                                     '0'));  // Empty Cells hold the value 0
            }
            board.push_back(std::move(_board_row));
        }
    } else {
        std::cout << "Readfile Error" << std::endl;
    }
    return board;
}
