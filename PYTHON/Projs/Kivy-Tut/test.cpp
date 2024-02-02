#include <iostream>

// Function to initialize the game board
void initializeBoard(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
}

// Function to display the current state of the board
void displayBoard(const char board[3][3]) {
    std::cout << "  1 2 3\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << i + 1 << ' ';
        for (int j = 0; j < 3; ++j) {
            std::cout << board[i][j];
            if (j < 2) {
                std::cout << '|';
            }
        }
        std::cout << '\n';
        if (i < 2) {
            std::cout << "  -----\n";
        }
    }
    std::cout << '\n';
}

// Function to check if the move is valid
bool isValidMove(const char board[3][3], int row, int col) {
    return (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ');
}

// Function to make a move on the board
void makeMove(char board[3][3], int row, int col, char player) {
    board[row][col] = player;
}

// Function to check for a winner
bool checkWinner(const char board[3][3], char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

// Function to check if the board is full
bool isBoardFull(const char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char board[3][3];
    char currentPlayer = 'X';

    initializeBoard(board);

    do {
        displayBoard(board);

        int row, col;

        // Get valid move from the current player
        do {
            std::cout << "Player " << currentPlayer << ", enter your move (row and column): ";
            std::cin >> row >> col;
        } while (!isValidMove(board, row - 1, col - 1));

        makeMove(board, row - 1, col - 1, currentPlayer);

        // Check for a winner
        if (checkWinner(board, currentPlayer)) {
            displayBoard(board);
            std::cout << "Player " << currentPlayer << " wins!\n";
            break;
        }

        // Check for a draw
        if (isBoardFull(board)) {
            displayBoard(board);
            std::cout << "It's a draw!\n";
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';

    } while (true);

    std::cout << "Do you want to play again? (yes/no): ";
    std::string playAgain;
    std::cin >> playAgain;

    if (playAgain == "yes") {
        main();  // restart the game
    }

    return 0;
}
