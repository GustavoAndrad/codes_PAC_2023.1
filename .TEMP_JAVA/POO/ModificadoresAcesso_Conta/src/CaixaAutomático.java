import java.util.Scanner;

public class CaixaAutomático {

	public static void main(String[] args) {
		Conta x = new Conta ();
		//impossivel para atributos privados
		//x.nomeCliente = "Ana";
		x.setNome("Ana");
		x.depositar(15);
		
		System.out.println("Quanto quer sacar?");
		Scanner sc = new Scanner(System.in);
		
		double valor = sc.nextDouble();
		//impossivel para atributos privados
		//x.saldo = x.saldo - valor;
		
		
		if(x.debitar(valor)) {
			System.out.println("Liberando " + valor + " reais no compartimento");
		}
		
		
		
		//impossivel para atributos privados
		//System.out.println(x.saldo);
		System.out.println(x.getSaldo());
		sc.close();
	}
}
