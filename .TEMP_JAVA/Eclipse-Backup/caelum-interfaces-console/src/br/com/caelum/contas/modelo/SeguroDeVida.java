package br.com.caelum.contas.modelo;

public class SeguroDeVida implements Tributavel{
	private double valor;
	private String titular;
	private int apolice;
	
	public SeguroDeVida(double valor, String titular, int apolice){
		this.setValor(valor);
		this.setApolice(apolice);
		this.setTitular(titular);
	}
	
	@Override
	public double getValorImposto(){
		return (42 + (this.getValor() * 0.02)); 
	}
	
	public double getValor() {
		return this.valor;
	}
	
	public void setValor(double valor) {
		this.valor = valor;
	}
	
	public String getTitular() {
		return titular;
	}

	public void setTitular(String titular) {
		this.titular = titular;
	}

	public int getApolice() {
		return apolice;
	}

	public void setApolice(int apolice) {
		this.apolice = apolice;
	}

	public String getTipo() {
		return "Seguro de Vida";
	}
}
