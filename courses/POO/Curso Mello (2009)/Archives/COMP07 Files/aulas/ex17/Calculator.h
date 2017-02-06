#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include "Stack.h"
#include "globals.h"
#include <math.h>

class Calculator {
	private:
		Stack<DATA_TYPE *> *stk;

	public:
		Calculator(int size) {
			stk = new Stack<DATA_TYPE *>(size);
		}

		~Calculator() {
			delete stk;
		}

		void input(float value) {
			DATA_TYPE *d = (DATA_TYPE *) malloc(sizeof(DATA_TYPE));
			d->flag = 1;
			d->value.data = value;
			stk->push(d);
		}

		void op(char o) {
			if (o == '=') {
				// processar a pilha
			} else {
				DATA_TYPE *d = (DATA_TYPE *) 
					malloc(sizeof(DATA_TYPE));
				d->flag = 0;
				d->value.opt = o;
				stk->push(d);
			}
		}

		DATA_TYPE *getResult() {
			return stk->getTop();
		}
};

#endif
