#ifndef __WOJOWNIK_H_INCLUDED_
#define __WOJOWNIK_H_INCLUDED_

class Gladiator
{
private:
    char *strbuffer;

public:
    int health;
    
    Gladiator(int health);
    ~Gladiator();

    virtual Gladiator *operator+(Gladiator *other);
    virtual void win() = 0;
    virtual char *toString();
};

#endif
