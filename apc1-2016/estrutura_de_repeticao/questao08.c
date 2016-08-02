#include<stdio.h>

void main() {
	int numeroA, numeroB, resto;
	printf("Digite dois números (ordem crescente): ");
	scanf("%d %d", &numeroA, &numeroB);
	while (numeroA > 0) {
		resto = numeroB % numeroA;
		numeroB = numeroA;
		numeroA = resto;
	}
	printf("MDC: %d", numeroB);
}
