#ifndef __WOJOWNIK11_H_INCLUDED_
#define __WOJOWNIK11_H_INCLUDED_

#include "Samnis.h"

class SamnisBestiarius: public Samnis
{
private:
    char *field11;
public:
    SamnisBestiarius(int health, int field1, char *field11);

    virtual void win();
    virtual char *toString();
};


#endif
