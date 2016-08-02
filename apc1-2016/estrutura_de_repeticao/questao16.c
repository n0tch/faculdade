#include<stdio.h>

void main(){
	int n;
	printf("Informe o valor de n, que seja menor do que 50: ");
	scanf("%d", &n);

	if(n < 50){
		for(int i=1;i<=n;i++){
			for(int j=1; j<=i;j++){
				if(i==j){
					printf("%d ",j);
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}else{
		printf("Verifique valor informado!(N > 50)\n");
	}
}
