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
        cout << "�÷��̾� " << players[current_player] << "�� �����Դϴ�:" << endl;
        int row, col;
        cout << "���� �Է��ϼ��� (0, 1, �Ǵ� 2): ";
        cin >> row;
        cout << "���� �Է��ϼ��� (0, 1, �Ǵ� 2): ";
        cin >> col;

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = players[current_player];
            if (check_winner(players[current_player])) {
                print_board(board);
                cout << "�÷��̾� " << players[current_player] << "�� �̰���ϴ�!" << endl;
                break;
            }
            else if (is_full()) {
                print_board(board);
                cout << "�����ϴ�!" << endl;
                break;
            }
            current_player = (current_player + 1) % 2;
        }
        else {
            cout << "�߸��� ��ġ�Դϴ�. �ٽ� �õ��ϼ���." << endl;
        }
    }

    return 0;
}
