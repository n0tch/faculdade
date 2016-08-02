#include<stdio.h>

void main(){
	int a,b,c;
	printf("Informe o primeiro lado: ");
	scanf("%d", &a);

	printf("Informe o segundo lado: ");
	scanf("%d", &b);

	printf("Informe o terceiro lado: ");
	scanf("%d", &c);

	if( (a==b) && (a==c) && (b==c)){
		printf("Triangulo Equilatero!\n");
	}else if((a!=b) && (a!=c) && (b!=c)){
		printf("Triangulo Escaleno!\n");
	}else{
		printf("Triangulo Isoceles!\n");
	}
}
