#include <iostream>
using namespace std;

int n = 8;

// Check if queen is safe at [row][col]
bool isSafe(int board[8][8], int row, int col) {
    for(int i = 0; i < row; i++) {
        if(board[i][col]) return false;  // Check column
        if(col-row+i >= 0 && board[i][col-row+i]) return false;  // Left diagonal
        if(col+row-i < n && board[i][col+row-i]) return false;  // Right diagonal
    }
    return true;
}

// Place queens using backtracking
bool solve(int board[8][8], int row) {
    if(row == n) return true;  // All queens placed
    if(row == 0) return solve(board, 1);  // Skip first row
    
    for(int col = 0; col < n; col++) {
        if(isSafe(board, row, col)) {
            board[row][col] = 1;
            if(solve(board, row + 1)) return true;
            board[row][col] = 0;  // Backtrack
        }
    }
    return false;
}

int main() {
    int board[8][8] = {0}, col;
    
    cout << "Enter column for first Queen (0-7): ";
    cin >> col;
    board[0][col] = 1;  // Place first queen
    
    if(solve(board, 0)) {
        cout << "\nSolution:\n";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++)
                cout << (board[i][j] ? "Q " : ". ");
            cout << endl;
        }
    } else {
        cout << "No solution!\n";
    }
    return 0;
}
