#pragma once
#include <string>

using namespace std;

class Coffe
{
public:
    virtual int getCoffe() = 0;
    virtual string getName() = 0;
    int getGramsOfMilk();
};
