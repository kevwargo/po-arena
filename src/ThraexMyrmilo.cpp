#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Gladiator.h"
#include "Thraex.h"
#include "ThraexMyrmilo.h"

ThraexMyrmilo::ThraexMyrmilo(int h, char *field2, int field22) : Thraex(h, field2)
{
    this->field22 = field22;
}

char *ThraexMyrmilo::toString()
{
    char *buf = (char *)malloc(64);
    sprintf(buf, "[field22=%d]", this->field22);
    char *res = strcat(Thraex::toString(), buf);
    free(buf);
    return res;
}

void ThraexMyrmilo::win()
{
    printf("w22 %lx won\n", (long)this);
    this->health += 2;
    strcat(this->field2, "+");
}
