package org.usp.test02;

import javax.ejb.Stateless;
import javax.ejb.Local;
import javax.ejb.Remote;

@Stateless(name="CalculatorImpl")
@Local ({CalculatorLocal.class})
@Remote ({CalculatorRemote.class})
public class CalculatorImpl implements CalculatorRemote, CalculatorLocal {
	private int c = 0;

	public int count() {
		return ++c;
	}

}
