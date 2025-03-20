
public class Passaro extends Animal implements Voador{
	@Override
	public void comer() {
		System.out.println("Pássaro comendo...");
	}

	@Override
	public void voar() {
		System.out.println("Passarinho voando");
		
	}

	@Override
	public void levantarVoo() {
		System.out.println("Passarinho levantando voo");
		
	}

	@Override
	public void pousar() {
		System.out.println("Passarinho pousando");
		
	}
}
