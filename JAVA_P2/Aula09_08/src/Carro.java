
public class Carro {
	String placa, email;
	int ano;
	
	Carro(String placa, String email, int ano){
		this.placa = placa;
		this.email = email;
		this.ano = ano;
	}
	
	int getAno() {
		return this.ano;
	}
}
