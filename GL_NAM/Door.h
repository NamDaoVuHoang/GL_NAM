#pragma once
#include <stdio.h>
#include "State.h"
#include "Close.h"
#include "Open.h"
#include "Lock.h"

class Door
{
private:
	State* currentState = 0;
public:
	void setState(State* state) {
		currentState = state;
	}
	void closing() {
		currentState->closing();
		//delete currentState;
		setState(new Close());
		printf("%s\n","Door closed");
	}
	void opening() {
		currentState->opening();
		//delete currentState;
		setState(new Open());
		printf("%s\n", "Door opened");
	}
	void unlocking() {
		currentState->unlocking();
		//delete currentState;
		setState(new Close());
		printf("%s\n", "Door unlocked");
	}
	void locking() {
		currentState->locking();
		//delete currentState;
		setState(new Lock());
		printf("%s\n", "Door locked");
	}
};
