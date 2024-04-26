
public class Cliente{
	private String cpf;
	private String nome;
	private double saldo;
	
	//super faz refencia a classe imediatamnete superior
	//super() fa zreferncia ao construtor
	
	//QUALQUER CHAMADA A UM CONSTRTUTOR DENTRO D EUM CONSTRUTOR PRECIS AESTAR NA PRIMEIRA LINHA
	
	//NA PRIMEIRA LINHA DE TODO CONSRUTOR TEM UM SUPER
	Cliente(String cpf) {
		//this.cpf=cpf;
		this(cpf,0); // refencia ao construtor que tem os parametros correspondentes da propria classe
	}
	
	public Cliente(String cpf, double saldo) {
		//this(cpf) se um fizesse referencia ao outro assim daria um loop
		this.cpf=cpf;
		this.saldo=saldo;
	}
	
	@Override
	public String toString() {
		return "Cliente " + this.cpf + " \nDA OBJECT:" + super.toString();
	}
}
