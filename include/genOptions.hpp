#ifndef INCLUDE_GENOPTIONS_HPP
bool testRow(int option, Board& board, Loc loc);
bool testColumn(int option, Board& board, Loc loc);
bool testSubgrid(int option, Board& board, Loc loc);
std::set<int> genOptions(Board& board, Loc loc);
#endif