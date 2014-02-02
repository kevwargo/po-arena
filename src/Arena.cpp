#include <cstdio>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <algorithm>
#include "Gladiator.h"
#include "SamnisBestiarius.h"
#include "SamnisEques.h"
#include "ThraexEssedarius.h"
#include "ThraexMyrmilo.h"

using namespace std;

template <class T>
class Arena
{
private:
    std::vector<T> wojowniki;
public:
    Arena();
    void operator+=(T w);
    void operator-=(T w);
    void print();
    void turniej();
    void main();
};

template <class T>
Arena<T>::Arena()
{
    // this->wojowniki = new std::vector<T>();
}

template <class T>
void Arena<T>::operator+=(T w)
{
    this->wojowniki.push_back(w);
}

template <class T>
void Arena<T>::operator-=(T w)
{
    this->wojowniki.erase(std::remove(this->wojowniki.begin(),
                                      this->wojowniki.end(), w),
                          this->wojowniki.end());
}

template <class T>
void Arena<T>::print()
{
    for (int i = 0; i < this->wojowniki.size(); i++)
        printf("%s\n", this->wojowniki[i]->toString());
}

template <class T>
void Arena<T>::turniej()
{
    int i = rand() % this->wojowniki.size();
    int j = i;
    while (j == i)
        j = rand() % this->wojowniki.size();
    printf("%d %d\n", i, j);
    *this -= (*this->wojowniki[i] + this->wojowniki[j]);
}

template <class T>
void Arena<T>::main()
{
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
        switch (rand() % 4)
        {
            case 0:
                *this += new SamnisBestiarius(rand() % 15, rand() % 10, "w11");
                break;
            case 1:
                *this += new SamnisEques(rand() % 15, rand() % 10, "w12");
                break;
            case 2:
                *this += new ThraexEssedarius(rand() % 15, "w21", rand() % 10);
                break;
            case 3:
                *this += new ThraexMyrmilo(rand() % 15, "w22", rand() % 10);
        }
    this->print();
    while (this->wojowniki.size() > 1)
    {
        int i = rand() % this->wojowniki.size();
        int j = i;
        while (i == j)
            j = rand() % this->wojowniki.size();
        *this -= (*this->wojowniki[i] + this->wojowniki[j]);
        this->print();
    }
}

int main()
{
    srand(time(NULL));
    Arena<Gladiator *> a;
    a.main();
}
