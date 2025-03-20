package questão1;
import java.util.List;

public class Pais{
	public String cod, nome;
	int pop;
	double dim;
	List<Pais> fronteira;
	
	Pais(String cod){
		this.cod = cod.toUpperCase();
	}
	
	Pais(String cod, String nome, float dim){
		this(cod);
		setDim(dim);
		this.nome = nome;
	}
	
	public void setPop(int pop) {
		this.pop = pop;
	}
	
	public int getPop() {
		return this.pop;
	}
	
	public void setDim(double dim) {
		this.dim = dim;
	}
	
	public double getDim(){
		return this.dim;
	}
	
	public boolean equals(Object o) {
		if(o instanceof Pais) {
			if((this.cod).equals(((Pais)o).cod)) {
				return true;
			}
		}
		return false;
	}
	
	public double getDensidade() {
		return (double)this.getPop() / this.getDim();
	}
	
	public boolean fazFronteira(Pais p) {
		if(this.fronteira.contains(p)) {
			return true;
		}
		return false;
	}
	
	public void addFronteirico(Pais p) {
		this.fronteira.add(p);
	}
	
	public String toString() {
		return nome;
	}
}