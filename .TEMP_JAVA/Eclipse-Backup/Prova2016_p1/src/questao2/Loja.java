package questao2;

import java.util.ArrayList;

public class Loja {
	private int id;
	private String nome;
	private ArrayList<Produto> produtosVendidos = new ArrayList<>();
	private ArrayList<Produto> estoque = new ArrayList<>();
	
	public int getId() {
		return id;
	}
	
	public void setId(int id) {
		this.id = id;
	}
	
	public String getNome() {
		return nome;
	}
	
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public double FaturamentoBruto() {
		double faturamento = 0;
		for(Produto produto : produtosVendidos) {
			faturamento+=produto.getPreco();
		}
		return faturamento;
	}
	
	public int quantidadeProdutosVendidos() {
		return produtosVendidos.size();
	}
	

	public int quantidadeProdutosLigaveisVendidos() {
		int qnt = 0;
		for(Produto produto : produtosVendidos) {
			if(produto instanceof Ligavel) {
				qnt++;
			}
		}
		return qnt;
	}
	
	public void imprimirRelatorioVenda() {
		
		for(Produto produto : produtosVendidos) {
			String mensagem = "id: "+ produto.getId() + "\n Preco: " + produto.getPreco();
			
			if(produto instanceof Carro) {
				mensagem += "\n Placa: " + ((Carro)produto).getPlaca();
			} 
			else if(produto instanceof Liquidificador) {
				mensagem+= "\nMarca: " + ((Liquidificador)produto).getMarca();
			}
			else if(produto instanceof Chocolate) {
				mensagem+= "\nTipo: "+((Chocolate)produto).getTipo();
			}
			
			System.out.println("----------------");
			System.out.println(mensagem);
		}
	}
	
	public void adicionarAoEstoque(Produto produto) {
		estoque.add(produto);
		System.out.println("Adicionando no estoque");
	}
	
	public void vender(Produto produto) {
		estoque.remove(produto);
		produtosVendidos.add(produto);
		System.out.println("Vendendo "+ produto.getId());
	}
	
public void imprimirPrdodutosNoEstoque() {
		
		for(Produto produto : estoque) {
			String mensagem = "id: "+ produto.getId() + "\n Preco: " + produto.getPreco();
			
			if(produto instanceof Carro) {
				mensagem += "\n Placa: " + ((Carro)produto).getPlaca();
			} 
			else if(produto instanceof Liquidificador) {
				mensagem+= "\nMarca: " + ((Liquidificador)produto).getMarca();
			}
			else if(produto instanceof Chocolate) {
				mensagem+= "\nTipo: "+((Chocolate)produto).getTipo();
			}
			
			System.out.println("----------------");
			System.out.println(mensagem);
		}
	}
}
