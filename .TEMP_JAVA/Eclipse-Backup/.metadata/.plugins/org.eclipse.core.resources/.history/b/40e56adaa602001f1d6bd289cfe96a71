package questao1_1;

public class Carro extends Veiculo implements Abastecivel{
	private final double tamanhoTanque;
	private double quantidadeAtual;
	
	Carro(String modelo, double tamanho){
		super(modelo);
		this.tamanhoTanque = tamanho;
	}

	public double getQntAtual() {
		return quantidadeAtual;
	}

	public void setQntAtual(double qntAtual) {
		this.quantidadeAtual = qntAtual;
	}

	public double getTamanhoTanque() {
		return this.tamanhoTanque;
	}

	@Override
	public boolean abastecer(double litros) {
		if((quantidadeAtual+litros)<tamanhoTanque) {
			quantidadeAtual+=litros;
			return true;
		}
		return false;
	}
}
