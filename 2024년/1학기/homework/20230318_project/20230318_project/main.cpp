#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    vector<char> players = { '1', '2' };
    int current_player = 0;

    auto print_board = [&](vector<vector<char>>& board) {
        for (auto& row : board) {
            for (char cell : row) {
                cout << cell << " | ";
            }
            cout << endl << "---------" << endl;
        }
        };

    auto check_winner = [&](char player) {
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
        };

    auto is_full = [&]() {
        for (auto& row : board) {
            for (char cell : row) { 
                if (cell == ' ') {
                    return false;
                }
            }
        }
        return true;
        };

    while (true) {
        print_board(board);
        cout << "플레이어 " << players[current_player] << "의 차례입니다:" << endl;
        int row, col;
        cout << "행을 입력하세요 (0, 1, 또는 2): ";
        cin >> row;
        cout << "열을 입력하세요 (0, 1, 또는 2): ";
        cin >> col;

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = players[current_player];
            if (check_winner(players[current_player])) {
                print_board(board);
                cout << "플레이어 " << players[current_player] << "가 이겼습니다!" << endl;
                break;
            }
            else if (is_full()) {
                print_board(board);
                cout << "비겼습니다!" << endl;
                break;
            }
            current_player = (current_player + 1) % 2;
        }
        else {
            cout << "잘못된 위치입니다. 다시 시도하세요." << endl;
        }
    }

    return 0;
}
