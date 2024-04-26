package questao3;

import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner t = new Scanner(System.in);

		Carro c = new Carro();
		Motor m = new Motor();
		
		m.setCor(t.nextLine());
		c.setMotor(m);
		c.setId(Integer.parseInt(t.nextLine()));
		
		imprimeDadosCarro(c);
		
	}
	
	public static void imprimeDadosCarro(Carro n) {
		String msg = "ID: "+n.getId()+
				"\nMOTOR: "+n.getMotor().getCor();
		System.out.println(msg);
	}
}
