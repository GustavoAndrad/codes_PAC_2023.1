package questão1;

public class FormatoIncorretoException extends Exception{
	FormatoIncorretoException(int qnt, String str){
		super(str +" só tem " + qnt +" hashtags");
	}
}
