
public class Main {

	public static void main(String[] args) {
		Aluno a1 = new Aluno();
		a1.setNome("Gustavo");
		a1.setNota1(15);
		a1.setNota2(-90);
		
		System.out.printf("Nome: %s\nNota 1: %.2f\nNota 2: %.2f\nSituacao: %s -- %.2f",
				a1.getNome(), a1.getNota1(), a1.getNota2(), a1.getSituacao(), a1.getMedia());
		

	}

}
