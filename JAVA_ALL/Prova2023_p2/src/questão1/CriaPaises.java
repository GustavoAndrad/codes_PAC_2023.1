package questão1;
import java.util.ArrayList;
import java.util.List;

public class CriaPaises {
	public static List retornaPaises() {
		List<Pais> paises = new ArrayList<Pais>();
		
		Pais usa = new Pais("USA", "Estados Unidos", 1);
		usa.setPop(10);
		Pais cnd = new Pais("CND", "Canada", 2);
		cnd.setPop(10);
		Pais mex = new Pais("MEX", "Mexico", 3);
		mex.setPop(10);
		
		usa.fronteira = new ArrayList<Pais>();
		usa.addFronteirico(mex);
		usa.addFronteirico(cnd);
		
		cnd.fronteira = new ArrayList<Pais>();
		cnd.addFronteirico(usa);
		
		mex.fronteira = new ArrayList<Pais>();
		mex.addFronteirico(usa);
		
		
		paises.add(usa);
		paises.add(cnd);
		paises.add(mex);
		return paises;
	}
	
	public static List retornaPaises(String a[]) throws FormatoIncorretoException{
		List<Pais> paises = new ArrayList<Pais>();
		
		//a#b#c#d
		
		for(String s: a) {
			String[] data = s.split("#");
			
			if(data.length!=4) {
				throw new FormatoIncorretoException(data.length-1, s);
			}
			
			Pais p = new Pais(data[0], data[1], Float.parseFloat(data[2]));
			p.setDim(Double.parseDouble(data[3]));
			
			paises.add(p);
			
		}
		
		return paises;
	}
	
}
