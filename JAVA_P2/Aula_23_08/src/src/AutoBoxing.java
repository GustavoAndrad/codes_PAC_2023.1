package src;
import java.util.ArrayList;

public class AutoBoxing {
	public static void main(String[] args) {
		ArrayList a = new ArrayList();
		a.add(new Object()); //.add acita somente objetos.
		
		a.add(10); // FUNCIONA POR CAUSA DO AUTO BOXING 
		
		// FOTO DAS WRAPPER CLASSES --> classes equivalentes dos tipos primitivos
		// a.add(new Integer(30))
		
		Integer y = new Integer(8);
		int k = y.intValue();
		int z = (int) a.get(1);
		
		System.out.println(y.intValue());
		
		/*
	 for(int i = 0; i<tw.length ;i++){
      for(int j=0; j<p.size();j++){
        String pala = (String)p.get(j);
        String subs = getx(pala);
        tw[i] = tw[i].replaceAll(pala,subs);
        
      }
      System.out.println(tw[i]);
    }
		*/
		String str = "A casa bonita";
		String remove = "casa";
		int i = str.indexOf(remove); // retorna 2. pimeiro indice
		
		int _final = i + remove.length(); //até onde a palavra vai. inicio + tamnaho dela
		
		String cortada = str.substring(0, i) + str.substring(_final, str.length()); //segundo argumeno é o primeiro que ele não vai ser
		System.out.println(cortada);
		
		System.out.println(str.replaceAll(remove, "****")); // o replaceAll cria uma string mudada
		//o replaceall, tolower, toupper, etc.... não mudam a string, geram uma mudaa e retornamn
		
		String img = "casa.png";
		if(img.endsWith(".png")) {
			System.out.println("é png");
		} 
		
		if(img.startsWith("casa")) {
			System.out.println("é casa");
		}
	}

	public static String getx(String x){
	    String nova = "";
	    for(int i=0;i<x.length();i++){
	      nova+="#";
	    }
	    return nova;
	  }

}

/*
  String corrigidas[] = new String[tw.length];
    int count = 0;

    for(String s: tw){
      String correta = s;
      
      for(String d: p){
        if(s.indexOf(d)!=-1){
          correta = correta.replaceAll(d, getx(d));
        }
      }
      
      corrigidas[count] = correta;
      count++;
    }

    

    for(String a: corrigidas){
      System.out.println(a);
      */

