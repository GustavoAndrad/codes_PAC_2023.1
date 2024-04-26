package questao2_2;
import java.util.List;
import java.util.Scanner;
import java.util.ArrayList;

public class IMC {
	public static void main(String[] args) {
		//simulando metodo
		List lista = new ArrayList();
		lista.add("Aline Ferraz#79.7#1.77");
		lista.add("Arthur Maia#70#1.65");
		lista.add("Ana Souza#60#1.70");
        lista.add("Pedro Silva#85#1.80");
        lista.add("Maria Oliveira#55#1.60");
        lista.add("João Santos#90#1.75");
        
        Scanner t = new Scanner(System.in);
        executaIMC(lista, t.nextLine());
		
	}
	
	public static double mediaIMC(List a) {
		double soma=0;
		for(Object i : a) {
			if(i instanceof String) {
				String decomp[] = ((String)i).split("#");
				double peso = Double.parseDouble(decomp[1]);
				double altura = Double.parseDouble(decomp[2]);
				double imc = peso/(altura*altura);
				soma+=imc;
			}
		}
		return (soma/a.size());
	}
	
	public static double proporcao(List a, double imc_busca) {
		int imcMaior=0;
		for(Object i : a) {
			if(i instanceof String) {
				String decomp[] = ((String)i).split("#");
				double peso = Double.parseDouble(decomp[1]);
				double altura = Double.parseDouble(decomp[2]);
				double imc = peso/(altura*altura);
				
				if(imc>imc_busca) {
					imcMaior++;
				}
			}
		}
		return (double)imcMaior / a.size();
	}
	
	public static void executaIMC(List a, String busca) {
		for(Object i : a) {
			if(i instanceof String) {
				String decomp[] = ((String)i).split("#");
				if(busca.equals(decomp[0])) {
					double media = mediaIMC(a);
					double peso = Double.parseDouble(decomp[1]);
					double altura = Double.parseDouble(decomp[2]);
					double imc = peso/(altura*altura);
					
					
					System.out.println("Nome: "+busca+" - "+
							"IMC: "+imc+ " - " +
							"Média: "+ media+ " - " +
							"Proporção: "+ proporcao(a, imc));
					
					if(imc>40) {
						System.out.println(" - ALERTA");
					}
					
				}
				

			}
		}
	}
}
