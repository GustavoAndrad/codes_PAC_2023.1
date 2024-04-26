package br.com.caelum.contas;

import java.util.ArrayList;
import java.util.List;

import br.com.caelum.contas.modelo.SeguroDeVida;

/*
 * Classe que intermedia a comunicação entre as ações de seguro e a interface do usuario
 */

public class ManipuladorSeguroDeVida {
	private static List<SeguroDeVida> Seguros = new ArrayList<>();
	
	public static void criaSeguro(int valor, String titular, int apolice) {
		SeguroDeVida seguro = new SeguroDeVida(valor, titular, apolice);
		Seguros.add(seguro);
	}
	
	public static void mostraSeguro(int index) {
		SeguroDeVida seguro = Seguros.get(index);
		System.out.printf("| %-10.2f | %-15s | %-7d |\n",
				seguro.getValor(), seguro.getTitular(), seguro.getApolice());
	}
	
	public static void mostraSeguroTributavel(int index) {
		SeguroDeVida seguro = Seguros.get(index);
		System.out.printf("| %-15s | %-15s | %-10.2f |\n",
				seguro.getTipo(), seguro.getTitular(), seguro.getValorImposto());
	}
}
