
#include <vector>
#include <iostream>

class TicTacToe {
private:
    std::vector<std::vector<char>> board;
    std::vector<char> players;
    int current_player;

    void printBoard();
    bool checkWinner(char player);
    bool isFull();

public:
    TicTacToe();
    void play();
};