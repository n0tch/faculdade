#include<stdio.h>

void main(){
	int num, i;
	printf("Informe o valor de n: ");
	scanf("%d", &num);

	i = num;
	printf("Numeros divisiveis por %d: ",num);
	while(i>=2){
		if(num%i==0){
			printf("%d ", i);
		}
		i--;
	}
	printf("\n");
}
