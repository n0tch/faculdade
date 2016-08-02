#include<stdio.h>

void main(){
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10, maior1, maior2;

	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);
	maior1 = n1;

	printf("Informe o segundo numero: ");
	scanf("%d", &n2);

	if(n2 > maior1){
		maior1 = n2;
		maior2 = n1;
	}else{
		maior2 = n2;
	}

	printf("Informe o terceiro numero: ");
	scanf("%d", &n3);

	if(n3 > maior1){
		maior1 = n3;
	}

	if(n3 < maior1 && n3 > maior2){
		maior2 = n3;
	}else{
		maior2 = n2;
	}
/*
	printf("Informe o quarto numero: ");
	scanf("%d", &n4);

	if(n4 < maior1 ){
		
	}
*/
	printf("Maior 2: %d\n", maior2);
}
