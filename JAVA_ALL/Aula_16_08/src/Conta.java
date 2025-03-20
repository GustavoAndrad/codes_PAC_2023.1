
//colocar o try...cathc aqui não afetaria em nada

public class Conta {
	private double saldo;
	
	public /*boolean*/ void  debitar(double val) throws SemDinheiroException { //sem o throws não compila. indica que essa função lança esse erro 
		
		if(val > saldo) {
			System.out.println("Não pode debitar");
			//return false;
			//throw new RuntimeException("Saldo: "+ this.saldo); // a message não é obrigatória
			
			throw new SemDinheiroException(); 
		}
		else {
			this.saldo -= val;
			//return true;
		}
	}
	
	public void depositar(double val) {
		this.saldo += val;
	}
}
