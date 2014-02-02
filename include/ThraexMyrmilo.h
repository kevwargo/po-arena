#ifndef __WOJOWNIK22_H_INCLUDED_
#define __WOJOWNIK22_H_INCLUDED_

#include "Gladiator.h"
#include "Thraex.h"

class ThraexMyrmilo: public Thraex
{
private:
    int field22;
public:
    ThraexMyrmilo(int health, char *field2, int field22);

    virtual void win();
    virtual char *toString();
};


#endif
