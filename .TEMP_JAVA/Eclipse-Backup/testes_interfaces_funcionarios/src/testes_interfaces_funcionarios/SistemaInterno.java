package testes_interfaces_funcionarios;

public class SistemaInterno {
	public static void  main(String[] args) {
		Funcionario d = new Diretor();
		//se s1 fosse funcionario, não haveria acesso ao fluxo de caixa, já que ele veria como um funcionario
		Secretaria s1 = new SecretariaAgencia();
		Cliente c = new Cliente();
		
		System.out.println(s1.getFluxoCaixa());
		System.out.println(s1.getBonificacao());
		System.out.println(d.getBonificacao());
		
		//faço casting deles pra autenticavel pq a interface esta acima na hierarquia. 
		// e o login recebe obrigatoriamnete um auntenticavel
		SistemaInterno.login((Autenticavel) d, 1);
		SistemaInterno.login((Autenticavel) s1, 1);
		SistemaInterno.login((Autenticavel) c, 1);
	}
	
	public static void login(Autenticavel a, int senha) {
		System.out.println(a.autentica(senha));
	}
}
