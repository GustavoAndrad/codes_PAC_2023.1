import java.util.ArrayList;
import java.util.Collections;


public class Main {
	public static void main(String args[]) {
		ArrayList x = new ArrayList();
		x.add("casa");
		x.add("Casa");
		x.add("Bola");
		x.add("Navio");
		
		System.out.println(x);
		Collections.shuffle(x); //ALTERA  ACOLEÇÃO, NÃO RETORNA UMA NOVA
		System.out.println(x);
		
		System.out.println(Collections.frequency(x,"casa")); //usa o .equals na implementação
		
		System.out.println(x);
		Collections.sort(x); // recebe uma List, não um conjunto, já que a ordem não é relevante. Impliicitamente usa a compareTo() de Comparable. String implementa Comparable
		System.out.println(x);
		
		
		// ClassCastException para a Comparable se Jogador não implements a intreface Comparable
		//
		ArrayList y = new ArrayList();
		y.add(new Jogador("a", 2));
		y.add(new Jogador("c", 1));
		y.add(new Jogador("b", 3));
		
		System.out.println(y);
		Collections.sort(y);
		System.out.println(y);
		
		System.out.println("casa".compareTo("elefante"));
		System.out.println("elefante".compareTo("casa"));
		System.out.println("a".compareTo("z")); // com string retprona  adistancia no alfabeto (considerando o sinal)
		System.out.println((new Integer(10)).compareTo(new Integer(10)));


	}
}
