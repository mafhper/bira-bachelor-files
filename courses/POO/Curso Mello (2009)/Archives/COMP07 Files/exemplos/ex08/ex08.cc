#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int *i;
	int a = 5;

	i = &a;

	cout << "valor de a " << a << endl;
	cout << "endere�o de a " << &a << endl;

	cout << endl;
	
	cout << "endere�o de i " << &i << endl;
	cout << "conteudo de i " << i << endl;
	cout << "valor apontado por i " << *i << endl;

	return 0;
}