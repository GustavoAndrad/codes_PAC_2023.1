
public class Aviao extends Veiculo implements Voador{
	@Override
	public void voar() {
		System.out.println("Aviao voando");
		
	}

	@Override
	public void levantarVoo() {
		System.out.println("Aviao levantando voo");
		
	}

	@Override
	public void pousar() {
		System.out.println("Aviao pousando");
		
	}
}
