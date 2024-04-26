
public class Conta {
	//Critico pois uma classe pode acbar deixando o saldo negativo "forçando"
	//String nomeCliente;
	//double saldo;
	
	private String nomeCliente;
	private double saldo;
	
	public boolean debitar(double val) {
		if(((saldo - val)>=0) && (val>=0)) {
			saldo-=val;
			System.out.println("Débito realizado - saldo: "+ saldo);
			return true;
		} else {
			System.out.println("Débito não realizado - saldo: "+ saldo);
			return false;
		}
	}
		
	public void depositar(double val) {
		saldo+=val;
		System.out.println("Saldo: "+ saldo);
	}
	
	public double getSaldo() {
		return saldo;
	}
	
	public void setNome(String n) {
		this.nomeCliente = n;
	}
	
}
		
