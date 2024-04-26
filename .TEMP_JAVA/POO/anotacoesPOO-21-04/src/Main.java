
public class Main {

	public static void main(String[] args) {
		//Cliente c = new Cliente(); nn compila pq nn tem construtor padrao
		Cliente c = new Cliente("123");
		
		//System.out.println(c); sem override do .toString volta Clinte@4256
		System.out.println(c); //toString Implicito
		
		ClienteEspecial ce = new ClienteEspecial("456");
		System.out.println(ce.toString()); //to String Implicito
	}


}
