package br.com.caelum.contas.modelo;

public class ContaCorrente extends Conta implements Tributavel{

	public ContaCorrente(String titular, int numero, String agencia) {
		super(titular, numero, agencia);
	}
	
	@Override
	public String getTipo() {
		return "Conta Corrente";
	}
	
	/**
	 * Contas correntes sobrescrevem super.sacar() retirando 0.10 de cada saque
	 */
	@Override
	public boolean sacar(double valor) {
		double valorCorrente = valor + 0.10;
		if (valor <= this.saldo && valor>0) {
			this.saldo -= valorCorrente;
			return true;
		}
		return false;
	}

	@Override
	public double getValorImposto() {
		return (this.getSaldo() * 0.01);
	}
	
}
