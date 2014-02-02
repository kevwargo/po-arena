#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Gladiator.h"
#include "Samnis.h"
#include "SamnisBestiarius.h"

SamnisBestiarius::SamnisBestiarius(int h, int field1, char *field11) : Samnis(h, field1)
{
    this->field11 = (char *)malloc(32);
    this->field11[0] = '\0';
    strcat(this->field11, field11);
}

char *SamnisBestiarius::toString()
{
    char *buf = (char *)malloc(64);
    sprintf(buf, "[field11=%s]", this->field11);
    char *res = strcat(Samnis::toString(), buf);
    free(buf);
    return res;
}

void SamnisBestiarius::win()
{
    printf("w11 %lx won\n", (long)this);
    this->health += 3;
    strcat(this->field11, "|");
}
