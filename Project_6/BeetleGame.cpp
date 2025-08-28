#include "BeetleGame.h"
#include "BeetleDrawing.h"
#include <iostream>

namespace cs31
{

BeetleGame::BeetleGame() : mHuman(), mComputer(), mHumanDie(), mComputerDie()
{ }

std::string BeetleGame::display(std::string msg) const
{
    BeetleDrawing drawing(mHuman, mComputer);
    return drawing.draw() + "\n" + msg;
}

void BeetleGame::humanRoll(int amount)
{
    if (amount == 0)
        mHumanDie.roll();
    else
        mHumanDie.setValue(amount);
}

int BeetleGame::getHumanDie() const
{
    return mHumanDie.getValue();
}

bool BeetleGame::humanPlay()
{
    int dieValue = mHumanDie.getValue();
    Beetle::BodyPart part = mHuman.convertRollToBodyPart(dieValue);
    bool success = false;
    
    switch (part)
    {
        case Beetle::BodyPart::BODY:
            if (!mHuman.hasBody())
            {
                mHuman.buildBody();
                success = true;
            }
            break;
        case Beetle::BodyPart::HEAD:
            if (mHuman.hasBody() && !mHuman.hasHead())
            {
                mHuman.buildHead();
                success = true;
            }
            break;
        case Beetle::BodyPart::TAIL:
            if (mHuman.hasBody() && !mHuman.hasTail())
            {
                mHuman.buildTail();
                success = true;
            }
            break;
        case Beetle::BodyPart::LEG:
            if (mHuman.hasBody() && (!mHuman.hasLeg1() || !mHuman.hasLeg2() ||
                                      !mHuman.hasLeg3() || !mHuman.hasLeg4()))
            {
                mHuman.buildLeg();
                success = true;
            }
            break;
        case Beetle::BodyPart::EYE:
            if (mHuman.hasBody() && mHuman.hasHead() && (!mHuman.hasEye1() || !mHuman.hasEye2()))
            {
                mHuman.buildEye();
                success = true;
            }
            break;
        case Beetle::BodyPart::ANTENNA:
            if (mHuman.hasBody() && mHuman.hasHead() && (!mHuman.hasAntenna1() || !mHuman.hasAntenna2()))
            {
                mHuman.buildAntenna();
                success = true;
            }
            break;
        default:
            break;
    }
    
    return success;
}

void BeetleGame::computerRoll(int amount)
{
    if (amount == 0)
        mComputerDie.roll();
    else
        mComputerDie.setValue(amount);
}

int BeetleGame::getComputerDie() const
{
    return mComputerDie.getValue();
}

bool BeetleGame::computerPlay()
{
    int dieValue = mComputerDie.getValue();
    Beetle::BodyPart part = mComputer.convertRollToBodyPart(dieValue);
    bool success = false;
    
    switch (part)
    {
        case Beetle::BodyPart::BODY:
            if (!mComputer.hasBody())
            {
                mComputer.buildBody();
                success = true;
            }
            break;
        case Beetle::BodyPart::HEAD:
            if (mComputer.hasBody() && !mComputer.hasHead())
            {
                mComputer.buildHead();
                success = true;
            }
            break;
        case Beetle::BodyPart::TAIL:
            if (mComputer.hasBody() && !mComputer.hasTail())
            {
                mComputer.buildTail();
                success = true;
            }
            break;
        case Beetle::BodyPart::LEG:
            if (mComputer.hasBody() && (!mComputer.hasLeg1() || !mComputer.hasLeg2() ||
                                         !mComputer.hasLeg3() || !mComputer.hasLeg4()))
            {
                mComputer.buildLeg();
                success = true;
            }
            break;
        case Beetle::BodyPart::EYE:
            if (mComputer.hasBody() && mComputer.hasHead() && (!mComputer.hasEye1() || !mComputer.hasEye2()))
            {
                mComputer.buildEye();
                success = true;
            }
            break;
        case Beetle::BodyPart::ANTENNA:
            if (mComputer.hasBody() && mComputer.hasHead() && (!mComputer.hasAntenna1() || !mComputer.hasAntenna2()))
            {
                mComputer.buildAntenna();
                success = true;
            }
            break;
        default:
            break;
    }
    
    return success;
}

BeetleGame::GameOutcome BeetleGame::determineGameOutcome() const
{
    if (mHuman.isComplete())
        return GameOutcome::HUMANWONGAME;
    else if (mComputer.isComplete())
        return GameOutcome::COMPUTERWONGAME;
    else
        return GameOutcome::GAMENOTOVER;
}

std::string BeetleGame::stringifyGameOutcome() const
{
    switch (determineGameOutcome())
    {
        case GameOutcome::HUMANWONGAME:
            return "Human Won!";
        case GameOutcome::COMPUTERWONGAME:
            return "Computer Won!";
        default:
            return "Game Not Over!";
    }
}

bool BeetleGame::gameIsOver() const
{
    return determineGameOutcome() != GameOutcome::GAMENOTOVER;
}

Beetle BeetleGame::getHumanBeetle() const { return mHuman; }
Beetle BeetleGame::getComputerBeetle() const { return mComputer; }

}
