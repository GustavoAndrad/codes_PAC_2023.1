
public class GatoTeste {
	public static void main(String[] args) {
		Gato g1 = new Gato();
		Gato g2 = new Gato();
		Gato g3 = new Gato();
		
		g1.cor="azul";
		g1.vivo = true;
		g1.nome="Zeze";
		g1.idade=10;
		
		g2.cor="vrmelho";
		g2.vivo = false;
		g2.nome="Zece";
		g2.idade=15;
		
		g3.cor="laranja";
		g3.vivo = true;
		g3.nome="Zete";
		g3.idade=100;
		
		System.out.println(g1.nome + " têm " 
				+ g1.idade + " anos, é da cor "
				+ g1.cor + " e está "
				+ g1.vivo);
		
		System.out.println(g2.nome + " têm " 
				+ g2.idade + " anos, é da cor "
				+ g2.cor + " e está "
				+ g2.vivo);
		
		System.out.println(g3.nome + " têm " 
				+ g3.idade + " anos, é da cor "
				+ g3.cor + " e está "
				+ g3.vivo);
	}
}
