#include<stdio.h>
#include<math.h>

#define tamanho 30

void main(){
	int primo=0, vzs=0, X[tamanho];

	for(int i=101; vzs!=30; i+=2){
		for(int j=3; j<=(int)sqrt(i)+1;j++){
			if(i%j==0){
				primo++;
			}
		}
		if(primo == 0){
			X[vzs] = i;
			vzs++;
		}
		primo=0;
	}
	for(int i=0;i<tamanho;i++){
		printf("%d\n", X[i]);
	}
}
