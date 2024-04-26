package questao2;

public class Main {

	public static void main(String[] args) {
		Loja loja = new Loja();
		loja.setId(1);
		loja.setNome("Lojinha");
		
		Carro carro = new Carro();
		carro.setPreco(10);
		carro.setId(1);
		carro.setPlaca("1234");
		
		Liquidificador liquidificador = new Liquidificador();
		liquidificador.setPreco(10);
		liquidificador.setId(2);
		liquidificador.setMarca("LUZ");
		
		Chocolate chocolate = new Chocolate();
		chocolate.setPreco(10);
		chocolate.setId(3);
		chocolate.setTipo("Ao leite");
		
		loja.adicionarAoEstoque(carro);
		loja.adicionarAoEstoque(liquidificador);
		loja.adicionarAoEstoque(chocolate);
		
		Cliente cliente = new Cliente();
		cliente.setCpf("12345");
		
		cliente.comprar(loja, carro);
		cliente.comprar(loja, chocolate);
		
		System.out.println("Faturamento: " + loja.FaturamentoBruto());
		System.out.println("Qnt. Prod. Vendidos: " + loja.quantidadeProdutosVendidos());
		System.out.println("Qnt. Prod. Ligaveis Vendidos: "+ loja.quantidadeProdutosLigaveisVendidos());
		System.out.println("\nVENDA: ");
		loja.imprimirRelatorioVenda();
		System.out.println("\nESTOQUE: ");
		loja.imprimirPrdodutosNoEstoque();
	}

}
