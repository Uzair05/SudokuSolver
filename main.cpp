#include <iostream>
#include <optional>
#include <string>

#include "boardDefinitions.hpp"
#include "genOptions.hpp"
#include "readBoard.hpp"

void printBoard(Board& board) {
    for (const auto& r : board) {
        for (const auto& c : r) {
            if (c==0){
                std::cout << '_' << ", ";
            }else{
                std::cout << c << ", ";
            }
        }
        std::cout << "\n";
    }
}

std::optional<Loc> getEmptyCell(Board& board) {
    for (size_t r{0}; r < 9; r++) {
        for (size_t c{0}; c < 9; c++) {
            if (board[r][c] == 0) {
                return Loc{r, c};
            }
        }
    }
    return std::nullopt;
}

std::optional<Board> solveBoard(Board board) {
    auto loc_ = getEmptyCell(board);
    if (!loc_.has_value()) {
        return board;
    }  // if no empty cells remaining return the board.
    Loc loc{loc_.value()};
    auto options = genOptions(board, loc);

    if (options.size() == 0) {
        return std::nullopt;
    }

    for (const auto& opt : options) {
        board[loc.row][loc.col] = opt;
        auto solveBoardCalc = solveBoard(board);
        if (solveBoardCalc.has_value()) {
            return solveBoardCalc.value();
        }
    }
    return std::nullopt;
}

int main() {
    std::string path{"./Board.txt"};
    auto board{readBoard(path)};

    std::cout << "\n\n\nUnsolved Board is:\n";
    printBoard(board);

    auto board_ = solveBoard(board);
    if (board_.has_value()){
        std::cout << "\n\n\nSolved Board is:\n";
        printBoard(board_.value());
    }else{
        std::cout << "No Solution Exists" << std::endl;
    }
    
    return 0;
}
