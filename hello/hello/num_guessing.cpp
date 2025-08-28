////
////  num_guessing.cpp
////  hello
////
////  Created by aarnav on 2/9/25.
////
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//int main()
//{
//    srand ((unsigned) time(NULL));
//    int random = rand() % 100 + 1, guess = -1;
//    int i = 0;
//    while(random != guess){
//        i++;
//        cout << "Guess the randomly generated number: ";
//        cin>> guess;
//        if (i == 7)
//        {
//            cout << "The number was "<< random << ". You took too many tries."<<endl;
//            return 0;
//        }
//        if (guess == random){
//            cout << "Congrats you guessed the number, it took " << i << " tries." << endl;
//            return 0;
//        }
//        else if(guess>random){
//            cout << "Lower your guess"<<endl;
//        }
//        else{
//            cout << "Increase your guess"<<endl;
//        }
//        if (i == 5){
//            cout << "Warning you have 2 attempts left" << endl<<endl;
//        }
//    }
// 
//    return 0;
//}
