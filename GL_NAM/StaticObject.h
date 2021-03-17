#pragma once
#include "BaseObject.h"
class StaticObject :
    public BaseObject
{
public:
    StaticObject() {};
    StaticObject(int id) {
        this->id = id;
    }
    ~StaticObject(){}
};

