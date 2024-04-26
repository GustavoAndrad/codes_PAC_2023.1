package br.com.caelum.contas.modelo;

/**
 * @author Gustavo Andrade
 *	Modelo de Conta
 */

public class Conta {
	protected double saldo;
	private String titular;
	private int numero;
	private String agencia;
	
	/**
	 * Constructor único. Parametros obrigatorios
	 * @param titular
	 * @param numero
	 * @param agencia
	 */
	public Conta(String titular, int numero, String agencia) {
		this.setTitular(titular);
		this.setAgencia(agencia);
		this.setNumero(numero);
	}
	
	
	/**
	 * Decrementar saldo
	 * @param valor
	 * @return
	 */
	public boolean sacar(double valor) {
		if (valor <= this.saldo && valor>0) {
			this.saldo -= valor;
			return true;
		}
		return false;
	}
	
	/**
	 * Incrementar saldo
	 * @param valor
	 */
	public void depositar(double valor) {
		this.saldo += valor; 
	}
	
	public boolean tranferir(double valor, Conta destino) {
		if(sacar(valor)) {
			destino.depositar(valor);
			return true;
		}
		return false;
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

	public double getSaldo() {
		return saldo;
	}
	
	/**
	 * Método sobrescrito nas classes filhas
	 * @return
	 */
	public String getTipo() {
		return "no-type";
	}

}
