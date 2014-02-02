#ifndef __WOJOWNIK2_H_INCLUDED_
#define __WOJOWNIK2_H_INCLUDED_

#include "Gladiator.h"

class Thraex: public Gladiator
{
protected:
    char *field2;
public:
    Thraex(int health, char *field2);

    virtual void win() = 0;
    virtual char *toString();
};


#endif
