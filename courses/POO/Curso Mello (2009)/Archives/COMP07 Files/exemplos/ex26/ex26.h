#include <iostream>

using namespace std;

class Veiculo {
	private:
		char *placa;
		char *marca;
		char *modelo;
		int ano;
	public:
		Veiculo(char *pl, char *ma, char *mo, int an);
		void print();
};

class Caminhao: public Veiculo {
	private:
		float capacidade;
	public:
		Caminhao(char *pl, char *ma, char *mo, int an, float ca);
};