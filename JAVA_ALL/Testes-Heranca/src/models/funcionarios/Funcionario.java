package models.funcionarios;

public class Funcionario {
	protected String nome;
	protected String cpf;
	protected double salario;
	
	public void setSalario(double salario) {
		this.salario = salario;
	}
	
	public double getBonificacao() {
		// funcionarios padrao tem 10%
		return this.salario * 0.10;
	}
	
	public double getBonificacaoNatal() {
		return salario ;
	}
}
