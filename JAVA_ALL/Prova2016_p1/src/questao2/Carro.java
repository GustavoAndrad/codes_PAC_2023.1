package questao2;

public class Carro extends Brinquedo implements Ligavel{
	private String placa;
	
	public void setPlaca(String placa) {
		this.placa = placa;
	}
	
	public String getPlaca() {
		return this.placa;
	}
	
	public void ligar() {
		System.out.println("Carro ligando");
	}
}
