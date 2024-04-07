#include "TicTacToe.h"

TicTacToe::TicTacToe() : board(3, std::vector<char>(3, ' ')), players({ '1', '2' }), current_player(0) {}

void TicTacToe::printBoard() {
    for (auto& row : board) {
        for (char cell : row) {
            std::cout << cell << " | ";
        }
        std::cout << std::endl << "---------" << std::endl;
    }
}

bool TicTacToe::checkWinner(char player) {
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

bool TicTacToe::isFull() {
    for (auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false;
            }
        }
    }
    return true;
}

void TicTacToe::play() {
    while (true) {
        printBoard();
        std::cout << "플레이어 " << players[current_player] << "의 차례입니다:" << std::endl;
        int row, col;
        std::cout << "행을 입력하세요 (0, 1, 또는 2): ";
        std::cin >> row;
        std::cout << "열을 입력하세요 (0, 1, 또는 2): ";
        std::cin >> col;

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = players[current_player];
            if (checkWinner(players[current_player])) {
                printBoard();
                std::cout << "플레이어 " << players[current_player] << "가 이겼습니다!" << std::endl;
                break;
            }
            else if (isFull()) {
                printBoard();
                std::cout << "비겼습니다!" << std::endl;
                break;
            }
            current_player = (current_player + 1) % 2;
        }
        else {
            std::cout << "잘못된 위치입니다. 다시 시도하세요." << std::endl;
        }
    }
}