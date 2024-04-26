package br.com.caelum.contas;

/*
 * Classe  que intermedia as ações do sistema e  interface do usuario 
 */

import java.util.ArrayList;
import java.util.List;

import br.com.caelum.contas.modelo.Conta;
import br.com.caelum.contas.modelo.ContaCorrente;
import br.com.caelum.contas.modelo.ContaPoupanca;

public class ManipuladorDeContas {
	private static List<Conta> contas = new ArrayList<>();
	
	public static boolean criaConta(String titular, int numero, String agencia, String tipo) {
		Conta novaConta = null;
		if(tipo.equals("c")) {
			novaConta = new ContaCorrente(titular, numero, agencia);	
			contas.add(novaConta);
		} 
		else if(tipo.equals("p")) {			
			novaConta = new ContaPoupanca(titular, numero, agencia);	
			contas.add(novaConta);
		} else{
			return false;
		}
		
		return true;
	}
	
	public static void mostraConta(int index) {
		Conta conta = contas.get(index);
		System.out.printf("| %-10s | %-10d | %-10.2f | %-10s | %-13s |\n",
               conta.getTitular(), conta.getNumero(), conta.getSaldo(), conta.getAgencia(), conta.getTipo());
	}
	
	public static void mostraContaTributavel(int index) {
		Conta conta = contas.get(index);
		if(conta instanceof ContaCorrente) {
			ContaCorrente conta_corrente = (ContaCorrente) conta;
			System.out.printf("| %-15s | %-15s | %-10.2f |\n",
					conta_corrente.getTipo(), conta_corrente.getTitular(), conta_corrente.getValorImposto());
			
			//gambiarra ara formatação
			System.out.println("--------------------------------------------------");
		}
	}
	
	public static void sacar(double valor, int index) {
		Conta conta = contas.get(index);
		if(!conta.sacar(valor)) {
			System.out.printf("\nOperação de saque de R$ %.2f da conta %d não realizada\n", valor, index+1);
		}
	}
	
	public static void depositar(double valor, int index) {
		Conta conta = contas.get(index);
		if(!conta.depositar(valor)) {
			System.out.printf("\nOperação de depósito de R$ %.2f da conta %d não realizada\n", valor, index+1);
		}
	}
	
	public static void tranferir(double valor, int index_remetente, int index_destino) {
		Conta remetente = contas.get(index_remetente);
		Conta destino = contas.get(index_destino);
		
		if(!remetente.tranferir(valor, destino)){
			System.out.printf("\nOperação de tranferencia de R$ %.2f da conta %d para a conta %d não realizada\n",
					valor, index_remetente+1, index_destino+1);
		}
	}
	
}
