package questao2;

public class Chocolate extends Produto implements Comestivel{
	private String tipo;
	
	public void setTipo(String tipo) {
		this.tipo=tipo;
	}
	
	public String getTipo() {
		return this.tipo;
	}
	
	public void desembalar() {
		System.out.println("Chocolate desembalando");
	}
}
