package questão1;
import java.util.List;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		/*Scanner t = new Scanner(System.in);
		
		String cod = t.nextLine();
		Pais p = new Pais(cod);
		
		List<Pais> paises = CriaPaises.retornaPaises();
		
		if(paises.contains(p)) {
			Pais encontrado = (Pais) paises.get(paises.indexOf(p));
			System.out.println(encontrado.nome + "--" + encontrado.getDensidade() + "--" + encontrado.fronteira);
			
		} else {
			System.out.println("Tudo ok!");
		}*/
		
		String array[]= {"usa#estados unidos#1#10", "cnd#canada#1#10"};
		try {
			List a = CriaPaises.retornaPaises(array);		
			System.out.println(a);
		}catch(FormatoIncorretoException e) {
			System.out.println(e.getMessage());
		}
		
	}
}
