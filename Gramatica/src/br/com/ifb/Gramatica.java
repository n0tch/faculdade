package br.com.ifb;

import java.util.Scanner;

public class Gramatica {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		Palavra p = new Palavra();
		p.palavra = in.nextLine();
		//p.tamanho = p.palavra.length();
		in.close();

		p.S(p.palavra);
	}
	
}
