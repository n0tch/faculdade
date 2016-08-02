#include<stdio.h>

void main(){
	printf("Pares\n");
	int vzs=0;
	for(int i=1;i<=60;i++){
		if(vzs%2==0 && i%2==0){
			printf("%d\n",i);
			vzs++;
		}
	}
}
