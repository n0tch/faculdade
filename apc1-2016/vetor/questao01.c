#include<stdio.h>

void main(){
	int n, vzs;
	printf("Total de notas: ");
	scanf("%d", &n);

	int notas[n];

	for(int i=0; i<n;i++){
		printf("Informe a nota %d (0 a 100): ", i);
		scanf("%d", &notas[i]);
	}

	for(int i=0; i<n; i++){
		vzs=0;
		for(int j=0; j<n;j++){
			//printf("Nota: %d\tVZS:%d\n", notas[i],vzs);
			if(notas[i] == notas[j]){
				vzs++;
			}
		}
		printf("%d aparece %d vezes.\n", notas[i], vzs);
	}
}
