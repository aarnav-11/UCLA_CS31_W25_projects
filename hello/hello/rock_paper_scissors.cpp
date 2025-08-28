////
////  rock_paper_scissors.cpp
////  hello
////
////  Created by aarnav on 2/10/25.
////
//
//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//int main()
//{
//    //1= rock, 2= paper, 3= scissor
//    srand ((unsigned) time(NULL));
//    int randomThree = rand() % 3 + 1;
//    string userSymbol;
//    
//    cout << "Rock paper or scissors: ";
//    cin >> userSymbol;
//    
//    switch (randomThree) {
//        case 1:
//            if (userSymbol == "Scissor" || userSymbol == "scissor")
//            {
//                cout << "The computer threw rock. You lost."<< endl;
//            }
//            else if (userSymbol == "Rock" || userSymbol == "rock")
//            {
//                cout << "The computer threw rock as well. It's a draw."<< endl;
//            }
//            else if (userSymbol == "Paper" || userSymbol == "paper")
//            {
//                cout << "The computer threw rock. You won!"<< endl;
//            }
//            else
//            {
//                randomThree = randomThree;
//            }
//            break;
//            
//        case 2:
//            if (userSymbol == "Scissor" || userSymbol == "scissor")
//            {
//                cout << "The computer threw paper. You won!"<< endl;
//            }
//            else if (userSymbol == "Rock" || userSymbol == "rock")
//            {
//                cout << "The computer threw paper. You lost."<< endl;
//            }
//            else if (userSymbol == "Paper" || userSymbol == "paper")
//            {
//                cout << "The computer threw paper as well. It's a draw."<< endl;
//            }
//            else
//            {
//                randomThree = randomThree;
//            }
//            break;
//            
//        case 3:
//            if (userSymbol == "Scissor" || userSymbol == "scissor")
//            {
//                cout << "The computer threw Scissor as well. It's a draw."<< endl;
//            }
//            else if (userSymbol == "Rock" || userSymbol == "rock")
//            {
//                cout << "The computer threw Scissor. You won!"<< endl;
//            }
//            else if (userSymbol == "Paper" || userSymbol == "paper")
//            {
//                cout << "The computer threw Scissor. You lost." << endl;
//            }
//            else
//            {
//                randomThree = randomThree;
//            }
//            break;
//            
//        default:
//            break;
//    }
//}
//   
