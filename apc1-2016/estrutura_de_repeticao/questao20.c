#include<stdio.h>

void main(){
	float dist, tempo, media=1;

	for(tempo=0,dist=0;tempo!=-1 && dist!=-1;){
		scanf("%f%f", &dist,&tempo);

		if((tempo != 0 && tempo != -1) && (dist != 0 && dist != -1)){
			media += (dist/tempo)*3.6;
			//printf("Media: %.2f\n",media);
		}

		if(tempo == 0 && dist == 0){
			printf("Saida: %.2f\n", media);
			media = 0;
		}
	}
	printf("Saiu!\n");
}
