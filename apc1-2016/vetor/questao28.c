#include<stdio_ext.h>

void main(){
	char palavra[20];
	int k;

	printf("Informe a constante k: ");
	scanf("%d", &k);

	printf("Informe a palavra: ");
	__fpurge(stdin);
	scanf("%[A-Za-z ]s", palavra);

	for(int i=0; palavra[i] != '\0'; i++){
		if(palavra[i] >= 65 && palavra[i] <= 90){
			palavra[i] += 32;
		}

		if(palavra[i] == 32){
			printf(" ");
		}else if(palavra[i]-k < 97){
			printf("%c", 123-(97-(palavra[i]-k)));
		}else{
			printf("%c", palavra[i]-k);
		}
	}
	printf("\n");
}
