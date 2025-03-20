package exercicioBasicoArrayPOO;

public class Mochila {
	private static int qntMochilas;
	
	private int anoFabricacao;
	private String cor;
	
	Mochila(int ano, String cor){
		this.setAno(ano);
		this.setCor(cor);
	}
	
	public static int getQntMochilas() {
		return qntMochilas;
	}

	public static void setQntMochilas(int qntMchilas) {
		Mochila.qntMochilas = qntMchilas;
	}


	public void setAno(int ano) {
		this.anoFabricacao = ano;
	}
	
	//not used
	public int getAno(){
		return this.anoFabricacao;
	}
	
	public void setCor(String cor) {
		this.cor = cor;
	}
	
	public String getCor(){
		return this.cor;
	}
}
