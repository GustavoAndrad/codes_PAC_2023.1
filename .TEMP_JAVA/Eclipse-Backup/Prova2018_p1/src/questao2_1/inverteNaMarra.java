package questao2_1;

public class inverteNaMarra {
	public static void main(String[] args) {
		inverte("PARALELISMO");
	}
	
	public static void inverte(String a) {
		String divisao[] = a.split("");
		String invertida = "";
		for(int i=0;i<divisao.length;i++) {
			switch(divisao[(divisao.length-1)-i]) {
				case "A": invertida+="4"; break;
				case "E": invertida+="3"; break;
				case "I": invertida+="1"; break;
				case "O": invertida+="0"; break;
				default: invertida+=divisao[(divisao.length-1)-i];
			}
		}
		System.out.println(invertida);
	}
}
