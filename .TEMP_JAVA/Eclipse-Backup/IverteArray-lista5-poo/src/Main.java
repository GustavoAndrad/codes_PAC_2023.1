
public class Main {

	public static void main(String[] args) {
		int a[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
		int b[] = inverte(a);
			
		System.out.println("Array: ");
		imprime(a);

		System.out.println("\nArray Invertido: ");
		imprime(b);
		
	}
	
	public static int[] inverteArray(int a[]) {
		int invertido[] = new int[a.length];
		int posicaoLivre = 0;
		for(int i=a.length-1;i>=0;i--) {
			invertido[posicaoLivre] = a[i];
			posicaoLivre++;
		}

		return invertido;
	}
	
	public static void imprime(int[] a) {
		for(int i=0;i<a.length;i++) {
			System.out.print(a[i]+" ");
		}
	}

	public static int[] inverte(int a[]) {
		int invertido[] = new int[a.length]; 
		
		for(int i=0;i<a.length;i++) {			
			invertido[(a.length-1)-i] = a[i];
		}
		return invertido;
	}
		
}
