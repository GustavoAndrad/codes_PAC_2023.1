
public class Novo extends Imovel{

	@Override
	public double getPreco() {
		double adicional = super.getPreco()*0.1;
		return (super.getPreco() + adicional);
	}
	
	
}
