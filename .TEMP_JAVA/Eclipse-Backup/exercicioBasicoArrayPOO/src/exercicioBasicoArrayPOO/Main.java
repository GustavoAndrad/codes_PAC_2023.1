package exercicioBasicoArrayPOO;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Mochila mochilas[] = new Mochila[4];

		Scanner t =  new Scanner(System.in);
		for(int i=0;i<mochilas.length;i++) {
			System.out.println(Mochila.getQntMochilas());
			
			System.out.println("Ano: ");
			int ano = t.nextInt();
			t.nextLine(); //consumir buffer
			
			System.out.println("Cor: ");
			String cor = t.nextLine();
			
			mochilas[i] = new Mochila(ano, cor);
			//testandos statics
			Mochila.setQntMochilas(i+1);
		}
		
		int somaAnos = 0;
		for(int i=0;i<mochilas.length;i++) {
			somaAnos+=(mochilas[i].getAno());
		}
		System.out.println("Média: "+somaAnos/mochilas.length);
	}
}
