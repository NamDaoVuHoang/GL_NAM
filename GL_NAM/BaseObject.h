#pragma once
#include <stdio.h>
class BaseObject
{
public:
	BaseObject(){}
	BaseObject(int id) {
		this->id = id;
	}
	~BaseObject() {
	};
	char* getName() {
		return name;
	}
	void printPosition() {
		printf("%s\n", position);
	}
	int getId() {
		return id;
	}
	virtual void move() {
		printf("Stopping\n");
	}
protected:
	int id;
	char* name;
	char* position = (char*) "Here";
};

