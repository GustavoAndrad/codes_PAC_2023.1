package questao2_2;

public class Substitui {
	public static void main(String[] args) {
		processa("ParaLelismo");
	}
	
	public static void processa(String str) {
		String nova_str = (str.toUpperCase());
		nova_str = nova_str.replace("A", "4");
		nova_str = nova_str.replace("E", "3");
		nova_str = nova_str.replace("I", "1");
		nova_str = nova_str.replace("O", "0");
		
		System.out.println(nova_str);
	}
	
}
