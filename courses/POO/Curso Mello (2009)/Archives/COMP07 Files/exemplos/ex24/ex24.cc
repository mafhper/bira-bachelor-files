#include "ex24.h"

Demo::Demo ( const char *msg ) {
	strcpy( Nome , msg );
	cout << "Construtor chamado por " << Nome << '\n';
}

Demo::~Demo () {
	cout << "Destrutor chamado por " << Nome << '\n';
}

void Funcao()  {
	Demo ObjetoLocalFuncao( "ObjetoLocalFuncao" );

	static Demo Objetoestatico( "ObjetoEstatico" );
		// Objeto est�tico: Inicializado quando a fun��o for
		// chamada pela primeira vez e destruido no
		// encerramento do programa.

	cout << "Dentro da funcao" << endl;
}

Demo ObjetoGlobal( "ObjetoGlobal" ); 
	// Objeto global : Inicializado no come�o da fun��o 
	// main e destru�do no final da execu��o do 
	// programa.

int main(int argc, char *argv[])
{
	Demo ObjetoLocalMain( "ObjetoLocalMain" );
		// Objeto local: inicializado no come�o do bloco
		// e destru�do no fim do bloco.

	cout << "\nNa main, antes de chamar a funcao" << endl;

	Funcao();

	cout << "\nNa main, depois de chamar a funcao" << endl;

	return 0;
}
