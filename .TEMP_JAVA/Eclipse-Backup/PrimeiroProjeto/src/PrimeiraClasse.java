import java.util.Scanner;

public class PrimeiraClasse { 
	public static void main(String[] args) {
		/*Scanner tec = new Scanner(System.in);
		double a = tec.nextDouble();
		double b = tec.nextDouble();
		System.out.println(calcula((int)a, (int)b));
		
		String nome = tec.nextLine();
		System.out.println("Olá, "+ nome);
		int numero = 5 + tec.nextInt();
		System.out.println(numero);
		
		tec.close();*/
		
		int array[] = new int[10];
		int array2[] = new int[(array.length+5)];
		
		for(int i=0;i<array.length;i++) {
			array[i] = i+1;
		}
		
		System.arraycopy(array, 0, array2, 0, array.length);
		for(int i=0;i<array2.length;i++) {
			System.out.println(array2[i]);
		}
		
		}
	
		public static int calcula(int a, int b) {
		return (a+b);
		}


}