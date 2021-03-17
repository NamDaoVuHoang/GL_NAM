#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	do {
		cin >> n;
	} while (n < 0);
	cout << n;
	return 0;
}