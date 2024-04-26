
public class Main_Zoo {

	public static void main(String[] args) {
		//Leao x = new Leao();
		// a variavael só pode atribuir a refrencia da propria classe ou de alguma subclasse 
		//(mas dess jeito não tem os atributos/métodos especificos das subclasses, pq da perspectivado programa x é um animal)
		// tem que obedecer a hieraruia (so pode referenciar ela mesma e  asde baixo)  - Leao x = new Animal() nao compila 
		//  Object x = new Animal() compila mas nn tem acesso a nenhum metodo de animal, etc.
		Animal x = new Leao();
		x.setNome("Simbinha");
		x.setIdade(13);
		System.out.println("Nome: " +x.getNome()+ "\nIdade: " + x.getIdade());


		//--------------------------------------------------------
		
		//melhor do que criar um array pra cada tipo de bicho
		// cada espaço é um animal, se tentasse chamar rugir() em alguma nao compilaria+
		Animal a [] = new Animal[3];
		a[0] = new Leao();
		a[1] = new Tartaruga();
		a[2] = new Elefante();
		for(int i =0;i<a.length;i++) {
			
			if(a[i] instanceof Leao) { 
				// tem que bater com a hierarquia
				// só da pra fazer casting quando esta na mesma hierquia pra baixo, irmao e pais não vai
				Leao u = (Leao) a[i]; //casting ((Leao) a[i]).rugir();
				u.rugir();
				
			}
			a[i].equals(a);
			a[i].correr();
			
			//mostra algumas funcoes sobre a classe
			// toda vez que da o syso num arepresentacao d eobj ele implicitamente mostra o .toSring()
			// ness ecaso ele foi reescrito
			System.out.println(a[i].toString());  // System.out.println(a[i]); mesma coisa
		}
	}
}

