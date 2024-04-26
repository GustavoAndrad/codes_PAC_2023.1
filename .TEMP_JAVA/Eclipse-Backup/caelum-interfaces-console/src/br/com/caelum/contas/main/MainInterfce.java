package br.com.caelum.contas.main;


import br.com.caelum.contas.ManipuladorDeContas;
import br.com.caelum.contas.ManipuladorSeguroDeVida;

public class MainInterfce {
	public static void main(String[] args){
		System.out.println("---------------------- SISTEMA DO BANCO ----------------------");
		
		int qntContas = 5;
		
		criaContasGenericas(qntContas);
		mostraContas(qntContas);
		
		ManipuladorSeguroDeVida.criaSeguro(10, "Gustavo", 12378);
		ManipuladorSeguroDeVida.criaSeguro(10, "Lara", 34568);
		ManipuladorSeguroDeVida.criaSeguro(10, "Joao", 34689);
		
		mostraSeguros(3);
		
		mostraTributaveis(3, qntContas);
		
	}
	
	public static void criaContasGenericas(int qntContas) {
		for (int i = 0; i < qntContas; i++) {
			String tipo = "";
			if (i % 2 == 0) {
				tipo = "p";
			} else {
				tipo = "c";
			}
			boolean contaCriada = ManipuladorDeContas.criaConta("Pessoa " + (i+1), i+1, "Agencia " + (i+1), tipo);
			if (!contaCriada) {
				System.out.println("Erro ao criar conta " + i);
			}
		}
		
	}
	
	public static void mostraContas(int qntContas) {
		System.out.print("\n------------------------------CONTAS----------------------------------");
		System.out.println("\n---------------------------------------------------------------------");
		System.out.printf("| %-10s | %-10s | %-10s | %-10s | %-14s |\n", "Titular", "Número", "Saldo", "Agência", "Tipo");
		System.out.println("---------------------------------------------------------------------");

		for (int i = 0; i < qntContas; i++) {
			ManipuladorDeContas.mostraConta(i);
			System.out.println("---------------------------------------------------------------------");
		}
	}
	
	public static void mostraSeguros(int qntSeguros) {
		System.out.print("\n-----------------SEGUROS------------------");
		System.out.println("\n------------------------------------------");
		System.out.printf("| %-10s | %-15s | %-5s |\n", "Valor", "Titular", "Apolice");
		System.out.println("------------------------------------------");

		for (int i = 0; i < qntSeguros; i++) {
			ManipuladorSeguroDeVida.mostraSeguro(i);
			System.out.println("------------------------------------------");
		}
	}
	
	public static void mostraTributaveis(int qntSeguros, int qntContas) {
		
		System.out.print("\n----------------------TRIBUTOS--------------------");
		System.out.println("\n--------------------------------------------------");
		System.out.printf("| %-15s | %-15s | %-10s |\n", "Tipo", "Titular", "Imposto");
		System.out.println("--------------------------------------------------");
		
		for (int i = 0; i < qntSeguros; i++) {
			ManipuladorSeguroDeVida.mostraSeguroTributavel(i);;
			System.out.println("--------------------------------------------------");
		}
		
		for (int i = 0; i < qntContas; i++) {
			ManipuladorDeContas.mostraContaTributavel(i);
		}
	}

}

