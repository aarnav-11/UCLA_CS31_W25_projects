#ifndef BeetleGameH
#define BeetleGameH

#include <string>
#include "Beetle.h"
#include "Die.h"

namespace cs31
{
    class BeetleGame
    {
    public:
        BeetleGame();
        
        // The possible outcome choices
        enum class GameOutcome { HUMANWONGAME, COMPUTERWONGAME, GAMENOTOVER };
        
        // Draw the board by using a BeetleDrawing to draw the two Beetles
        std::string display(std::string msg = "") const;
        
        // Roll the human's die (if amount==0, random; otherwise, cheating value)
        void humanRoll(int amount = 0);
        
        // Return the value of the human's die
        int getHumanDie() const;
        
        // Convert the human's die value to a body part and build it if allowed
        bool humanPlay();
        
        // Roll the computer's die (if amount==0, random; otherwise, cheating value)
        void computerRoll(int amount = 0);
        
        // Return the value of the computer's die
        int getComputerDie() const;
        
        // Convert the computer's die value to a body part and build it if allowed
        bool computerPlay();
        
        // Determine the current state of the game
        GameOutcome determineGameOutcome() const;
        std::string stringifyGameOutcome() const;
        
        // Has the game ended with a winner?
        bool gameIsOver() const;
        
        // For testing purposes
        Beetle getHumanBeetle() const;
        Beetle getComputerBeetle() const;
        
    private:
        Beetle mHuman, mComputer;
        Die mHumanDie, mComputerDie;
    };
}

#endif
