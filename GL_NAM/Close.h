#pragma once
#include "State.h"
#include <stdio.h>
using namespace std;
class Close : public State
{
public:
	Close() {};
	~Close() {};
	void opening() {
		printf("%s\n", "Door opening");
	}
	void locking() {
		printf("%s\n", "Door locking");
	}
	
	void closing() {};
	void unlocking() {};
};