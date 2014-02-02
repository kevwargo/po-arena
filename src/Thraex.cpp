#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Gladiator.h"
#include "Thraex.h"

Thraex::Thraex(int h, char *field2) : Gladiator(h)
{
    this->field2 = (char *)malloc(32);
    this->field2[0] = '\0';
    strcat(this->field2, field2);
}

char *Thraex::toString()
{
    char *buf = (char *)malloc(64);
    sprintf(buf, "[field2=%s]", this->field2);
    char *res = strcat(Gladiator::toString(), buf);
    free(buf);
    return res;
}

