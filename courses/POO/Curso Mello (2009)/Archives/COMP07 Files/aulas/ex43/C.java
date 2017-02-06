class A {
	public void m1() { m2(); }
	public void m2() { System.out.println("Sou o A"); }
}

class B extends A {
	public void m2() { System.out.println("Sou o B"); }
}

public class C extends B {
	public void m2() { System.out.println("Sou o C"); }

	public static void main(String args[]) {
		C c = new C();
		A a = c;
		a.m1();
	}
}
