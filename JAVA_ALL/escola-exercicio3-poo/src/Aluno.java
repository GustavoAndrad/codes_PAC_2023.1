
public class Aluno {
	private String nome;
	private double nota1;
	private double nota2;

	public void setNome(String nome) {
		this.nome = nome;
	}

	public double getNota1() {
		return nota1;
	}

	public void setNota1(double nota1) {
		this.nota1 = validaNota(nota1);
	}

	public double getNota2() {
		return nota2;
	}

	public void setNota2(double nota2) {
		this.nota2 = validaNota(nota2);
	}

	public String getNome() {
		return nome;
	}

	private double validaNota(double nota) {
		if (nota < 0) {
			return 0;
		} else if (nota > 10) {
			return 10;
		} else {
			return nota;
		}
	}
	
	public double getMedia() {
		return ((this.nota1 + this.nota2)/2);
	}
	
	public String getSituacao() {
		double media =  this.getMedia();
		if(media<4) {
			return "Reprovado";
		} 
		else if(media>6) {
			return "Aprovado";
		} 
		else {
			return "Recuperação";
		}
	}
}
