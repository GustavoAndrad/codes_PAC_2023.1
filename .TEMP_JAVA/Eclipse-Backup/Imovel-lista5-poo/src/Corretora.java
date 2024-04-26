import java.util.Scanner;

public class Corretora {

	public static void main(String[] args) {
		//revisar uso do scanner
		Scanner t = new Scanner(System.in);
		Imovel imoveis[] = new Imovel[5];
		
		for (int i = 0; i < imoveis.length; i++) {
		    System.out.println("Tipo: (1 para novo e 2 para velho)");
		    int tipo = t.nextInt();
		    t.nextLine(); // Consumir quebra de linha

		    if (tipo == 1) {
		        imoveis[i] = new Novo();
		    } else if (tipo == 2) {
		        imoveis[i] = new Velho();
		    }

		    System.out.print("Endereco: ");
		    String end = t.nextLine();
		    imoveis[i].setEndereco(end);

		    System.out.print("Preco: ");
		    double preco = t.nextDouble();
		    t.nextLine(); // Consumir quebra de linha após o preço
		    imoveis[i].setPreco(preco);
		}
		
		for(int i=0;i<=imoveis.length-1;i++) {
			System.out.printf("\nPreço da casa %s:  %.2f", imoveis[i].getEndereco(), imoveis[i].getPreco());	
		}
		
		System.out.printf("\n\nSoma: %.2f", soma(imoveis));
	}
	
	public static double soma(Imovel imoveis[]) {
		double soma = 0;
		for(int i=0;i<=imoveis.length-1;i++) {
			soma+=imoveis[i].getPreco();
		}
		return soma;
	}
}
