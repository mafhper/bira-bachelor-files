#include "ex46.h"

int main(int argc, char *argv[]) {
	Televisao *t = new Televisao("Basico", 100);

	t->print();

	cout << endl;

	DiamondTV *tv = new DiamondTV("Diamond Vision", 90);

	tv->print();
	cout << endl;

	tv->mudarVolume(+5);
	tv->mudarVolume(-2);
	tv->print();

	return 0;
}