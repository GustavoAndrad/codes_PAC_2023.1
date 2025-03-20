
public class Teste {

	public static void main(String[] args) {
		ContaBancaria c1 = new ContaBancaria();
		Data dataAbertura = new Data();
		
		dataAbertura.setAno(2012);
		dataAbertura.setMes(05);
		dataAbertura.setDia(12);
		
		c1.setDataAbertura(dataAbertura);
		c1.depositar(10);
		c1.sacar(20);
		c1.sacar(5);
		
		System.out.println(c1.getSaldoFormatado());
		System.out.println(c1.getDataAberturaFormatda());

	}

}
