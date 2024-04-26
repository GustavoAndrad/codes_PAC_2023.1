
import java.util.ArrayList;
import java.util.List;

public class Main {
	public static void main(String[] args) {
		List lista = getDados();
		int soma = 0;
		for(int i=0; i<lista.size();i++) {
			String dados[] = ((String)lista.get(i)).split("#");
			soma+=Integer.parseInt(dados[1]);
		}
		System.out.println("Média: "+soma/lista.size());

		
		
	}
	
	public static List getDados() {
		ArrayList k = new ArrayList();
		k.add("Joao#10");
		k.add("Lucas#50");
		
		return k;
	}
}
