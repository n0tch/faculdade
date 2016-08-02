#include<stdio.h>
#define tamanho 10

void main(){
	char palavra[tamanho];
	int k;
	printf("Informe a palavra: ");
	scanf("%[A-Za-z ]s", palavra);

	printf("Informe a constante K: ");
	scanf("%d", &k);

	for(int i=0; palavra[i] != '\0'; i++){
		if(palavra[i] > 65 && palavra[i] < 90){
			palavra[i] += 32;
		}

		if(palavra[i] == ' '){
			printf(" ");
		}else if(palavra[i]+k > 122){
			printf("%c", 96 + (palavra[i]+k - 122));
		}else{
			printf("%c", palavra[i]+k);
		}
	}
	printf("\n");
}
