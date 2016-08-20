#include<stdio.h>
#include<math.h>

float f(float x){
	return pow((x+1),2)*pow(M_E, (pow(x,2)-2))-1;
}

void main(){
//	printf("f(-2) = %f\n", f(-2));
	printf("Funcao: (x+1)^2*e^(x^2-2)-1\n");
	int k=0, flg = 1;
	float xAnt, xAtual, xProx;//xk-1, xk, xk+1 respectivamente
	float erro;
	xAnt = -2;//limite inferior do intervalo
	xAtual = -1;//limite superior do intervalo

	while(flg == 1){

		if(k==0){
			xProx = ((xAnt*f(xAtual))-(xAtual*f(xAnt)))/(f(xAtual)-f(xAnt));
			printf("%d\t%f\t%f\t%f\t%f\t%f\t%f\t------\n", k,xAnt,f(xAnt), xAtual, f(xAtual), xProx, f(xProx));
			//printf("xk+1: %f\n", xProx);
		}else{
			if( f(xAtual)*f(xProx) > 0 ){
				xAtual = xProx;
				xProx = ((xAnt*f(xAtual))-(xAtual*f(xAnt)))/(f(xAtual)-f(xAnt));
				erro = fabs((xAtual-xProx)/xProx);

				if(erro <= pow(10, -2))
					flg = 0;
				printf("%d\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n", k,xAnt,f(xAnt), xAtual, f(xAtual), xProx, f(xProx), erro);
			}
		}

		k++;
	}
}
