#include "Door.h"
int main() {
	Door* door = new Door();
	door->setState(new Lock());
	door->unlocking();
	door->opening();
	door->closing();
	door->locking();
	return 0;
}