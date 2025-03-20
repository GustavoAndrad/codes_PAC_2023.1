
public class PesoPesado extends Lutador{
	
	PesoPesado(String nome, int idade, double peso){
		super(nome, idade,peso);
	}

	@Override
	public String categoriaLutador() {
		return "Peso Pesado";
	}
	
}
