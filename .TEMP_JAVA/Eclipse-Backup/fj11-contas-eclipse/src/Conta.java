
public class Conta {
	private double saldo;
	private String titular;
	private int numero;
	private String agencia;

	public boolean sacar(double valor) {
		if (valor <= this.saldo) {
			saldo -= valor;
			return true;
		}
		return false;
	}

	public boolean depositar(double valor) {
		this.saldo += valor;
		return true;
	}

	// GETTER ANS SETTERS
	public double getSaldo() {
		return this.saldo;
	}

	public String getTitular() {
		return titular;
	}

	public void setTitular(String titular) {
		this.titular = titular;
	}

	public int getNumero() {
		return numero;
	}

	public void setNumero(int numero) {
		this.numero = numero;
	}

	public String getAgencia() {
		return agencia;
	}

	public void setAgencia(String agencia) {
		this.agencia = agencia;
	}

}
