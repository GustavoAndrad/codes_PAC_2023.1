package testes_interfaces_funcionarios;

public abstract class Secretaria extends Funcionario implements Autenticavel{
	private double fluxoCaixa=0;

	public double getFluxoCaixa() {
		return fluxoCaixa;
	}

	public void setFluxoCaixa(double fluxoCaixa) {
		this.fluxoCaixa = fluxoCaixa;
	}

	@Override
	public String autentica(int senha) {
		return "Secretaria Logada";
	}	
	
}
