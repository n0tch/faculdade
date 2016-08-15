#include<stdio.h>
#include<math.h>


float f(float x){
	return 2*(pow(x,3))+log(x)-5;
}

//fl = f'(x)
float fl(float x){
	return 6*(pow(x,2))+(1/x);
}

//f2l = f''(x)
float f2l(float x){
	return 12*x-(1/pow(x,2));
}

float valorInicial(float x0, float x1){
	if(f(x0)*f2l(x0) > 0){
		return x0;
	}else{
		return x1;
	}
}

void main(){
	int k=0, flg = 1;
	float xAnt, xAtual, erro;
	float xk= valorInicial(1,2);

	printf("\nFuncao: 2x^3+ln(x)-5\n\n");
	printf("k\txk\t\tf(xk)\t\tf'(xk)\t\tE\n");

	while(flg == 1){
		if(k==0){
			printf("%d\t%.8f\t%.8f\t%.8f\t----\n",k,xk, f(xk),fl(xk));
			xAnt = xk;
			xAtual = xk;
		}else{
			xAnt = xAtual;
			xAtual = xk;

			erro = fabs((xAtual - xAnt)/xAtual);
			printf("%d\t%.8f\t%.8f\t%.8f\t%.8f\n",k,xk, f(xk),fl(xk),erro);

			if(erro <= pow(10,-7))
				flg = 0;
		}
		xk = xk - (f(xk)/fl(xk));
		k++;
	}
}
