package questao2_1;
import java.util.Scanner;

public class MediaPeso {
	public static void main(String[] args) {
		Scanner t = new Scanner(System.in);
		double somaPesos=0;
		int entradas = 0;
		for(int i=0;i<1000;i++) {
			System.out.println("Informe o nome#peso#altura");
			System.out.println("Digite 'finalizar' para sair");
			
			String dados = t.nextLine();
			if(!dados.equals("finalizar")) {
				String decomp[] = dados.split("#");
				somaPesos+=Integer.parseInt(decomp[1]);
				entradas++;
			}else {
				break;
			}
		}
		System.out.println("Média: "+somaPesos/entradas);
	}
}
