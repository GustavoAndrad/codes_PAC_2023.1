package questao1;

public class ArrayBooleano { // public class Util
	public static void main(String[] args) {
		boolean array_bool[] = {false, true, false, true, true, true, false};
		int arrayNovo[] = (new ArrayBooleano()).binarizaArray(array_bool);
		
		for(int i=0;i<arrayNovo.length;i++) {
			System.out.print(arrayNovo[i]+" ");
		}
		
	}
	
	public int[] binarizaArray(boolean bool[]) {
		int zero_um[] = new int[bool.length];
		for(int i=0;i<bool.length;i++) {
			if(bool[i]==true) {
				zero_um[i] = 1;
			} else {
				zero_um[i] = 0;
			}
		}
		
		return zero_um;
	}
}
