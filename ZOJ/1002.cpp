#include <iostream>

const int MAX_LEN = 4;

int max, cur_max;
char board[MAX_LEN][MAX_LEN];

bool check(int row, int col, int len) {
    //up
    for (int i = row-1; i >= 0; i --) {
        if (board[i][col] == 'Y') return false;
        else if (board[i][col] == 'X') break;
    }
    //down
    for (int i = row+1; i < len; i ++) {
        if (board[i][col] == 'Y') return false;
        else if (board[i][col] == 'X') break;
    }
    //left
    for (int i = col-1; i >= 0; i ++) {
        if (board[row][i] == 'Y') return false;
        else if (board[row][i] == 'X') break;
    }
    //right
    for (int i = col+1; i < len; i ++) {
        if (board[row][i] == 'Y') return false;
        else if (board[row][i] == 'X') break;
    }
    return true;
}

void DFS(int len) {
    if (cur_max > max) max = cur_max;
    
    for (int row = 0; row < len; row ++) {
        for (int col = 0; col < len; col ++) {
            if (board[row][col] == '.' && check(row, col, len)) {
                board[row][col] = 'Y';
                cur_max ++;
                DFS(len);
                board[row][col] = '.';
                cur_max --;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int n;
    
    while (std::cin >> n && n != 0) {
        max = cur_max = 0;
        
        for (int row = 0; row < n; row ++) {
            for (int col = 0; col < n; col ++) {
                std::cin >> board[row][col];
            }
        }
        DFS(n);
        std::cout << max << std::endl;
    }
    
    return 0;
}
