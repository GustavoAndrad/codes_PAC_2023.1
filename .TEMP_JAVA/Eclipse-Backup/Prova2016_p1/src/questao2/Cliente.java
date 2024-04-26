package questao2;

public class Cliente {
	private String cpf;
	
	public String getCpf() {
		return cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public void comprar(Loja loja, Produto prod) {
		loja.vender(prod);
		System.out.println("Comprando produto");
	}
}
