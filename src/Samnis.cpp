#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Gladiator.h"
#include "Samnis.h"

Samnis::Samnis(int h, int field1) : Gladiator(h)
{
    this->field1 = field1;
}

char *Samnis::toString()
{
    char *buf = (char *)malloc(64);
    sprintf(buf, "[field1=%d]", this->field1);
    char *res = strcat(Gladiator::toString(), buf);
    free(buf);
    return res;
}
