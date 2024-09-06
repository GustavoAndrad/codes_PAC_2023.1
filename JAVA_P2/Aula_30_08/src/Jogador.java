
public class Jogador implements Comparable<Jogador>{ // precisa implementar Comparable. Dá para usar generic para poder receber um tipo sme ser object no ComnpareTo
//public class Jogador implements Comparable{ // precisa implementar Comparable 
	
	private String nome;
	private double salario;
	
	Jogador(String n, double s){
		setNome(n);
		setSalario(s);
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getNome() {
		return this.nome;
	}
	
	public void setSalario(double salario) {
		this.salario = salario;
	}
	
	public double getSalario() {
		return this.salario;
	}
	
	//Interface Comparable
	/*
	 * Compares this object with the specified object for order.
	 *  Returns anegative integer, zero, or a positive integer as this object is lessthan, equal to, or greater than the specified object. 
	 */
	@Override
	public int compareTo(Jogador o) { //comparando por nome. Pega só jogador por causa do generics na declaração da classe
	//public int compareTo(Object o) { //comparando por nome

		//Jogador k = (Jogador) o; só precisa se revebr um Object;
		//return (this.nome).compareTo(o.getNome());
		 
		return (new Double(this.getSalario())).compareTo(o.getSalario()); //usa encaixotamento, pq o salrio é um tipo primitivo
	}
	
	public String toString() {
		return this.nome;
	}
}
