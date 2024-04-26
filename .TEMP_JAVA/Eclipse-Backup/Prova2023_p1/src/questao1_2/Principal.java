package questao1_2;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Principal {
	public static void main(String[] args) {
		List x = new ArrayList();
		x.add(new Produto("2"));
		x.add(new Object());
		Produto p1 = new Tapete("1");
		p1.setPreco(10);
		Produto p2 = new Televisao("3");
		p2.setPreco(5);
		x.add(p2);
		x.add(p1);
		
		Scanner t = new Scanner(System.in);
		Produto busca = new Produto(t.nextLine());
		
		if(Utils.existe(x, busca)) {
			int posicao=0;
			for(Object i : x) {
				if(i instanceof Produto) {
					if((((Produto)i).getId()).equals(busca.getId())) {
						posicao = x.indexOf(i);
					}
				}
			}
			System.out.println(x.get(posicao));
		}
		
		System.out.println("------------");
		Produto k[] = transformaListEmArray(x);
		for(int i=0;i<k.length;i++) {
			System.out.println(k[i]);
		}
	}
	
	public static Produto[] transformaListEmArray(List k) {
		List aux = new ArrayList();
		for(Object i : k) {
			if(i instanceof Produto) {
				aux.add(i);				
			}
		}
		
		Produto x[] = new Produto[aux.size()];
		for(int i=0;i<aux.size();i++) {
			x[i]=((Produto)aux.get(i));
		}
		return x;
	}
}
