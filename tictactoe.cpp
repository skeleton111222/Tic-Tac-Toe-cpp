#include <iostream>

using namespace std; //for input/output (std: Standard Library)

char board[3][3]; // 3x3 Tic-Tac-Toe board
char currentPlayer = 'X'; // Player 'X' starts

// Function to initialize the board with empty spaces
void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' '; // Empty space
        }
    }
}

// Function to print the current board
void printBoard() {
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}

// Function to check if there's a winner
bool isWinner() {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) {
            return true;
        }
    }

    // Check diagonals
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) {
        return true;
    }
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) {
        return true;
    }

    return false;
}

// Function to check if the board is full (no empty spaces left)
bool isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false; // Found an empty space
            }
        }
    }
    return true; // No empty spaces left
}

// Main Function
int main() {
    initializeBoard(); // Initialize the board at the start
    int row, col;
    bool gameEnded = false;

    while (!gameEnded) {
        printBoard(); // Display the current board
        cout << "Player " << currentPlayer << ", enter row and column (0-2) to make a move: ";
        cin >> row >> col;

        // Check if the input is valid (row and column between 0-2, and the spot is empty)
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        board[row][col] = currentPlayer; // Make the move

        // Check if the current player wins
        if (isWinner()) {
            printBoard();
            cout << "Player " << currentPlayer << " wins!\n";
            gameEnded = true;
        } else if (isBoardFull()) { // Check if the game is a draw
            printBoard();
            cout << "It's a draw!\n";
            gameEnded = true;
        } else {
            // Switch to the other player
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    return 0;
}
