class A {
	private int a = 1;
	protected int b = 2;
	public int c = 3;
	int d = 4; // sem modificador -> package
}
class B {
	public void teste() {
		A a = new A();
		//System.out.println(a.a);
		System.out.println(a.b); // filha e mesmo diretório
		System.out.println(a.c);
		System.out.println(a.d); // mesmo diretorio
	}
}
public class Exemplo2 {
	public static void main(String args[]) {
		B b = new B();
		b.teste();
	}
}
