package questao1_1;

public class Biscoito implements Comestivel{
	private String id;
	private String cor;
	private int preco;
	
	Biscoito(String id){
		this.id = id;
	}
	
	public String getId() {
		return this.id;
	}
	
	public void setCor(String cor) {
		this.cor=cor;
	}
	
	public String getCor() {
		return this.cor;
	}
	
	public void setPreco(int preco) {
		this.preco=preco;
	}
	
	public int getPreco() {
		return this.preco;
	}
	
	public void comer() {
		System.out.println("Comendo");
	}
	
}
