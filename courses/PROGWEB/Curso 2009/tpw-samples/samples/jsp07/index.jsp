<jsp:include page="header.jsp" />
<!-- chama header para execu��o e depois inclui aqui -->

	<form action="index_action.jsp">
	<tr><td><table align="center" size="50%" border="0" cellspacing="10">
		<tr><td class="titulo2" colspan="2">Preencha suas informa��es:</td></tr>
		<tr><td colspan="2">&nbsp;</td></tr>
		<tr><td class="campo">Nome:</td><td><input type="text" name="nome" size="40"></td></tr>
		<tr><td class="campo">Endere�o:</td><td><input type="text" name="endereco" size="50"></td></tr>
		<tr><td align="center" colspan="2"><input type="submit" name="enviar" value="Enviar"></td></tr>
	</table></td></tr>
	</form>

<!-- inclui primeiro e depois processa -->
<%@ include file="footer.jsp" %>
