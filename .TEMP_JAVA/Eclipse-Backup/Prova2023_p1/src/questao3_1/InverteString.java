package questao3_1;

public class InverteString {
	public static void main(String[] args) {
		System.out.println(inverte("chocolate"));
	}
	
	public static String inverte(String str) {
		String invertida = "";
		String str_decomposta[] = str.split("");
		
		for(int i=0;i<str_decomposta.length;i++) {
			invertida+=str_decomposta[(str_decomposta.length-1)-i];
		}
		return invertida;
	}
}
