//
//  Beetle.cpp
//
//

#include "Beetle.h"

namespace cs31
{

Beetle::Beetle()
  : mBody(false), mTail(false), mLeg1(false), mLeg2(false), mLeg3(false), mLeg4(false),
    mHead(false), mEye1(false), mEye2(false), mAntenna1(false), mAntenna2(false)
{ }

// Note: convertRollToBodyPart is implemented inline in the header.
Beetle::BodyPart Beetle::convertRollToBodyPart( int die ) const
{
    // if not matching, then return NOTVALID
    BodyPart part = BodyPart::NOTVALID;
    if (die == 6)
        part = BodyPart::BODY;
    if (die == 5)
        part = BodyPart::HEAD;
    if (die == 4)
        part = BodyPart::TAIL;
    if (die == 3)
        part = BodyPart::LEG;
    if (die == 2)
        part = BodyPart::ANTENNA;
    if (die == 1)
        part = BodyPart::EYE;
    return( part );
}

void Beetle::buildBody(){
    mBody = true;
}

bool Beetle::hasBody() const{
    return mBody;
}

void Beetle::buildTail(){
//    if (mBody && !mTail)
        mTail = true;
}

bool Beetle::hasTail() const{
    return mTail;
}

void Beetle::buildLeg(){
//    if (mBody)
//    {
        if (!mLeg1)
            mLeg1 = true;
        else if (!mLeg2)
            mLeg2 = true;
        else if (!mLeg3)
            mLeg3 = true;
        else if (!mLeg4)
            mLeg4 = true;
//    }
}

bool Beetle::hasLeg1() const{
    return mLeg1;
}

bool Beetle::hasLeg2() const{
    return mLeg2;
}

bool Beetle::hasLeg3() const{
    return mLeg3;
}

bool Beetle::hasLeg4() const{
    return mLeg4;
}

void Beetle::buildHead(){
//    if (mBody && !mHead)
        mHead = true;
}

bool Beetle::hasHead() const{
    return mHead;
}

void Beetle::buildEye(){
//    if (mHead)
//    {
        if (!mEye1)
            mEye1 = true;
        else if (!mEye2)
            mEye2 = true;
//    }
}

bool Beetle::hasEye1() const{
    return mEye1;
}

bool Beetle::hasEye2() const{
    return mEye2;
}

void Beetle::buildAntenna(){
//    if (mHead)
//    {
        if (!mAntenna1)
            mAntenna1 = true;
        else if (!mAntenna2)
            mAntenna2 = true;
//    }
}

bool Beetle::hasAntenna1() const{
    return mAntenna1;
}

bool Beetle::hasAntenna2() const{
    return mAntenna2;
}

bool Beetle::isComplete() const{
    return mBody && mTail && mHead &&
           mLeg1 && mLeg2 && mLeg3 && mLeg4 &&
           mEye1 && mEye2 &&
           mAntenna1 && mAntenna2;
}

}


