#ifndef _C_H_
#define _C_H_

#include <iostream>

using namespace std;

class A {
	public:
	     virtual void m2() { cout << "Sou o A" << endl; }
};

class B : public A {
	public:
	     void m1() { m2(); }
};

class C : public B {
	public:
	     void m2() { cout << "Sou o C" << endl; }
};

#endif