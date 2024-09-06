import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Set;

public class Utils {
	//public static double media(ArrayList u) {				Se ele recebesse uma Linked List não rodaria com o codigo na MAIN
	public static double media(List u) { // o ideial é programar sem pensar na implementação, então fazer pensando nas relações de  interfaces. 
		double media = 0;
		//*calcula*
		 return media;
	}
	
	public static double mediaTamanho(HashSet<String> a) {
		int soma_tamanho=0;
		for(String item : a) {
			soma_tamanho+=(item.length());
		}
		
		float media = ((float)soma_tamanho) / ((float) a.size());
		return media;
		
	}
	
	public static double mediaTamanho2(Collection a) {
		int soma_tamanho=0;
		Iterator it = a.iterator(); //.iterator retorna um objeto que é possivel iterar
		while(it.hasNext()) {
			Object o = it.next();
			String k = (String) o;
			soma_tamanho+=k.length();
		}
		
		float media = ((float)soma_tamanho) / ((float) a.size());
		return media;
	}
	
	public static double mediaAnoCarro(Map c) { //ieterando pelos valores
		Collection g = c.values(); //retorna uma collection com os valores
		Iterator it = g.iterator();
		
		int soma_anos=0;
		
		while(it.hasNext()) {
			int ano = ((Carro)(it.next())).getAno();
			soma_anos+=ano;
		}
		
		float media = ((float)soma_anos) / ((float) c.size());
		return media;
	}
	
	public static double mediaAnoCarro2(Map c) { //iterabdo pelas chaves
		Set g = c.keySet(); //retorna um set com as chaves
		Iterator it = g.iterator();
		
		int soma_anos=0;
		
		while(it.hasNext()) {
			String chave = (String) it.next();
			int ano = ((Carro)c.get(chave)).getAno();
			soma_anos+=ano;
		}
		
		float media = ((float)soma_anos) / ((float) c.size());
		return media;
	}
}
