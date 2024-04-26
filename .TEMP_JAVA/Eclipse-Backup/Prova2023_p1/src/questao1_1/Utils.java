package questao1_1;

import java.util.List;

public class Utils {
	public static boolean existe(List x, Biscoito y) {
		for(Object i : x) {
			if(i instanceof Biscoito) {
				if(((((Biscoito)i).getId())).equals(y.getId())) {
					return true;
				}
			}
		}
		return false;
	}
}
