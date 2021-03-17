#include "Objects.h"
#include "BaseObject.h"
#include "Car.h"
#include "Tree.h"
#include "Motorbike.h"
#include "House.h"
int main() {
	BaseObject *listObj[4];
	Tree *p = new Tree(0);
	listObj[0] = p;
	Car* q = new Car(1);
	listObj[1] = q;
	Motorbike* g = new Motorbike(2);
	listObj[2] = g;
	House* h = new House(3);
	listObj[3] = h;

	for (int i = 0; i < 4; i++) {
		listObj[i]->getName();
	}
	for (int i = 0; i < 4; i++) {
		listObj[i]->move();
	}
	for (int i = 0; i < 4; i++) {
		listObj[i]->printPosition();
	}
	void * pp = &listObj;
	//work(4, *listObj);
	delete[] listObj;
	return 0;
} 