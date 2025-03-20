
public class PesoPena extends Lutador{

	PesoPena(String nome, int idade, double peso) {
		super(nome, idade, peso);
	}
	
	@Override
	public String categoriaLutador() {
		return "Peso Pena";
	}

}
