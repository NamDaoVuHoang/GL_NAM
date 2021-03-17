#pragma once
#include "DynamicObject.h"
class Car
	: public DynamicObject
{
public:
	Car(int id) {
		this->id = id;
		name = (char*) "Car";
	}
};
