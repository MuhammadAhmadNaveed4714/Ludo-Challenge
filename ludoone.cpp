//Here's a simplified version of the Ludo game in C++:

//Gameplay:
//
//1. Two players take turns rolling a dice.
//2. The player moves their piece around the board based on the roll.
//3. The first player to reach the end of the board(position 51) wins.
//
//Note :
//
//    This is a simplified version of Ludo.You may want to add additional features like :
//
//-Safety squares
//- Capturing opponent pieces
//- Special rules for rolling 6
//
//To compile and run this code, save it to a file named ludo.cpp and use the following commands :
//
//
//bash
//g++ ludo.cpp - o ludo
//. / ludo
//
//
//Have fun playing Ludo!

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int NUM_PLAYERS = 2;
const int NUM_DICE = 1;
const int BOARD_SIZE = 52;
const int HOME_POSITION = 0;
const int WIN_POSITION = 51;

// Function to roll the dice
int rollDice() {
    return (rand() % 6) + 1;
}

// Function to draw the game board
void drawBoard(int player1Position, int player2Position) {
    cout << endl;
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (i == player1Position) {
            cout << "P1 ";
        }
        else if (i == player2Position) {
            cout << "P2 ";
        }
        else {
            cout << i << " ";
        }
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

// Function to check for a win
bool checkWin(int playerPosition) {
    return playerPosition >= WIN_POSITION;
}

// Main function
int main() {
    srand(time(0)); // Seed random number generator

    int player1Position = HOME_POSITION;
    int player2Position = HOME_POSITION;
    int currentPlayer = 0;

    while (true) {
        drawBoard(player1Position, player2Position);
        cout << "Player " << currentPlayer + 1 << "'s turn. Press Enter to roll the dice." << endl;
        cin.get();

        int roll = rollDice();
        cout << "You rolled: " << roll << endl;

        if (currentPlayer == 0) {
            player1Position = min(player1Position + roll, WIN_POSITION);
        }
        else {
            player2Position = min(player2Position + roll, WIN_POSITION);
        }

        if (checkWin(player1Position)) {
            cout << "Player 1 wins!" << endl;
            break;
        }
        else if (checkWin(player2Position)) {
            cout << "Player 2 wins!" << endl;
            break;
        }

        currentPlayer = 1 - currentPlayer; // Switch players
    }

    return 0;
}


