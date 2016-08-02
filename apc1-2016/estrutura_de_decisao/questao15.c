#include<stdio.h>

void main(){
	int d1,m1,a1;
	int d2,m2,a2;

	printf("--- Data 1 ---\n");
	printf("Informe o dia: ");
	scanf("%d", &d1);

	printf("Informe o mes: ");
	scanf("%d", &m1);

	printf("Informe o ano: ");
	scanf("%d", &a1);

	printf("--- Data 2 ---\n");
	printf("Informe o dia: ");
	scanf("%d", &d2);

	printf("Informe o mes: ");
	scanf("%d", &m2);

	printf("Informe o ano: ");
	scanf("%d", &a2);

	if(a1 < a2){
		printf("Maior data: %d/%d/%d\n", d2,m2,a2);
		printf("Menor data: %d/%d/%d\n", d1,m1,a1);
	}else if(a2 < a1){
		printf("Maior data: %d/%d/%d\n", d1,m1,a1);
		printf("Menor data: %d/%d/%d\n", d2,m2,a2);
	}else if(a1 == a2){
		if(m1 > m2){
			printf("Maior data: %d/%d/%d\n", d1,m1,a1);
			printf("Menor data: %d/%d/%d\n", d2,m2,a2);
		}else if(m2 > m1){
			printf("Maior data: %d/%d/%d\n", d2,m2,a2);
	        printf("Menor data: %d/%d/%d\n", d1,m1,a1);
		}else if(m1 == m2){
			if(d1 > d2){
				printf("Maior data: %d/%d/%d\n", d1,m1,a1);
				printf("Menor data: %d/%d/%d\n", d2,m2,a2);
			}else if(d2 > d1){
				printf("Maior data: %d/%d/%d\n", d2,m2,a2);
	            printf("Menor data: %d/%d/%d\n", d1,m1,a1);
			}else if(d2 == d1){
				printf("Datas iguais!\n");
			}
		}
	}
}
