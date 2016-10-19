/*
Escreva uma função que recebes 3 valores reais X, Y e Z e que verifique se esses valores podem ser
os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para
que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento
de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados.
*/

#include<stdio.h>

int verifica_lados(int x,int y,int z){

	int flg = 1;

	if(x > (y+z)){
		flg = 0;
	}else if(y > (x+z)){
		flg = 0;
	}else if(z > (x+y)){
		flg = 0;
	}

	return flg;
}

void tipo_triangulo(int x,int y,int z){

	if(x==y && y==z){
		printf("Triangulo Equilatero!\n");
	}else if(x!=y && x!=z){
		printf("Triangulo Escaleno\n");
	}else{
		printf("Triangulo Isoceles\n");
	}
}

void main(){

	int x,y,z;
	printf("Informe o lado x: ");
	scanf("%d", &x);

	printf("Informe o lado y: ");
	scanf("%d", &y);

	printf("Informe o lado z: ");
	scanf("%d", &z);

	if(verifica_lados(x,y,z)){
		tipo_triangulo(x,y,z);
	}else{
		printf("Esses valores nao podem ser os lados de um triangulo!\n");
	}
}
