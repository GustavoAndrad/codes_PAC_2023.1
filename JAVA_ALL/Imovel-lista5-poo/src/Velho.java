
public class Velho extends Imovel{

	@Override
	public double getPreco() {
		double desconto = (super.getPreco()*0.1);
		return (super.getPreco() - desconto);
	}
	
}
