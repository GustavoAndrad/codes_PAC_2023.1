package br.com.caelum.contas;

import br.com.caelum.contas.modelo.Conta;
import br.com.caelum.contas.modelo.ContaCorrente;
import br.com.caelum.contas.modelo.ContaPoupanca;
import br.com.caelum.javafx.api.util.Evento;

public class ManipuladorDeContas {
	private Conta conta;

	public void criaConta(Evento evento) {
		this.conta = new Conta();
		
		String agencia = evento.getString("agencia");
		int numero = evento.getInt("numero");
		String titular = evento.getString("titular");

		String tipo = evento.getSelecionadoNoRadio("tipo");
		if (tipo.equals("Conta Corrente")) {
			this.conta = new ContaCorrente();
		} else if (tipo.equals("Conta Poupança")) {
			this.conta = new ContaPoupanca();
		}

		this.conta.setAgencia(agencia);
		this.conta.setNumero(numero);
		this.conta.setTitular(titular);
		
	}

	public void deposita(Evento evento) {
		double valorDigitado = evento.getDouble("valorOperacao");
		this.conta.depositar(valorDigitado);
		
		System.out.println(this.conta.getSaldo());
	}

	public void saca(Evento evento) {
		double valor = evento.getDouble("valorOperacao");
		this.conta.sacar(valor);
		
		System.out.println(this.conta.getSaldo());
	}

}
