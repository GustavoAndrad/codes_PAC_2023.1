package questao1_1;

public abstract class Veiculo {
	private String modelo;
	
	Veiculo(String modelo){
		setModelo(modelo);
	}
	
	public void setModelo(String modelo) {
		this.modelo=modelo;
	}
	
	public String getModelo() {
		return this.modelo;
	}
	
	@Override
	public String toString() {
		return this.getModelo();
	}
}
