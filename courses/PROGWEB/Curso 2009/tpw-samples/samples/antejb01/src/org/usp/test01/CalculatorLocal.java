package org.usp.test01;

import javax.ejb.Local;

//START SNIPPET: code
@Local
public interface CalculatorLocal {
	public int sum(int add1, int add2);
	public int multiply(int mul1, int mul2);
}
//END SNIPPET: code
