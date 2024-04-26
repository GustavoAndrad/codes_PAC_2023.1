package testes_interfaces_funcionarios;

public class Cliente implements Autenticavel {

	@Override
	public String autentica(int senha) {
		return "Cliente logado";
	}

}
