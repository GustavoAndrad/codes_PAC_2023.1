
public class Principal {
	public static void main(String[] args) {
		Conta conta = new Conta();
		conta.depositar(100.0);
		
		System.out.println(conta.getSaldo());
	}
}
