package main;

import models.funcionarios.Funcionario;
import models.funcionarios.Gerente;

public class Main {

	public static void main(String[] args) {
		Gerente x = new Gerente();
		x.setSalario(5000);
		System.out.println(x.getBonificacao());
		System.out.println(x.getBonificacaoNatal());
		
		
		Funcionario y = new Funcionario();
		y.setSalario(5000);
		System.out.println(y.getBonificacao());
		System.out.println(y.getBonificacaoNatal());

	}

}
