package models.funcionarios;

public class Gerente extends Funcionario{
	private int senha;
	private int qntGerenciados;
	
	@Override
	public double getBonificacao() {
		return this.salario * 0.15;
	}
	
	//invocando o metodo na superclasse
	public double getBonificacaoNatal() {
		return super.getBonificacaoNatal() + 1000.00;
	}
}
