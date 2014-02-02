#ifndef __WOJOWNIK1_H_INCLUDED_
#define __WOJOWNIK1_H_INCLUDED_

#include "Gladiator.h"

class Samnis: public Gladiator
{
private:
    int field1;
public:
    Samnis(int health, int field1);

    virtual void win() = 0;
    virtual char *toString();
};


#endif
