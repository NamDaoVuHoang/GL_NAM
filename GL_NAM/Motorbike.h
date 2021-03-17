#pragma once
#include "DynamicObject.h"
class Motorbike
	: public DynamicObject
{
public:
	Motorbike(int id) {
		this->id = id;
		name = (char*) "Motorbike";
	}
};
