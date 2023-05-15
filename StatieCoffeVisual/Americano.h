#pragma once
#include "Coffe.h"
#include <string.h>
using namespace std;

class Americano : public Coffe
{
public:
	int getCoffe();
	string getName();
	int getGramsOfMilk();
};

