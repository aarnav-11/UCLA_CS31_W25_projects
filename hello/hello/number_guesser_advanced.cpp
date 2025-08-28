//
//  number_guesser_advanced.cpp
//  hello
//
//  Created by aarnav on 2/9/25.
//
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    
    int i = 0, j = 1, k = 100;
    char endGame = 'y';
    srand ((unsigned) time(NULL));
    int random = rand() % 100 + 1, guess = 0;
    cout << "This is a game where you need to guess the number in 7 attempts."<<endl;
    cout << "Each time you play the game again, the range will double."<<endl;
    cout << "It starts from 1-100."<<endl;
    cout << "Try to win!"<<endl;
    
    while(endGame == 'y'){
        while (j<=5)
        {
            while(random != guess){
                i++;
//                cout << random;
                cout << "Guess the randomly generated number: ";
                cin>> guess;
                if ( guess >= 0 && !cin.fail() && guess <= k)
                {
                    if (i == 7)
                    {
                        cout << "The number was "<< random << ". You took too many tries."<<endl;
                        return 0;
                    }
                    if (guess == random){
                        if (i != 1){
                            cout << "Congrats you guessed the number, it took " << i << " tries." << endl;
                            i = 0;
                        }
                        if (i == 1){
                            cout << "Congrats you guessed the number, it took " << i << " try." << endl;
                            i = 0;                }
                    }
                    if (i == 5){
                        cout << "Warning you have 2 attempts left" << endl<<endl;
                    }
                    if(guess>random){
                        cout << "Lower your guess"<<endl;
                    }
                    else if(guess<random){
                        cout << "Increase your guess"<<endl;
                    }
                    else{
                        i = i;
                    }
                }
                else
                {
                    cout << "Please enter a valid number."<<endl;
                    cin.clear();
                    cin.ignore(10000,'\n');
                    i--;
                    continue;
                }
            }
            cout << "Do you want to play again?(y/n) ";
            cin >> endGame;
            if (endGame != 'y') break;
            j++;
            k = k * 2;
            cout << "This is round " << j << ". The range is now 1-"<<k<< "."<<endl;
            random = rand() % k+1;
            guess = -1;
            i = 0;
        }
        
        while (j>5 && j<10)
        {
            j++;
            cout << "Now the range will remain the same but each round the number of guesses you get will reduce"<< endl;
            
            //add lesser guesses each time
        }
    }
    return 0;
}
