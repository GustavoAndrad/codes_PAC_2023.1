
public class Livro {
	private String titulo;
	private int ano;
	private boolean vendido;
	
	//construtor -> metodo de inicialização, deve ter o mesmo nome da classe
	//boas práticas - construtor depois dos atributos (caso queira criar um)
	//se não definir um em codigo ele mantem o default que não tem parâmetros (){  }
	//se um construtor for criado, não será mais criado um construtor padrão 
	public Livro() {
		System.out.println("criando livro");
	}
	
	public Livro(String titulo) {
		this.titulo = titulo;
	}
	
	public Livro(String titulo, int ano) {
		//this(titulo);
		this.titulo = titulo;
		this.ano = ano;
	}
	
	//getters and setters
	public void setTitulo(String t) {
		this.titulo=t;
	}
	
	public String getTitulo() {
		return this.titulo;
	}
	
	public void setAno(int ano) {
		this.ano = ano;
	}
	
	public int getAno() {
		return ano;
	}
	
	public boolean isVendido() {
		return this.vendido;
	}
	
	public void setVendido(boolean b) {
		this.vendido = b;
	}
}
