package questao1_1;

import java.util.ArrayList;

public class BombaCombustivel {
	private double quantidadeLitros;
	private double precoPorLitro;
	
	public double getQuantidadeLitros() {
		return quantidadeLitros;
	}

	public void setQuantidadeLitros(double quantidadeLitros) {
		this.quantidadeLitros = quantidadeLitros;
	}

	public double getPrecoPorLitro() {
		return precoPorLitro;
	}

	public void setPrecoPorLitro(double precoPorLitro) {
		this.precoPorLitro = precoPorLitro;
	}

	public void completarTanque(Abastecivel a) {
		double litros = 0;		
		if(this.getQuantidadeLitros() > 0) {
			System.out.print("\n"+a);
			while((this.getQuantidadeLitros() > 0) && (a.abastecer(0.1))) {
				this.setQuantidadeLitros(this.getQuantidadeLitros()-0.1);
				litros+=0.1;
			}
			System.out.printf("\nLitros: %.1f L", litros);
			System.out.printf("\nPreço: %.1f \n",(litros*getPrecoPorLitro()));			
		}
	}
	
	public void abastecerFila(ArrayList x) {
		for(Object i : x) {
			if(i instanceof Abastecivel) {
				this.completarTanque((Abastecivel)i);
			}
		}
	}
}
