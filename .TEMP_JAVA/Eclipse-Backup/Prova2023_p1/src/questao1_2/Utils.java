package questao1_2;

import java.util.List;

public class Utils {
	public static boolean existe(List x, Produto y) {
		for(Object i : x) {
			if((i instanceof Produto) && 
					((((Produto)i).getId()).equals(y.getId()))){
				return true;
			}
		}
		return false;
	}
}
