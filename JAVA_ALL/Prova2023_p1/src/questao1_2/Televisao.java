package questao1_2;

public class Televisao extends Produto implements Ligavel{
	Televisao(String id){
		super(id);
	}
	
	public void ligavel() {
		System.out.println("TV Ligavel");
	}
}
