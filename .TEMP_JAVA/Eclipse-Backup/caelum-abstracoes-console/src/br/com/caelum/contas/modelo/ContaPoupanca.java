package br.com.caelum.contas.modelo;

public class ContaPoupanca extends Conta{

	public ContaPoupanca(String titular, int numero, String agencia) {
		super(titular, numero, agencia);
	}
	
	@Override
	public String getTipo() {
		return "Conta Poupança";
	}

}
