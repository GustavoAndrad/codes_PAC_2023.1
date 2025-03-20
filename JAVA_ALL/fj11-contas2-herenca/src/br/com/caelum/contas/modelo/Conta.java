package br.com.caelum.contas.modelo;

/**
 * Classe respoável por moldar as contas
 * 
 * @author Gustavo Barros
 */

public class Conta {
	protected double saldo;
	private String titular;
	private int numero;
	private String agencia;
	
	/**
	 * Método para incrementar saldo
	 * @param valor
	 */
	public boolean sacar(double valor) {
		if (valor <= this.saldo) {
			this.saldo -= valor;
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

	public String getTipo() {
		return "Conta Genérica";
	}

}
