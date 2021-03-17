#pragma once
#include "State.h"
#include <stdio.h>

class Open : public State 
{
public:
	Open() {};
	~Open() {};
	void closing() {
		printf("%s\n", "Door closing");
	}
	void opening() {};
	void locking() {};
	void unlocking() {};
};
