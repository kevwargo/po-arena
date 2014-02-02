#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Gladiator.h"
#include "Thraex.h"
#include "ThraexEssedarius.h"

ThraexEssedarius::ThraexEssedarius(int h, char *field2, int field21) : Thraex(h, field2)
{
    this->field21 = field21;
}

char *ThraexEssedarius::toString()
{
    char *buf = (char *)malloc(64);
    sprintf(buf, "[field21=%d]", this->field21);
    char *res = strcat(Thraex::toString(), buf);
    free(buf);
    return res;
}

void ThraexEssedarius::win()
{
    printf("w21 %lx won\n", (long)this);
    this->health += 1;
    strcat(this->field2, ".");
}
