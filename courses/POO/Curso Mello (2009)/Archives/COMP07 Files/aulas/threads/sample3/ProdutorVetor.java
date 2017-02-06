public class ProdutorVetor extends Thread {
	private RecursoVetor r;

	public ProdutorVetor(RecursoVetor r) { this.r = r; }

	public void run() {
		int val = 0;
		while (true) {
			r.put(val);
			val = val + 10;
			try { Thread.sleep(100); } catch (Exception e) {}
		}
	}

	public static void main(String args[]) {
		RecursoVetor r = new RecursoVetor();
		ProdutorVetor p = new ProdutorVetor(r);
		ConsumidorVetor c = new ConsumidorVetor(r);
		p.start();
		c.start();
	}
}

class ConsumidorVetor extends Thread {
	private RecursoVetor r;

	public ConsumidorVetor(RecursoVetor r) { this.r = r; }

	public void run() {
		while (true) {
			int v[] = r.get();
			for (int i = 0; i < v.length; i++)
				System.out.print(v[i]+" ");
			System.out.println();
			try { Thread.sleep(100); } catch (Exception e) {}
		}
	}
}

class RecursoVetor {
	private int[] n;

	public RecursoVetor() { this.n = new int[10]; }
	public void put(int v) { 
		for (int i = 0; i < 10; i++) {
			n[i] = v + i;
			try { Thread.sleep(100); } catch (Exception e) {}
		}
	}
	public int[] get() { return this.n; }
}