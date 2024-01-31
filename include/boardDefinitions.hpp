#ifndef INCLUDE_BOARDDEFINITIONS_HPP
#include <set>
#include <vector>
using Board = std::vector<std::vector<int>>;
struct Loc {  // X,Y coordinates on the Board
    size_t row{0};
    size_t col{0};
};
#endif