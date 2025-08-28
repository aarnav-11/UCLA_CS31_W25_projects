//
//  main2.cpp
//  Tic_Tac_Toe
//
//  Created by aarnav on 3/8/25.
#include <iostream>
#include <cstdlib>

using namespace std;

void setBoard(char *spaces);
void player1Move(char *spaces, char player1, int lastBlocked[]);
void player2Move(char *spaces, char player2, int lastBlocked[]);
void checkWinner(char *spaces, int turn, bool &gameOn);

int main() {
    char spaces[15] = {'1', '2', '3', '1', '2', '3', '4', '5', '1', '2', '3', '4', '5', '6', '7'};
    int lastBlocked[3] = {0, 0, 0}; // Stores the highest blocked position for each row
    bool turn = 0;
    bool gameOn = true;
    
    char player1 = 'X';
    char player2 = 'O';

    while (gameOn == true) {
        setBoard(spaces);
        player1Move(spaces, player1, lastBlocked);
        turn = 1;
        checkWinner(spaces, turn, gameOn);
        if (!gameOn){
            break;
        }
        setBoard(spaces);
        player2Move(spaces, player2, lastBlocked);
        turn = 0;
        checkWinner(spaces, turn, gameOn);
        if (!gameOn){
            break;
        }
    }
    return 0;
}

void setBoard(char *spaces) {
    cout << "                          ___________________" << endl;
    cout << "                          |     |     |     |" << endl;
    cout << "                          |  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  |" << endl;
    cout << "                          |_____|_____|_____|" << endl;
    cout << "                     ______________________________" << endl;
    cout << "                    |     |     |     |     |     |" << endl;
    cout << "                    |  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  |  " <<
            spaces[6] << "  |  " << spaces[7] << "  |" << endl;
    cout << "                    |_____|_____|_____|_____|_____|" << endl;

    cout << "               _________________________________________" << endl;
    cout << "              |     |     |     |     |     |     |     |" << endl;
    cout << "              |  " << spaces[8] << "  |  " << spaces[9] << "  |  " << spaces[10] << "  |  " << spaces[11] << "  |  " <<
            spaces[12] << "  |  " << spaces[13] << "  |  " << spaces[14] << "  |" << endl;
    cout << "              |_____|_____|_____|_____|_____|_____|_____|" << endl;
}

void fillBlocks(char *spaces, char player, int row, int block) {
    int startIdx = (row == 1) ? 0 : (row == 2) ? 3 : 8;

    for (int i = startIdx; i < startIdx + block; i++) {
        spaces[i] = player;
    }
}

void player1Move(char *spaces, char player1, int lastBlocked[]) {
    int row, block;
    cout << "Player 1's turn.\n";

    while (true) {
        cout << "Enter row (1-3): ";
        cin >> row;

        int maxBlocks = (row == 1) ? 3 : (row == 2) ? 5 : 7;

        if (row < 1 || row > 3) {
            cout << "Invalid row! Try again.\n";
            continue;
        }

        cout << "Enter block number (1-" << maxBlocks << "): ";
        cin >> block;

        if (block < 1 || block > maxBlocks || block <= lastBlocked[row - 1]) {
            cout << "Invalid block! Cannot pick previously blocked or out-of-range block. Try again.\n";
            continue;
        }

        // Fill all blocks up to the chosen block
        fillBlocks(spaces, player1, row, block);

        // Update last blocked position
        lastBlocked[row - 1] = block;
        system ("clear");
        break;
    }
}

void player2Move(char *spaces, char player2, int lastBlocked[]) {
    int row, block;
    cout << "Player 2's turn.\n";

    while (true) {
        cout << "Enter row (1-3): ";
        cin >> row;

        int maxBlocks = (row == 1) ? 3 : (row == 2) ? 5 : 7;

        if (row < 1 || row > 3) {
            cout << "Invalid row! Try again.\n";
            continue;
        }

        cout << "Enter block number (1-" << maxBlocks << "): ";
        cin >> block;

        if (block < 1 || block > maxBlocks || block <= lastBlocked[row - 1]) {
            cout << "Invalid block! Cannot pick previously blocked or out-of-range block. Try again.\n";
            continue;
        }

        // Fill all blocks up to the chosen block
        fillBlocks(spaces, player2, row, block);

        // Update last blocked position
        lastBlocked[row - 1] = block;
        system("clear");
        break;
    }
}
void checkWinner(char *spaces, int turn, bool &gameOn){
    
    bool allFilled = true;
      for (int i = 0; i < 15; i++) {
          if (spaces[i] != 'X' && spaces[i] != 'O') {
              allFilled = false;
              break;
          }
      }

      if (allFilled) {
          if (turn == 0){
              cout << "Player 1 wins!" << endl;
          }
          else{
              cout << "Player 2 wins!";
          }
          gameOn = false;
      }
}
