#include "ex23.h"

Vector *funcao1(int n) {
	cout << "chamando funcao 1" << endl;
	Vector v(n);
	Vector *p = new Vector(n);
	return p;
}
void funcao2() {
	cout << "chamando funcao 2" << endl;
	Vector *pont = funcao1(20);
	delete pont;
}
int main(int argc, char *argv[]) {
	funcao2();
	Vector *v = new Vector(0);
	cout << "v = " << v << endl;
	return 0;
}
