//
//  main.cpp
//
//
#include <cassert>
#include <iostream>
#include "Beetle.h"
#include "BeetleGame.h"
#include "BeetleDrawing.h"
#include "Die.h"

void clearScreen();

int main()
{
    using namespace cs31;
    using namespace std;
    
    clearScreen();
    Die d;
    d.roll();
    int value = d.getValue();
    assert( value >= 1 && value <= 6 );
//    Beetle b;
//    
//
//                 // sample test code working with Beetle
////                 Beetle b;
//
//                 // beetle does what you tell it to do, not enforce rules of the game.
//                 // rules of the game are left to BeetleGame to implement
////
////                 assert( b.hasHead() == false );
////                 assert( b.isComplete() == false );
////                 b.buildHead();
////                 assert( b.hasHead() );
////                 assert( b.isComplete() == false );
////    b.buildAntenna();
////    assert( b.hasAntenna1() );
////    b.buildAntenna();
////    assert(b.hasAntenna2());
////    
////    b.buildEye();
////    assert(b.hasEye1());
////    b.buildEye();
////    assert(b.hasEye2());
////
////    
////                 // build Leg1 before Leg2 before Leg3 before Leg4
////                 assert( b.hasLeg1() == false );
////                 assert( b.hasLeg2() == false );
////                 assert( b.hasLeg3() == false );
////                 assert( b.hasLeg4() == false );
////                 assert( b.isComplete() == false );
////                 b.buildLeg();
////                 assert( b.hasLeg1() );
////                 assert( b.hasLeg2() == false );
////                 assert( b.hasLeg3() == false );
////                 assert( b.hasLeg4() == false );
////                 b.buildLeg();
////                 assert( b.hasLeg1() );
////                 assert( b.hasLeg2() );
////                 assert( b.hasLeg3() == false );
////                 assert( b.hasLeg4() == false );
////                 b.buildLeg();
////                 assert( b.hasLeg1() );
////                 assert( b.hasLeg2() );
////                 assert( b.hasLeg3() );
////                 assert( b.hasLeg4() == false );
////                 b.buildLeg();
////                 assert( b.hasLeg1() );
////                 assert( b.hasLeg2() );
////                 assert( b.hasLeg3() );
////                 assert( b.hasLeg4() );
////                 assert( b.isComplete() == false );
////
////                 // build Eye1 before Eye2
////                 assert( b.hasEye1() == false );
////                 assert( b.hasEye2() == false );
////                 assert( b.isComplete() == false );
////                 b.buildEye();
////                 assert( b.hasEye1() );
////                 assert( b.hasEye2() == false );
////                 b.buildEye();
////                 assert( b.hasEye1() );
////                 assert( b.hasEye2() );
////                 assert( b.isComplete() == false );
////
////                 assert( b.hasTail() == false );
////                 assert( b.isComplete() == false );
////                 b.buildTail();
////                 assert( b.hasTail() );
////                 assert( b.isComplete() == false );
////
////                 // build Antenna1 before Antenna2
////                 assert( b.hasAntenna1() == false );
////                 assert( b.hasAntenna2() == false );
////                 assert( b.isComplete() == false );
////                 b.buildAntenna();
////                 assert( b.hasAntenna1() );
////                 assert( b.hasAntenna2() == false );
////                 b.buildAntenna();
////                 assert( b.hasAntenna1() );
////                 assert( b.hasAntenna2() );
////                 assert( b.isComplete() == false );
////
////                 assert( b.hasBody() == false );
////                 assert( b.isComplete() == false );
////                 b.buildBody();
////                 assert( b.hasBody() );
////                 assert( b.isComplete() == true );
////
////                 // cheating play
////                 BeetleGame game;
////                 assert( game.gameIsOver() == false );
////                 game.humanRoll( 1 );
////                 game.humanPlay();
////                 game.computerRoll( 1 );
////                 game.computerPlay();
////                 assert( game.getHumanBeetle().isComplete() == false );
////                 assert( game.getHumanBeetle().hasBody() == false );
////                 assert( game.getComputerBeetle().isComplete() == false );
////                 assert( game.getComputerBeetle().hasBody() == false );
////                 assert( game.gameIsOver() == false );
////                 game.humanRoll( 6 );
////                 game.humanPlay();
////                 game.computerRoll( 6 );
////                 game.computerPlay();
////                 assert( game.getHumanBeetle().isComplete() == false );
////                 assert( game.getHumanBeetle().hasBody() );
////                 assert( game.getComputerBeetle().isComplete() == false );
////                 assert( game.getComputerBeetle().hasBody() );
//
////
//////     sample test code working with Beetle
////    Beetle b;
//    BeetleGame game;
////    {
////           Beetle b1;
////           b1.buildHead();
//////           assert(b1.hasHead() == false);  // Should fail because body hasn't been built.
////       }
////       
////       // Edge Case: Try building tail without body.
////       {
////           Beetle b2;
////           b2.buildTail();
//////           assert(b2.hasTail() == false);  // Tail should not be built.
////       }
////       
////       // Edge Case: Try building leg without body.
////       {
////           Beetle b3;
////           b3.buildLeg();
////           assert(b3.hasLeg1() == false);
////           assert(b3.hasLeg2() == false);
////           assert(b3.hasLeg3() == false);
////           assert(b3.hasLeg4() == false);
////       }
////       
////       // Edge Case: Try building eyes without head (even if body exists).
////       {
////           Beetle b4;
////           b4.buildBody();
////           b4.buildEye();
////           assert(b4.hasEye1() == false);
////           assert(b4.hasEye2() == false);
////       }
////       
////       // Edge Case: Try building antennas without head.
////       {
////           Beetle b5;
////           b5.buildBody();
////           b5.buildAntenna();
////           assert(b5.hasAntenna1() == false);
////           assert(b5.hasAntenna2() == false);
////       }
////       
//////        Edge Case: Build parts more than needed (extra calls should have no effect).
////       {
////           Beetle b6;
////           b6.buildBody();
////           // Build legs: only 4 legs allowed.
////           b6.buildLeg(); // leg1
////           b6.buildLeg(); // leg2
////           b6.buildLeg(); // leg3
////           b6.buildLeg(); // leg4
////           b6.buildLeg(); // extra call; should not add a new leg.
////           assert(b6.hasLeg1() && b6.hasLeg2() && b6.hasLeg3() && b6.hasLeg4());
////           
////           // Build head then eyes.
////           b6.buildHead();
////           b6.buildEye();  // eye1
////           b6.buildEye();  // eye2
////           b6.buildEye();  // extra call
////           assert(b6.hasEye1() && b6.hasEye2());
////           
////           // Build antennas.
////           b6.buildAntenna(); // antenna1
////           b6.buildAntenna(); // antenna2
////           b6.buildAntenna(); // extra call
////           assert(b6.hasAntenna1() && b6.hasAntenna2());
////       }
////       
////       // Edge Case: Partial build should not be complete.
////       {
////           Beetle b7;
////           b7.buildBody();
////           b7.buildHead();
////           b7.buildLeg();
////           assert(b7.isComplete() == false);
////       }
////       
////       // Edge Case: Invalid die values for conversion.
////       {
////           Beetle b8;
////           assert(b8.convertRollToBodyPart(0) == Beetle::BodyPart::NOTVALID);
////           assert(b8.convertRollToBodyPart(7) == Beetle::BodyPart::NOTVALID);
////           assert(b8.convertRollToBodyPart(-1) == Beetle::BodyPart::NOTVALID);
////       }
////       
//       // ------------------------------
//       // Tests for the BeetleGame class
//       // ------------------------------
//       
//       // Edge Case: Cheating test with an invalid die value.
//       {
//           BeetleGame game1;
//           game1.humanRoll(8);  // 8 is invalid.
//           bool result = game1.humanPlay();
//           assert(result == false);
//           assert(game1.getHumanBeetle().isComplete() == false);
//       }
//       
//       // Winning scenario for the human.
//       {
//           BeetleGame gameHuman;
//           // Build body (die roll 6)
//           gameHuman.humanRoll(6);
//           gameHuman.humanPlay();
//           // Build head (die roll 5)
//           gameHuman.humanRoll(5);
//           gameHuman.humanPlay();
//           // Build tail (die roll 4)
//           gameHuman.humanRoll(4);
//           gameHuman.humanPlay();
//           // Build legs (die roll 3, 4 times)
//           for (int i = 0; i < 4; i++) {
//               gameHuman.humanRoll(3);
//               gameHuman.humanPlay();
//           }
//           // Build eyes (die roll 1, 2 times)
//           for (int i = 0; i < 2; i++) {
//               gameHuman.humanRoll(1);
//               gameHuman.humanPlay();
//           }
//           // Build antennas (die roll 2, 2 times)
//           for (int i = 0; i < 2; i++) {
//               gameHuman.humanRoll(2);
//               gameHuman.humanPlay();
//           }
//           // Human beetle should now be complete.
//           assert(gameHuman.getHumanBeetle().isComplete());
//           assert(gameHuman.determineGameOutcome() == BeetleGame::GameOutcome::HUMANWONGAME);
//       }
//       
//       // Winning scenario for the computer.
//       {
//           BeetleGame gameComputer;
//           // Build body (die roll 6)
//           gameComputer.computerRoll(6);
//           gameComputer.computerPlay();
//           // Build head (die roll 5)
//           gameComputer.computerRoll(5);
//           gameComputer.computerPlay();
//           // Build tail (die roll 4)
//           gameComputer.computerRoll(4);
//           gameComputer.computerPlay();
//           // Build legs (die roll 3, 4 times)
//           for (int i = 0; i < 4; i++) {
//               gameComputer.computerRoll(3);
//               gameComputer.computerPlay();
//           }
//           // Build eyes (die roll 1, 2 times)
//           for (int i = 0; i < 2; i++) {
//               gameComputer.computerRoll(1);
//               gameComputer.computerPlay();
//           }
//           // Build antennas (die roll 2, 2 times)
//           for (int i = 0; i < 2; i++) {
//               gameComputer.computerRoll(2);
//               gameComputer.computerPlay();
//           }
//           // Computer beetle should now be complete.
//           assert(gameComputer.getComputerBeetle().isComplete());
//           assert(gameComputer.determineGameOutcome() == BeetleGame::GameOutcome::COMPUTERWONGAME);
//       }
//    
////    // beetle does what you tell it to do, not enforce rules of the game.
////    // rules of the game are left to BeetleGame to implement
////
//    assert( b.hasHead() == false );
//    assert( b.isComplete() == false );
//    b.buildBody();
//    b.buildHead();
//    assert( b.hasHead());
//    assert( b.isComplete() == false );
//
//    // build Leg1 before Leg2 before Leg3 before Leg4
//    assert( b.hasLeg1() == false );
//    assert( b.hasLeg2() == false );
//    assert( b.hasLeg3() == false );
//    assert( b.hasLeg4() == false );
//    assert( b.isComplete() == false );
//    b.buildLeg();
//    assert( b.hasLeg1() );
//    assert( b.hasLeg2() == false );
//    assert( b.hasLeg3() == false );
//    assert( b.hasLeg4() == false );
//    b.buildLeg();
//    assert( b.hasLeg1() );
//    assert( b.hasLeg2() );
//    assert( b.hasLeg3() == false );
//    assert( b.hasLeg4() == false );
//    b.buildLeg();
//    assert( b.hasLeg1() );
//    assert( b.hasLeg2() );
//    assert( b.hasLeg3() );
//    assert( b.hasLeg4() == false );
//    b.buildLeg();
//    assert( b.hasLeg1() );
//    assert( b.hasLeg2() );
//    assert( b.hasLeg3() );
//    assert( b.hasLeg4() );
//    assert( b.isComplete() == false );
//
//    // build Eye1 before Eye2
//    assert( b.hasEye1() == false );
//    assert( b.hasEye2() == false );
//    assert( b.isComplete() == false );
//    b.buildEye();
//    assert( b.hasEye1() );
//    assert( b.hasEye2() == false );
//    b.buildEye();
//    assert( b.hasEye1() );
//    assert( b.hasEye2() );
//    assert( b.isComplete() == false );
//
//    assert( b.hasTail() == false );
//    assert( b.isComplete() == false );
//    b.buildTail();
//    assert( b.hasTail() );
//    assert( b.isComplete() == false );
//
//    // build Antenna1 before Antenna2
//    assert( b.hasAntenna1() == false );
//    assert( b.hasAntenna2() == false );
//    assert( b.isComplete() == false );
//    b.buildAntenna();
//    assert( b.hasAntenna1() );
//    assert( b.hasAntenna2() == false );
//    b.buildAntenna();
//    assert( b.hasAntenna1() );
//    assert( b.hasAntenna2() );
//    assert( b.isComplete() == true );
//
//    assert( b.hasBody() == true );
//    assert( b.isComplete() == true );
//   
//
//    // cheating play
////    BeetleGame game;
//    assert( game.gameIsOver() == false );
//    game.humanRoll( 1 );
//    game.humanPlay();
//    game.computerRoll( 1 );
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasBody() == false );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasBody() == false );
//    assert( game.gameIsOver() == false );
//    
//    game.humanRoll(2);
//    game.humanPlay();
//    game.computerRoll(2);
//    game.computerPlay();
//    game.humanRoll(2);
//    game.humanPlay();
//    game.computerRoll(2);
//    game.computerPlay();
//    game.humanRoll(2);
//    game.humanPlay();
//    game.computerRoll(2);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasAntenna1() == false );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasAntenna1() == false );
//    assert( game.getHumanBeetle().hasAntenna2() == false );
//    assert( game.getComputerBeetle().hasAntenna2() == false );
//    assert( game.gameIsOver() == false );
//    
//    game.humanRoll(3);
//    game.humanPlay();
//    game.computerRoll(3);
//    game.computerPlay();
//    game.humanRoll(3);
//    game.humanPlay();
//    game.computerRoll(3);
//    game.computerPlay();
//    game.humanRoll(3);
//    game.humanPlay();
//    game.computerRoll(3);
//    game.computerPlay();
//    game.humanRoll(3);
//    game.humanPlay();
//    game.computerRoll(3);
//    game.computerPlay();
//    game.humanRoll(3);
//    game.humanPlay();
//    game.computerRoll(3);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasLeg1() == false );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasLeg1() == false );
//    assert( game.getHumanBeetle().hasLeg2() == false );
//    assert( game.getComputerBeetle().hasLeg2() == false );
//    assert( game.getHumanBeetle().hasLeg3() == false );
//    assert( game.getComputerBeetle().hasLeg3() == false );
//    assert( game.getHumanBeetle().hasLeg4() == false );
//    assert( game.getComputerBeetle().hasLeg4() == false );
//    assert( game.gameIsOver() == false );
//    
//    game.humanRoll(4);
//    game.humanPlay();
//    game.computerRoll(4);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasTail() == false );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasTail() == false );
//    
//    game.humanRoll(5);
//    game.humanPlay();
//    game.computerRoll(5);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasHead() == false );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasHead() == false );
//    
//    game.humanRoll(6);
//    game.humanPlay();
//    game.computerRoll(6);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasBody() );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasBody() );
//    
//    game.humanRoll( 1 );
//    game.humanPlay();
//    game.computerRoll(1);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasEye1() == false );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasEye1() == false );
//    assert( game.getHumanBeetle().hasEye2() == false );
//    assert( game.getComputerBeetle().hasEye2() == false );
//    game.humanRoll( 1 );
//    game.humanPlay();
//    game.computerRoll(1);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasEye1() == false );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasEye1() == false );
//    assert( game.getHumanBeetle().hasEye2() == false );
//    assert( game.getComputerBeetle().hasEye2() == false );
//    
//    game.humanRoll(6);
//    game.humanPlay();
//    game.computerRoll(6);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasBody() );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasBody() );
//    
//    game.humanRoll(2);
//    game.humanPlay();
//    game.computerRoll(2);
//    game.computerPlay();
//    game.humanRoll(2);
//    game.humanPlay();
//    game.computerRoll(2);
//    game.computerPlay();
//    game.humanRoll(2);
//    game.humanPlay();
//    game.computerRoll(2);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasAntenna1() == false );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasAntenna1() == false );
//    assert( game.getHumanBeetle().hasAntenna2() == false );
//    assert( game.getComputerBeetle().hasAntenna2() == false );
//    assert( game.gameIsOver() == false );
//    
//    game.humanRoll(3);
//    game.humanPlay();
//    game.computerRoll(3);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasLeg1() );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasLeg1() );
//    assert( game.getHumanBeetle().hasLeg2() == false );
//    assert( game.getComputerBeetle().hasLeg2() == false );
//    assert( game.getHumanBeetle().hasLeg3() == false );
//    assert( game.getComputerBeetle().hasLeg3() == false );
//    assert( game.getHumanBeetle().hasLeg4() == false );
//    assert( game.getComputerBeetle().hasLeg4() == false );
//    assert( game.gameIsOver() == false );
//    
//    game.humanRoll(3);
//    game.humanPlay();
//    game.computerRoll(3);
//    game.computerPlay();
//    
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasLeg1());
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasLeg1() );
//    assert( game.getHumanBeetle().hasLeg2() );
//    assert( game.getComputerBeetle().hasLeg2() );
//    assert( game.getHumanBeetle().hasLeg3() == false );
//    assert( game.getComputerBeetle().hasLeg3() == false );
//    assert( game.getHumanBeetle().hasLeg4() == false );
//    assert( game.getComputerBeetle().hasLeg4() == false );
//    assert( game.gameIsOver() == false );
//    
//    game.humanRoll(3);
//    game.humanPlay();
//    game.computerRoll(3);
//    game.computerPlay();
//    
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasLeg1());
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasLeg1() );
//    assert( game.getHumanBeetle().hasLeg2() );
//    assert( game.getComputerBeetle().hasLeg2() );
//    assert( game.getHumanBeetle().hasLeg3() );
//    assert( game.getComputerBeetle().hasLeg3() );
//    assert( game.getHumanBeetle().hasLeg4() == false );
//    assert( game.getComputerBeetle().hasLeg4() == false );
//    assert( game.gameIsOver() == false );
//    
//    game.humanRoll(3);
//    game.humanPlay();
//    game.computerRoll(3);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasLeg1());
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasLeg1() );
//    assert( game.getHumanBeetle().hasLeg2() );
//    assert( game.getComputerBeetle().hasLeg2() );
//    assert( game.getHumanBeetle().hasLeg3() );
//    assert( game.getComputerBeetle().hasLeg3() );
//    assert( game.getHumanBeetle().hasLeg4() );
//    assert( game.getComputerBeetle().hasLeg4() );
//    assert( game.gameIsOver() == false );
//    
//    game.humanRoll(3);
//    game.humanPlay();
//    game.computerRoll(3);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasLeg1());
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasLeg1() );
//    assert( game.getHumanBeetle().hasLeg2() );
//    assert( game.getComputerBeetle().hasLeg2() );
//    assert( game.getHumanBeetle().hasLeg3() );
//    assert( game.getComputerBeetle().hasLeg3() );
//    assert( game.getHumanBeetle().hasLeg4() );
//    assert( game.getComputerBeetle().hasLeg4() );
//    assert( game.gameIsOver() == false );
//    
//    game.humanRoll(4);
//    game.humanPlay();
//    game.computerRoll(3);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasTail() );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasTail() == false);
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasLeg1());
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasLeg1() );
//    assert( game.getHumanBeetle().hasLeg2() );
//    assert( game.getComputerBeetle().hasLeg2() );
//    assert( game.getHumanBeetle().hasLeg3() );
//    assert( game.getComputerBeetle().hasLeg3() );
//    assert( game.getHumanBeetle().hasLeg4() );
//    assert( game.getComputerBeetle().hasLeg4() );
//    
//    game.humanRoll(4);
//    game.humanPlay();
//    game.computerRoll(4);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasTail() );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasTail() );
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasLeg1());
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasLeg1() );
//    assert( game.getHumanBeetle().hasLeg2() );
//    assert( game.getComputerBeetle().hasLeg2() );
//    assert( game.getHumanBeetle().hasLeg3() );
//    assert( game.getComputerBeetle().hasLeg3() );
//    assert( game.getHumanBeetle().hasLeg4() );
//    assert( game.getComputerBeetle().hasLeg4() );
//    
//    game.humanRoll(5);
//    game.humanPlay();
//    game.computerRoll(5);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasHead() );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasHead() );
//    
//    game.humanRoll(6);
//    game.humanPlay();
//    game.computerRoll(6);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasBody() );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasBody() );
//    
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasEye1() == false);
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasEye1() == false );
//    
//    game.humanRoll(2);
//    game.humanPlay();
//    game.computerRoll(2);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasAntenna1() == true );
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasAntenna1() == true );
//    
//    game.humanRoll(1);
//    game.humanPlay();
//    game.computerRoll(1);
//    game.computerPlay();
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasEye1());
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasEye1() );
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasEye2() == false);
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasEye2() == false);
//    assert( game.getHumanBeetle().hasAntenna2() == false );
//    assert( game.getComputerBeetle().hasAntenna2() == false );
//    assert( game.gameIsOver() == false );
//    
//    game.humanRoll(2);
//    game.humanPlay();
//    game.computerRoll(2);
//    game.computerPlay();
//    assert( game.getHumanBeetle().hasAntenna2() == true );
//    assert( game.getComputerBeetle().hasAntenna2() == true );
//    assert( game.gameIsOver() == false );
//    assert( game.getHumanBeetle().isComplete() == false );
//    assert( game.getHumanBeetle().hasEye2() == false);
//    assert( game.getComputerBeetle().isComplete() == false );
//    assert( game.getComputerBeetle().hasEye2() == false);
//    
//    game.humanRoll(2);
//    game.humanPlay();
//    game.computerRoll(2);
//    game.computerPlay();
//    assert( game.getHumanBeetle().hasAntenna2() == true );
//    assert( game.getComputerBeetle().hasAntenna2() == true );
//    assert( game.gameIsOver() == false );
//    
//    assert(b.convertRollToBodyPart(0) == cs31::Beetle::BodyPart::NOTVALID);
//        assert(b.convertRollToBodyPart(7) == cs31::Beetle::BodyPart::NOTVALID);
//        assert(b.convertRollToBodyPart(-1) == cs31::Beetle::BodyPart::NOTVALID);
//    
//    game.humanRoll(8);  // Cheating with an invalid die value
//       assert(game.getHumanDie() == 8);
//       // Since 8 is invalid, humanPlay should not build any parts.
//       assert(game.humanPlay() == false);
//       assert(game.getHumanBeetle().isComplete() == false);
//    
//    
//    game.humanRoll(2);
//    game.humanPlay();
//    game.computerRoll(1);
//    game.computerPlay();
////    assert( game.getHumanBeetle().isComplete()  );
////    assert( game.getHumanBeetle().hasEye1());
//////    assert( game.getComputerBeetle().isComplete()  );
////    assert( game.getComputerBeetle().hasEye1() );
//////    assert( game.getHumanBeetle().isComplete() );
////    assert( game.getHumanBeetle().hasEye2() );
//////    assert( game.getComputerBeetle().isComplete());
////    assert( game.getComputerBeetle().hasEye2());
////    assert( game.getHumanBeetle().hasAntenna2());
////    assert( game.getComputerBeetle().hasAntenna2());
//    assert( game.gameIsOver());
////    assert(game.determineGameOutcome() == BeetleGame::GameOutcome::HUMANWONGAME);
//    assert(game.determineGameOutcome() == BeetleGame::GameOutcome::COMPUTERWONGAME);

//    
//    cout << "all tests passed!" << endl;
//    
//    BeetleGame game1;
//    Beetle c;
//    
//    c.buildBody();
//    c.buildEye();
//    c.buildEye();
//    assert(c.hasBody() == true);
//    assert(c.hasEye1() == false);
    
    
    std::string action, spots, message = "(r)oll (q)uit: ";

    BeetleGame game;
    do
    {
        cout << game.display( message ) << endl;
        cin.clear();
        getline( cin, action );
        
        
        while (action.size() == 0)
        {
            getline( cin, action );  // no blank entries allowed....
        }
        switch (action[0])
        {
            default:   // if bad move, nobody moves
                cout << '\a' << endl;  // beep
                continue;
            case 'Q':
            case 'q':
                exit( 0 );
                break;
            case 'r':
            case 'R':
                game.humanRoll();
                cout << "human rolled:" << game.getHumanDie() << endl;
                if (game.humanPlay( ))
                {
                }
                else
                {
                    cout << "no Human move possible!" << endl;
                }
                game.computerRoll();
                cout << "computer rolled:" << game.getComputerDie() << endl;
                if (game.computerPlay())
                {
                }
                else
                {
                    cout << "no Computer move possible!" << endl;
                }
                break;
        }
    } while( !game.gameIsOver() );
    cout << game.display( ) << endl;
    cout << game.stringifyGameOutcome() << endl;
    
             // sample test code working with Die
       
             return( 0 );
     }



void clearScreen();



///////////////////////////////////////////////////////////////////////////
//  clearScreen implementations
///////////////////////////////////////////////////////////////////////////

// DO NOT MODIFY OR REMOVE ANY CODE BETWEEN HERE AND THE END OF THE FILE!!!
// THE CODE IS SUITABLE FOR VISUAL C++, XCODE, AND g++ UNDER LINUX.

// Note to Xcode users:  clearScreen() will just write a newline instead
// of clearing the window if you launch your program from within Xcode.
// That's acceptable.

#ifdef _MSC_VER  //  Microsoft Visual C++

#include <windows.h>

void clearScreen()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    DWORD dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
    COORD upperLeft = { 0, 0 };
    DWORD dwCharsWritten;
    FillConsoleOutputCharacter(hConsole, TCHAR(' '), dwConSize, upperLeft,
                               &dwCharsWritten);
    SetConsoleCursorPosition(hConsole, upperLeft);
}

#else  // not Microsoft Visual C++, so assume UNIX interface

#include <cstring>

void clearScreen()  // will just write a newline in an Xcode output window
{
    using namespace std;
    static const char* term = getenv("TERM");
    if (term == nullptr  ||  strcmp(term, "dumb") == 0)
    {
        cout << endl << endl << endl << endl << endl << endl << endl << endl;
    }
    else
    {
        static const char* ESC_SEQ = "\x1B[";  // ANSI Terminal esc seq:  ESC [
        cout << ESC_SEQ << "2J" << ESC_SEQ << "H" << flush;
    }
}

#endif
