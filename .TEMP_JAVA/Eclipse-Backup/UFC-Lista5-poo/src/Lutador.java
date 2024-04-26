import java.util.ArrayList;

public abstract class Lutador {
	private String nome;
	private int idade;
	private double peso;
	
	Lutador(String nome, int idade, double peso){
		this.setNome(nome);
		this.setIdade(idade);
		this.setPeso(peso);
	}
	
	public abstract String categoriaLutador();
	
	public void possiveisLutas(Lutador lutadores[]) {
		for(int i=0;i<lutadores.length;i++) {
			if(this.getClass() == lutadores[i].getClass()) {
				System.out.println(lutadores[i].getNome()+" ");
			}
		}
	}
	
	public Lutador sortioLuta(Lutador lutadores[]) {
		//criar array list com possiveis
		ArrayList<Lutador> possiveis = new ArrayList<>();
		
		for(int i=0;i<lutadores.length;i++) {
			if(this.categoriaLutador() == lutadores[i].categoriaLutador()) {
				possiveis.add(lutadores[i]);
			}
		}
		
		//sorteia lutador
		int escolhido = (int) (Math.random() * possiveis.size()); 
		return possiveis.get(escolhido);
		
	}
	
	@Override
	public String toString() {
		return (this.getNome()+"/"+this.getIdade()+"/"+this.getPeso());
	}
		
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getNome() {
		return this.nome;
	}
	
	public void setIdade(int idade) {
		this.idade = idade;
	}
	
	public int getIdade() {
		return this.idade;
	}
	
	public void setPeso(double peso) {
		this.peso = peso;
	}
	
	public Double getPeso() {
		return this.peso;
	}
}
