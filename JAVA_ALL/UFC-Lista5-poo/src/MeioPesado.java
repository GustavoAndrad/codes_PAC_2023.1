
public class MeioPesado extends Lutador{

	MeioPesado(String nome, int idade, double peso) {
		super(nome, idade, peso);
	}
	
	@Override
	public String categoriaLutador() {
		return "Meio Pesado";
	}

}
