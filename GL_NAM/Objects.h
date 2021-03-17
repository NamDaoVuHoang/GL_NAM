#pragma once
#include <stdio.h>
class Objects
{
public:
	Objects(){}
	Objects(int id, char *name, char *position){
		this->id = id;
		this->name = name;
		this->position = position;
	}
	~Objects(){
		delete &id;
		delete name;
		delete position;
	}
	char * getName() {
		return name;
	}
	void move(){}
	void printPosition() {
		printf("%s\n", position);
	}
private:
	int id = 0;
	char* name = (char*) "Tree";
	char* position = (char*) "Car";
};

