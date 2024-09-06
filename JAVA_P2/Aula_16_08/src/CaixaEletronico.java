import java.util.Scanner;

// Classes que estão em java.lang (String, Double, etc) são importadas automaticamente

//Nas execeç~eos, o método que lança ""verifica"" se alguem enele trata. se não tiver,lele jpga para a aque chamou,

public class CaixaEletronico {
	public static void main (String args[]) {
		
		Conta c1 = new Conta();
		c1.depositar(10);
		
		System.out.println("Informe um valor para sacar: ");
		Scanner sc = new Scanner(System.in);
		double valSaque = sc.nextDouble();
		
		/*if(c1.debitar(valSaque) == false) {
			System.out.println("Vc não tem saldo suficiente");
		}
		else {
			System.out.println("Liberando "+valSaque+" reais");
		}*/
		
		
		try {
			c1.debitar(valSaque);
			
		} catch(SemDinheiroException e)
		{
			System.out.println("erro --- "+ e);
			System.out.println("erro --- "+ e.getMessage());
		}
		
		sc.close();
		
	}
}
