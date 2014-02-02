#ifndef __WOJOWNIK21_H_INCLUDED_
#define __WOJOWNIK21_H_INCLUDED_

#include "Gladiator.h"
#include "Thraex.h"

class ThraexEssedarius: public Thraex
{
private:
    int field21;
public:
    ThraexEssedarius(int health, char *field2, int field21);

    virtual void win();
    virtual char *toString();
};


#endif
