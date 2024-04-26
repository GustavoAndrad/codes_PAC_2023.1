import java.util.Locale;

public class ContaBancaria {
	private double saldo = 0.0;
	private Data dataAbertura;
	
	public double getSaldo() {
		return saldo;
	}
	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}
	public Data getDataAbertura() {
		return dataAbertura;
	}
	public void setDataAbertura(Data dataAbertura) {
		this.dataAbertura = dataAbertura;
	}
	
	public String getDataAberturaFormatda() {
		//return String.format(Locale.getDefault(), "%02d/%02d/%d", dataAbertura.getDia(), dataAbertura.getMes(), dataAbertura.getAno());	
		//formatando os dia menores que 10 -- não entendi direito
		return (dataAbertura.getDia()+"/"+dataAbertura.getMes()+"/"+dataAbertura.getAno());
	}
	
	public String getSaldoFormatado() {
		return String.format("R$ %.2f", this.getSaldo());
	}
	
	public void depositar(double valor) {
		this.saldo = this.saldo + valor;
	}
	
	public void sacar(double valor) {
		if(valor<=this.saldo) {
			this.saldo = this.saldo - valor;			
		}
	}
	
}
