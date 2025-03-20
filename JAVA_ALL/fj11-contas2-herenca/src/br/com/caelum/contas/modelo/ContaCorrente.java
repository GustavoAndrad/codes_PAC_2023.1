package br.com.caelum.contas.modelo;

public class ContaCorrente extends Conta{
	public String getTipo() {
		return "Conta Corrente";
	}
	
	/**
	 * Método para incrementar aslao
	 * @param valor
	 */
	@Override
	public boolean sacar(double valor) {
		if (valor <= this.saldo) {
			this.saldo -= (valor + 0.10);
			return true;
		}
		return false;
	}
}
