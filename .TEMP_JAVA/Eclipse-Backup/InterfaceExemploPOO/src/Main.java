import java.util.ArrayList;
import java.util.List;

public class Main {

	public static void main(String[] args) {
		Aviao avioes[] = retornaAleatorio(); 
		System.out.println("QUANTIDADE DE AVIÕES: " + avioes.length);
		decola(avioes);
		
		if(avioes.length > 0) {
			System.out.println("\n---POUSO---");
			Aeroporto aeroporto = new Aeroporto("Galeao");
			aeroporto.permitirPouso(avioes[0]);			
		}

	}

	public static Aviao[] retornaAleatorio() {
		int tamanho = (int) (Math.random()*100);
		Aviao aviao[] = new Aviao[tamanho];
		
		for(int i=0;i<aviao.length;i++) {
			String tipo = aleatorio();
			if(tipo.equals("hidro")) {
				aviao[i] = new Hidroviao();
			} 
			else if(tipo.equals("heli")) {
				aviao[i] = new Helicoptero();
			} 
			else {
				//nothing happens, error
			}
		}
		
		return aviao;
	}
	
	public static String aleatorio(){
		int sorte = (int) (Math.random()*10);
		if((sorte%2)==0) {
			return "hidro";
		} else {
			return "heli";
		}
	}
	
	public static void decola(Aviao a[]) {
		for(int i=0;i<a.length;i++) {
			System.out.println("-----------------");
			if(a[i] instanceof Helicoptero) {
				((Helicoptero) a[i]).ligarHelice();
				a[i].levantarVoo();
			} 
			else if(a[i] instanceof Hidroviao) {
				((Hidroviao) a[i]).ligarTurbina();
				a[i].levantarVoo();
			} 
			else {
				//nothing happens, error
			}
		}
	}
	
	/*public static void main(String[] args) {
	Aeroporto aeroporto = new Aeroporto("Galeao");
	Helicoptero heli = new Helicoptero();
	Hidroviao hidro = new Hidroviao();
	Passaro p = new Passaro();
	
	aeroporto.permitirPouso(hidro);
	aeroporto.permitirPouso(heli);
	aeroporto.permitirPouso(p);
	
}*/
}
