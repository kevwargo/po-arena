#include <cstdio>
#include <cstdlib>
#include "Gladiator.h"

using namespace std;

Gladiator::Gladiator(int health)
{
    this->health = health;
    this->strbuffer = (char *)malloc(1024);
}

Gladiator::~Gladiator()
{
    free(this->strbuffer);
}

char *Gladiator::toString()
{
    sprintf(this->strbuffer, "%lx:[health=%d]", (long)this, this->health);
    return this->strbuffer;
}

Gladiator *Gladiator::operator+(Gladiator *other)
{
    if (this->health > other->health)
    {
        this->win();
        return other;
    }
    other->win();
    return this;
}
