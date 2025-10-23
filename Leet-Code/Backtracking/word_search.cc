#include <iostream>
#include <utility>
#include <vector>

class Solution {
public:
  void backtrack(std::vector<std::vector<char>> &board,
                 std::vector<std::pair<int, int>> visited, std::string word) {

  };
  bool exist(std::vector<std::vector<char>> &board, std::string word) {

    std::vector<std::pair<int, int>> visited;

    std::cout << board[0][1] << board[2][3];

    return false;
  };
};

int main() {

  std::vector<std::vector<char>> board = {
      {'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};

  std::string word = "ABCCED";

  Solution y;

  y.exist(board, word);
};
