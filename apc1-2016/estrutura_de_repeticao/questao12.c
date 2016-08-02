#include<stdio.h>

void main(){
	double y,xn, div;
	printf("Informe o numero: ");
	scanf("%lf", &y);

	for(int i=1;i<=20;i++){
		if(i==1){
			xn = y/2;
			printf("%d aprox.: %.5lf\n",i, xn);
		}else{
			div = ((xn*xn)-y) / (2*xn);
			//printf("DIV: %f\n", div);
			xn = xn - div;
			printf("%d aprox.: %.60lf\n",i, xn);
		}
	}
}
