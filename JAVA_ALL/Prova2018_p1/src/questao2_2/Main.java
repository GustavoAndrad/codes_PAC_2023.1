package questao2_2;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		//simulando o metodo
		List a = new ArrayList();
		a.add("Aline Ferraz#20");
		a.add("Arthur Maia#30");
		
		Scanner t = new Scanner(System.in);
		String nomeBusca = t.nextLine();
		
		int soma=0;
		for(Object i : a) {
			String[] decomp = ((String)i).split("#");
			String nomeAtual = decomp[0];
			
			if(nomeAtual.equals(nomeBusca)) {
				System.out.println(decomp[0]+" -- "+decomp[1]);
			}
		
			soma+=Integer.parseInt(decomp[1]);
		}
		System.out.println("Média: "+soma/a.size());
		
	}
	
}
