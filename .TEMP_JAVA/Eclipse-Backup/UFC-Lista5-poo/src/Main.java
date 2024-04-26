import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		int qntLutadores = 5;
		Lutador lutadores[] = new Lutador[qntLutadores];
		
		Scanner t = new Scanner(System.in);
		for(int i=0;i<qntLutadores;i++) {
			String nome;
			int idade;
			double peso;
			
			System.out.print("Nome: ");
			nome = t.nextLine();
			
			System.out.print("Idade: ");
			idade = t.nextInt();
			t.nextLine(); // Consumir a nova linha pendente
			
			System.out.print("Peso: ");
			peso = t.nextDouble();
			t.nextLine(); // Consumir a nova linha pendente
			
			if(peso<=65.0) {
				lutadores[i] = new PesoPena(nome,idade,peso);				
			} else if(peso<=83.9) {
				lutadores[i] = new PesoMedio(nome,idade,peso);
			} else if(peso<=93.0) {
				lutadores[i] = new MeioPesado(nome,idade,peso);
			} else if(peso<=120.2) {
				lutadores[i] = new PesoPesado(nome,idade,peso);
			}
			
			System.out.println("Informações: "+lutadores[i] +"/"+ lutadores[i].categoriaLutador()+" \n");
		}
		
		while(true) {
			System.out.printf("\n\nNúmero de 0 a %d: ", (qntLutadores-1));
			int index_lutador_escolhido = t.nextInt();
			
			if((index_lutador_escolhido) < qntLutadores && (index_lutador_escolhido >= 0)) {
				System.out.print("Lutador: "+ lutadores[index_lutador_escolhido]);
				
				System.out.println("\n\nPossiveis Lutas:\n");
				lutadores[index_lutador_escolhido].possiveisLutas(lutadores);
				
				Lutador adversario = lutadores[index_lutador_escolhido].sortioLuta(lutadores);
				System.out.print("\nAdversário: " + adversario);
			}
		}
	}

}
