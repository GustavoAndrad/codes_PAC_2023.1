package questao2_1;

public class Media {

	public static void main(String[] args) {
		System.out.println(calcula("4#9#1#10"));

	}
	
	public static double calcula(String numeros) {
		String div[] = numeros.split("#");
		double soma = 0;
		for(String i : div) {
			soma+=Integer.parseInt(i);
		}
		
		return (soma/div.length);
	}

}
