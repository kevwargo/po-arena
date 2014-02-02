#ifndef __WOJOWNIK12_H_INCLUDED_
#define __WOJOWNIK12_H_INCLUDED_

#include "Samnis.h"

class SamnisEques: public Samnis
{
private:
    char *field12;
public:
    SamnisEques(int health, int field1, char *field12);

    virtual void win();
    virtual char *toString();
};


#endif
