
public class ClienteEspecial extends Cliente{
	// como a super não tem conctrutor default precisa reesecrever
	/*
	esse é o padrão implicito. como super() não esta definida na superclasse
	da erro
	
	public ClienteEspecial() {
		super()
	}
	
	*/
	public ClienteEspecial(String cpf) {
		super(cpf);
	}
}
