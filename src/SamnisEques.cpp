#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Gladiator.h"
#include "Samnis.h"
#include "SamnisEques.h"

SamnisEques::SamnisEques(int h, int field1, char *field12) : Samnis(h, field1)
{
    this->field12 = (char *)malloc(32);
    this->field12[0] = '\0';
    strcat(this->field12, field12);
}

char *SamnisEques::toString()
{
    char *buf = (char *)malloc(64);
    sprintf(buf, "[field12=%s]", this->field12);
    char *res = strcat(Samnis::toString(), buf);
    free(buf);
    return res;
}

void SamnisEques::win()
{
    printf("w12 %lx won\n", (long)this);
    this->health += 2;
    strcat(this->field12, ":");
}
