package questao1_1;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Principal {
	public static void main(String[] args) {
		Scanner t = new Scanner(System.in);
		
		//simulando entrada
		List x = new ArrayList();
		x.add(new Object());
		x.add(new Negresco("1"));
		Biscoito a = new Sniky("2");
		a.setCor("azul");
		a.setPreco(10);
		x.add(a);
		x.add(new Object());
		x.add(new Negresco("3"));
		
		Biscoito busca = new Biscoito(t.nextLine()); 
		
		if(Utils.existe(x, busca)) {
			int posicaoProduto=0;
			for(Object i : x) {
				if(i instanceof Biscoito) {
					if((((Biscoito)i).getId()).equals(busca.getId())) {
						posicaoProduto = x.indexOf(i);
					}
				}
			}
			Biscoito p = (Biscoito)x.get(posicaoProduto);
			System.out.println("\nID: "+ p.getId()+
					"\nCor: "+p.getCor()+
					"\nPreco: "+p.getPreco());
		}
		
		Biscoito b[] = transformaListaEmArray(x);
		calculaSoma(b);
		
	}
	
	public static Biscoito[] transformaListaEmArray(List k) {
		List aux = new ArrayList();
		for(Object i : k) {
			if(i instanceof Biscoito) {
				aux.add(i);
			}
		}
		
		Biscoito b[] = new Biscoito[aux.size()];
		for(int i=0;i<aux.size();i++) {
			b[i]=(Biscoito)aux.get(i);
		}
		
		return b;
	}
	
	public static void calculaSoma(Biscoito b[]) {
		int soma=0;
		for(int i=0;i<b.length;i++) {
			soma+=b[i].getPreco();
		}
		System.out.println(soma);
	}
}
