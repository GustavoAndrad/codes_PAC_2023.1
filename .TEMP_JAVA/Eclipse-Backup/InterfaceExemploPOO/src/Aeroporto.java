
public class Aeroporto {
	private String nome;
	
	Aeroporto(String nome){
		this.setNome(nome);
	}
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	
	public void permitirPouso(Voador a) {
		System.out.println("Aeroporto "+ this.getNome() + " vai dar permissao pra voo");
		a.pousar();
		if(a instanceof Animal) {
			System.out.println("( possivel animal na pista) ");
		}
	}
}
