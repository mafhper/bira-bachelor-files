class Teste {
	public void m1() {
		System.out.println("Teste.m1()");
	}
	public void m2() {
		System.out.println("Teste.m2()");
		m1();
	}
}

public class TesteFilho extends Teste {
	public void m1() {
		System.out.println("TesteFilho.m1()");
	}

	public static void main(String args[]) {
		Teste t = new Teste();
		TesteFilho tf = new TesteFilho();

		t.m2();
		System.out.println();
		tf.m2();
	}
}