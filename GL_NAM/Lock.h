#pragma once
#include <stdio.h>
#include "State.h"

class Lock : public State
{
public:
	Lock() {};
	~Lock() {};
	void unlocking() {
		printf("%s\n", "Door Unlocking");
	}
	void locking() {};
	void closing() {};
	void opening() {};
};