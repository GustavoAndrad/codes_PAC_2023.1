
public class Main {
	// metods esatico só podem chamar  ese referenciar a metodos e atributos estaticos, pois 
	// os não estaticos precisam da existencia de uma instancia, os estaticos não
	public static void main(String[] args) {

	System.out.println(Math.sqrt(500));
	System.out.println(Math.random());
	
	System.out.println(Calculadora.media(18, 2));

	System.out.println(Math.PI);
	}
}
