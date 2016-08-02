#include<stdio.h>

void main(){
	int n, N=1,P=1,Q=1;
	printf("Informe o valor de n: ");
	scanf("%d", &n);

	for(int i=0, fat=1;i<=n;i++){
		for(int j=0;j<=i;j++){
			for(int k=1; k<=i; k++){
				N *= k;
			}
			for(int k=1; k<=j; k++){
				P *= k;
			}
			for(int k=1; k<=(i-j); k++){
				Q *= k;
			}

			printf(" %d ",N/(P*Q));
			N=P=Q=1;
		}
		printf("\n");
	}
}
