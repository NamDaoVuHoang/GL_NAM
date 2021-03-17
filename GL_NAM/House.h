#pragma once
#include "StaticObject.h"
class House
	: public StaticObject
{
public:
	House(int id) 
	{
		this->id = id;
		name = (char*)"House";
	}
};
