
public class Animal {
	private String nome;
	private int idade;
	private double peso;
	private String cor;
	private double altura;
	
	@Override
	//metodo nativo de Object, reescrevenedo ele
	public String toString() {
		return (nome +" - "+ idade);
	}
	
	public void correr() {
		System.out.println("Animal correndo");
	}
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getIdade() {
		return idade;
	}
	public void setIdade(int idade) {
		this.idade = idade;
	}
	public double getPeso() {
		return peso;
	}
	public void setPeso(double peso) {
		this.peso = peso;
	}
	public String getCor() {
		return cor;
	}
	public void setCor(String cor) {
		this.cor = cor;
	}
	public double getAltura() {
		return altura;
	}
	public void setAltura(double altura) {
		this.altura = altura;
	}
}
