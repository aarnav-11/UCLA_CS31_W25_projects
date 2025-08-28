//
//  Beetle.cpp
//
//

#include "Beetle.h"

namespace cs31
{

Beetle::Beetle()
{
    mBody = false;
    mTail = false;
    mLeg1 = false;
    mLeg2 = false;
    mLeg3 = false;
    mLeg4 = false;
    mHead = false;
    mEye1 = false;
    mEye2 = false;
    mAntenna1 = false;
    mAntenna2 = false;
}

// convert a tossed die value into a BodyPart
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

// build the Beetle's body
void Beetle::buildBody()
{
    // for now...
    
}

// has the Beetle's body been built?
bool Beetle::hasBody() const
{
    // for now...
    return( false );
}

// build the Beetle's tail but only if the body has already been built
void Beetle::buildTail()
{
    // for now...
    
}

// has the Beetle's tail been built?
bool Beetle::hasTail() const
{
    // for now...
    return( false );
}

// build the Beetle's leg but only if the body has already been built
void Beetle::buildLeg()
{
    // for now...
    
}

// has the Beetle's leg been built?
bool Beetle::hasLeg1() const
{
    // for now...
    return( false );
}

bool Beetle::hasLeg2() const
{
    // for now...
    return( false );
}

bool Beetle::hasLeg3() const
{
    // for now...
    return( false );
}

bool Beetle::hasLeg4() const
{
    // for now...
    return( false );
}

// build the Beetle's head but only if the body has already been built
void Beetle::buildHead()
{
    // for now...
    
}

// has the Beetle's head been built?
bool Beetle::hasHead() const
{
    // for now...
    return( false );
}

// build the Beetle's eye but only if the head has already been built
void Beetle::buildEye()
{
    // for now...
    
}

// has the Beetle's eye been built?
bool Beetle::hasEye1() const
{
    // for now...
    return( false );
}

bool Beetle::hasEye2() const
{
    // for now...
    return( false );
}

// build the Beetle's antenna but only if the head has already been built
void Beetle::buildAntenna()
{
    // for now...
    
}

// has the Beetle's antenna been built?
bool Beetle::hasAntenna1() const
{
    // for now...
    return( false );
}

bool Beetle::hasAntenna2() const
{
    // for now...
    return( false );
}


// is this Beetle completely built out?
bool Beetle::isComplete() const
{
    // for now...
    return( false );
}


}


