#pragma once
#include "StaticObject.h"
class Tree
	: public StaticObject
{
public:
	Tree(int id) {
		this->id = id;
		name = (char*)"Tree";
	}
};

