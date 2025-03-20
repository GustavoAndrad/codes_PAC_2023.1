package questao2;

public class Liquidificador extends Produto implements Ligavel{
private String marca;

public String getMarca() {
	return marca;
}

public void setMarca(String marca) {
	this.marca = marca;
}

public void ligar() {
	System.out.println("Liquidificador ligando");
}

}
