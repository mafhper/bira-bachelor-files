#include <iostream>

using namespace std;

class Teste {
	public:
		virtual void m2() {
			cout << "Teste::m2()" << endl;
		}

		void m1() {
			cout << "Teste::m1()" << endl;
			m2();
		}
};

class TesteFilho: public Teste {
	public:
		void m2() {
			cout << "TesteFilho::m2()" << endl;
		}
};