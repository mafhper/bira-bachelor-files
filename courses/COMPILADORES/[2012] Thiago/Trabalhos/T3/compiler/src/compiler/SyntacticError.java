package compiler;

/**
 * Mensagem de erro do compilador.
 *
 */
public class SyntacticError extends CompilationError {

    /**
     * Cria uma mensagem de erro do compilador.
	 *
	 * @param t
	 * O token que causou o erro.
	 *
     * @param msg
	 * A mensagem de erro.
     */
    public SyntacticError(Token t, String msg) {
		super(t, msg);
    }

}
