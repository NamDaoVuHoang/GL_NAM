#pragma once
#include "BaseObject.h"
class DynamicObject 
	: public BaseObject
{
public:
	DynamicObject(){}
	DynamicObject(int id) {
		this->id = id;
	}
	~DynamicObject(){}
	virtual void move(){
		printf("Moving\n");
	}
};

