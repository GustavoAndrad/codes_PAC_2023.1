package questao1_2;

public class Produto {
	private String id;
	private String cor;
	private double preco;
	
	Produto(String id){
		this.id=id;
	}
	
	Produto(String id, int numero){
		this.id=id;
	}

	public String getCor() {
		return cor;
	}

	public void setCor(String cor) {
		this.cor = cor;
	}

	public double getPreco() {
		return preco;
	}

	public void setPreco(double preco) {
		this.preco = preco;
	}

	public String getId() {
		return id;
	}

	@Override
	public String toString() {
		return id+" "+cor+" "+preco;
	}
	
}
