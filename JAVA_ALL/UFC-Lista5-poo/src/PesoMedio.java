
public class PesoMedio extends Lutador {

	PesoMedio(String nome, int idade, double peso) {
		super(nome, idade, peso);
	}
	
	@Override
	public String categoriaLutador() {
		return "Peso Médio";
	}

}
