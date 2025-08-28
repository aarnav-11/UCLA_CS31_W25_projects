////
////  main.cpp
////  Tic_Tac_Toe
////
////  Created by aarnav on 3/5/25.
////
//
//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//void setBoard(char *spaces);
//void player1Move(char *spaces, char player1, int *filledBlocks);
//void player2Move(char *spaces, char player2, int *filledBlocks);
//bool checkWinner(char *spaces, char player1, char player2);
//bool checkDraw(char *spaces);
//
//int main(){
//    char spaces[15] = {'1', '2', '3','1', '2', '3','4', '5', '1','2', '3', '4','5', '6', '7'};
//    int filledBlocks[3] = {0, 0, 0};
//    char player1 = 'X';
//    char player2 = 'O';
//    bool gameOn = true;
////    for (int i = 0; i < 15; i++){
////        spaces[i] = 'X';
//    while (gameOn){
//        setBoard(spaces);
//        player1Move(spaces, player1, filledBlocks);
//        setBoard(spaces);
//        player2Move(spaces, player2, filledBlocks);
//    }
//    
//}
//
//void setBoard(char *spaces){
//    cout << "                          ___________________" << endl;
//    cout << "                          |     |     |     |" << endl;
//    cout << "                          |  "<< spaces[0] << "  |  " << spaces [1] << "  |  " << spaces[2] << "  |" << endl;
//    cout << "                          |_____|_____|_____|" << endl;
//    cout << "                     ______________________________" << endl;
//    cout << "                    |     |     |     |     |     |" << endl;
//    cout << "                    |  "<< spaces[3] << "  |  " << spaces [4] << "  |  " << spaces[5] << "  |  " <<
//    spaces[6] << "  |  " << spaces [7] << "  |" << endl;
//    cout << "                    |_____|_____|_____|_____|_____|" << endl;
//    
//    cout << "               _________________________________________" << endl;
//    cout << "              |     |     |     |     |     |     |     |" << endl;
//    cout << "              |  " << spaces [8] << "  |  "<< spaces[9] << "  |  " << spaces [10] << "  |  " << spaces[11] << "  |  " <<
//    spaces[12] << "  |  " << spaces [13] << "  |  "<< spaces[14] << "  |" << endl;
//    cout << "              |_____|_____|_____|_____|_____|_____|_____|" << endl;
//}
//
//void player1Move(char *spaces, char player1, int *filledBlocks){
//    int number = 1, row = 1;
//    bool correct = false;
//    cout << "Player 1's turn." << "\n" << endl;
//    
//    while (correct == false){
//        cout << "Enter a row you want to fill: ";
//        cin >> row;
//        int maxBlocks = (row == 1) ? 3: (row == 2) ? 5 : 7;
//        if (filledBlocks[row - 1] == maxBlocks) {
//                   cout << "Row " << row << " is already full. Choose another row." << endl;
//                   continue;
//               }
//        cout << "Enter how many blocks you want to fill: ";
//                cin >> number;
//        if (row < 1 || row > 3 || number < 1 || (row == 1 && number > 3) || (row == 2 && number > 5) || (row == 3 && number > 7)){
//            cout << "Invalid input" << "\n";
//            correct = false;
//        }
//        else {
//            correct = true;
//        }
//    }
//    switch (row) {
//        case 1:
//            number = number;
//        break;
//        case 2:
//            number += 3;
//            break;
//        case 3:
//            number += 8;
//            break;
//        default:
//            break;
//    }
//    if (number > 0 && number <= 3){
//        for (int i = 0; i < number; i++){
//            spaces[i] = player1;
//        }
//    }
//    else if(number > 3 && number <= 8){
//        for (int i = 3; i < number; i++){
//            spaces[i] = player1;
//        }
//    }
//    else if(number > 8 && number <= 16){
//        for (int i = 8; i < number; i++){
//            spaces[i] = player1;
//        }
//    }
//    filledBlocks[row - 1] = number;
//}
//
//void player2Move(char *spaces, char player2, int *filledBlocks){
//    int number = 1, row = 1;
//    bool correct = false;
//    cout << "Player 2's turn." << "\n" << endl;
//    
//    while (correct == false){
//        cout << "Enter a row you want to fill: ";
//        cin >> row;
//        int maxBlocks = (row == 1) ? 3: (row == 2) ? 5 : 7;
//        if (filledBlocks[row - 1] == maxBlocks) {
//                   cout << "Row " << row << " is already full. Choose another row." << endl;
//                   continue;
//               }
//        cout << "Enter how many blocks you want to fill: ";
//                cin >> number;
//        if (row < 1 || row > 3 || number < 1 || (row == 1 && number > 3) || (row == 2 && number > 5) || (row == 3 && number > 7)){
//            cout << "Invalid input" << "\n";
//            correct = false;
//        }
//        else {
//            correct = true;
//        }
//    }
//    switch (row) {
//        case 1:
//            number = number;
//        break;
//        case 2:
//            number += 3;
//            break;
//        case 3:
//            number += 8;
//            break;
//        default:
//            break;
//    }
//    if (number > 0 && number <= 3){
//        for (int i = 0; i < number; i++){
//            spaces[i] = player2;
//        }
//    }
//    else if(number > 3 && number <= 8){
//        for (int i = 3; i < number; i++){
//            spaces[i] = player2;
//        }
//    }
//    else if(number > 8 && number <= 16){
//        for (int i = 8; i < number; i++){
//            spaces[i] = player2;
//        }
//    }
//    filledBlocks[row - 1] = number;
//}
//
//bool checkWinner(char *spaces, char player1, char player2){
//    return 0;
//}
//
//bool checkDraw(char *spaces){
//    return 1;
//}
