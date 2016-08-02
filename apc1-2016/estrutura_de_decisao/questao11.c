#include<stdio.h>

void main(){
	int a, b, c;
	printf("Informe o primeiro numero: ");
	scanf("%d", &a);

	printf("Informe o segundo numero: ");
	scanf("%d", &b);

	printf("Informe o terceiro numero: ");
	scanf("%d", &c);

	printf("Ordem crescente\n");

	if((a < b) && (a < c)){
		if(b < c){
			printf("%d -> %d -> %d\n", a,b,c);
		}else{
			printf("%d -> %d -> %d\n", a,c,b);
		}
	}else if((b < a) && (b < c)){
		if(a < c){
			printf("%d -> %d -> %d\n", b, a,c);
		}else{
			printf("%d -> %d -> %d\n", b, c, a);
		}
	}else{
		if(a < b){
			printf("%d -> %d -> %d\n", c, a, b);
		}else{
			printf("%d -> %d -> %d\n", c, b, a);
		}
	}
}
