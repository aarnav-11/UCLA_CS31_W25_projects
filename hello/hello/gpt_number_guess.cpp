//#include <iostream>
//#include <cstdlib>
//#include <ctime>  // Added for time()
//
//using namespace std;
//
//int main() {
//    int i = 0, j = 1, k = 100;
//    char endGame = 'y';
//    srand(time(NULL));
//
//    int random = rand() % 100 + 1, guess = 0;
//
//    cout << "This is a game where you need to guess the number in 7 attempts." << endl;
//    cout << "Each time you play again, the range will double." << endl;
//    cout << "It starts from 1-100." << endl;
//    cout << "Try to win!" << endl;
//
//    while (endGame == 'y') {
//        while (random != guess) {
//            i++;
//            cout << "Guess the randomly generated number: ";
//
//            // ✅ Input validation: Check if input is a number
//            if (!(cin >> guess)) {
//                cout << "Please enter a valid number." << endl;
//                cin.clear();  // Clear error state
//                cin.ignore(10000, '\n');  // Ignore invalid input
//                i--;  // Don't count this as an attempt
//                continue;
//            }
//
//            // ✅ Check range validity
//            if (guess < 0 || guess > k) {
//                cout << "Please enter a number between 1 and " << k << "." << endl;
//                i--;  // Don't count invalid attempts
//                continue;
//            }
//
//            // ✅ Check if max attempts exceeded
//            if (i == 7) {
//                cout << "The number was " << random << ". You took too many tries." << endl;
//                return 0;
//            }
//
//            // ✅ Check if guess is correct
//            if (guess == random) {
//                cout << "Congrats! You guessed the number in " << i << (i == 1 ? " try." : " tries.") << endl;
//                break;
//            }
//
//            // ✅ Warning on last 2 attempts
//            if (i == 5) {
//                cout << "Warning: You have 2 attempts left!" << endl;
//            }
//
//            // ✅ Give hints
//            if (guess > random) {
//                cout << "Lower your guess." << endl;
//            } else {
//                cout << "Increase your guess." << endl;
//            }
//        }
//
//        // ✅ Ask if user wants to play again
//        cout << "Do you want to play again? (y/n): ";
//        cin >> endGame;
//        if (endGame != 'y') break;
//
//        // ✅ Double the range and generate a new number
//        j++;
//        k *= 2;
//        cout << "This is round " << j << ". The range is now 1-" << k << "." << endl;
//
//        random = rand() % k + 1;
//        guess = -1;
//        i = 0;
//    }
//
//    return 0;
//}
