#include<stdio.h>

void main(){
	int x, y;
	printf("Informe o valor do X: ");
	scanf("%d", &x);

	printf("Informe o valor do Y: ");
	scanf("%d", &y);

	if(x > 0 && y > 0){
		printf("Primeiro quadrante!\n");
	}else if(x > 0 && y < 0){
		printf("Segundo quadrante!\n");
	}else if(x < 0 && y < 0){
		printf("Terceiro quadrante!\n");
	}else{
		printf("Quarto quadrante!\n");
	}
}
