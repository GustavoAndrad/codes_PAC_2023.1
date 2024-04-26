
public class MyFirstApp{
	public static void main(String [] args){
		System.out.println("Olá Mundo");
		//System.out.println("Oi, " + args[0] + " e " + args[1]);
		String x = args[0];
		String y = args[1];
		
		int k = Integer.parseInt(x);
		int j = Integer.parseInt(y);
		
		System.out.println(k + j);
	}
}
