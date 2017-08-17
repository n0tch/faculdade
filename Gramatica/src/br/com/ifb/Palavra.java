package br.com.ifb;

public class Palavra {
	public String palavra;
	private Integer tamanho=1;
	
	public String S(String palavra){
		System.out.println("S->BA ");
		return B();
	}
	
	public String B(){
		if(tamanho<=palavra.length() && verfExistencia(palavra.charAt(tamanho-1)) == 1){
			System.out.println(palavra.substring(0, tamanho) + "->A ");
			return BA();
		}else{
			return "|";
		}
	}
	
	public String B1(){

		System.out.println(palavra.substring(0, tamanho) + "->BA ");
		this.tamanho++;
		if(verfExistencia(palavra.charAt(tamanho-1)) == 1){
			return B();
		}else{
			return "";
		}
	}
	
	public String BA(){
		if(tamanho==palavra.length()){
			System.out.println(palavra.substring(0, tamanho) + "->λ");
			System.out.println("Derivação completa!");
			return "";
		}else{
			System.out.println(palavra.substring(0, tamanho) + "->B ");
			return B1();
		}
	}
	
	public int verfExistencia(char i){
		char terminais[] = {'1','2','3','4','5','6','7','8','9','0'};
		boolean flg = false;
		int j,k=0;
		
		for(k=0;k<terminais.length;k++){
			if(i == terminais[k]){
				flg = true;
			}
		}
		
		if(!flg){
			System.out.println("Caracter '"+ i + "' não pertence ao alfabeto.");
			System.out.println("Programa encerrado!");
			return -1;
		}else{
			return 1;
		}

	}
}
