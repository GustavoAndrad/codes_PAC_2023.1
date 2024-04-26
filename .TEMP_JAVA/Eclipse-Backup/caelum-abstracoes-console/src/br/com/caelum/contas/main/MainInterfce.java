package br.com.caelum.contas.main;

import br.com.caelum.contas.ManipuladorDeContas;

public class MainInterfce {
	public static void main(String[] args){
		System.out.println("------------ SISTEMA DO BANCO ------------");
		
		int qntContas = 2;
		
		ManipuladorDeContas.criaConta("Gustavo", 10, "BraSSil", "c");
		ManipuladorDeContas.criaConta("Lara", 02, "BraSSil", "p");
		
		ManipuladorDeContas.depositar(-10, 0);
		ManipuladorDeContas.tranferir(10, 0, 1);
		
		mostraContas(qntContas);
		
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
		System.out.println("\n---------------------------------------------------------------------");
		System.out.printf("| %-10s | %-10s | %-10s | %-10s | %-14s |\n", "Titular", "Número", "Saldo", "Agência", "Tipo");
		System.out.println("---------------------------------------------------------------------");

		for (int i = 0; i < qntContas; i++) {
			ManipuladorDeContas.mostraConta(i);
			System.out.println("---------------------------------------------------------------------");
		}
	}

}

