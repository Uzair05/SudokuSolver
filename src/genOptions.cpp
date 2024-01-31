#include "boardDefinitions.hpp"
#include "genOptions.hpp"

bool testRow(int option, Board& board, Loc loc) {
    for (size_t i{0}; i < 9; i++) {
        if (option == board[loc.row][i]) {
            return false;
        }
    }
    return true;
}
bool testColumn(int option, Board& board, Loc loc) {
    for (size_t i{0}; i < 9; i++) {
        if (option == board[i][loc.col]) {
            return false;
        }
    }
    return true;
}
bool testSubgrid(int option, Board& board, Loc loc) {
    Loc ur_corner{(loc.row / 3)*3, (loc.col / 3)*3};
    for (size_t r{ur_corner.row}; r < (ur_corner.row + 3); r++) {
        for (size_t c{ur_corner.col}; c < (ur_corner.col + 3); c++) {
            if (option == board[r][c]) {
                return false;
            }
        }
    }
    return true;
}
std::set<int> genOptions(Board& board, Loc loc) {
    std::set<int> opt{};
    for (int i{1}; i <= 9; i++) {
        if (testColumn(i, board, loc) && testRow(i, board, loc) &&
            testSubgrid(i, board, loc)) {
            opt.insert(i);
        }
    }
    return opt;
}