import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;

public class Main {
	public static void main(String args[]) {
		// .tOcAHRaRRAY
		String texto = "  o texto  ";
		char array_texto[] = texto.toCharArray();
		String ocorrencia_letras = "";
		
		for(char letra : array_texto) {
			if(letra == 'o') { // letra é char, logo, tipo primitivo. entao não compara com .equals. E estring é smepre com ''
				ocorrencia_letras+=letra;
			}else {
				ocorrencia_letras+='_';
			}
		}
		
		System.out.println(array_texto);
		System.out.println(ocorrencia_letras);
		
		// TRIM
		String sem_espaco = texto.trim(); //remove os espaços do inicio e do fim
		System.out.println(sem_espaco);
		
		
		//EQUALS COM CASE
		String n1 = "ANA";
		String n2 = "Ana";
		
		System.out.println(n1.equals(n2));
		System.out.println(n1.equalsIgnoreCase(n2));
		
		n1 = n1.toLowerCase();
		n2 = n2.toLowerCase();
		System.out.println(n1.equals(n2));
		
		// COLLECTIONS
		
		//ArrayList<Integer> a = new ArrayList<Integer>();
		ArrayList a = new ArrayList();
		a.add(1);
		a.add(2);
		System.out.println(Utils.media(a));
		
		//Conjuntos
		HashSet k = new HashSet(); //não há garantia da ordem
		k.add("aa");
		k.add("bbbb");
		k.add("cccc");
		k.add("c");
		
		k.add("c"); // não é adicionado dnv, conjuntos só podem ter 
		k.add("c");
		
		System.out.println(k);
		System.out.println(k.add("c"));
		
		System.out.println(Utils.mediaTamanho(k));
		System.out.println(Utils.mediaTamanho2(k));
		
		
		//Maps
		Carro c1 = new Carro("a","a@",4);
		Carro c2 = new Carro("b","b@",6);
		
		HashMap z = new HashMap();
		//put(chave, valor)
		//chave é unica, 
		z.put("a", c1);
		z.put("b", c2);
		testeMap(z);
		
		System.out.println(Utils.mediaAnoCarro(z));
		System.out.println(Utils.mediaAnoCarro2(z));
		
	}
	
	public static void testeMap(Map g) {
		String placa_radar = "a";
		Carro c = (Carro) g.get(placa_radar); //precisa de casting pois retorna como object
		System.out.println(c.email);
	}
	
}
