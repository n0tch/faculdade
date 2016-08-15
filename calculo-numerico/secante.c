#include<stdio.h>
#include<math.h>

//M_PI = contante PI

float xAtual, xAnt;

float f(float x){
	return 2*pow(x,2)+sin(x)-10;
	//return pow(M_E, x)-sin(x)-2;
}

float fl(float x){
	//return pow(M_E, x)-cos(x);
	return 4*x+cos(x);
}

float f2l(float x){
	//return pow(M_E, x)+sin(x);
	return 4-sin(x);
}
float valorInicial(float x0, float x1){
	if(f(x0)*f2l(x0) > 0){
		xAtual = x0;
		xAnt = x1;
		return x0;
	}else{
		xAnt = x0;
		xAtual = x1;
		return x1;
	}
}

void main(){
	int k=0;
	float xk = valorInicial(M_PI/2, M_PI);
	float a,b, erro, flg=1;

	printf("\nFuncao: 2x^2+sin(x)-10\n\n");

	printf("k\txk-1\t\t\tf(xk-1)\t\t\txk\t\t\tf(xk)\t\tE\n");
	while(flg == 1){
		if(k==0){
			printf("%d\t%.6f\t\t%.6f\t\t%.6f\t\t%.6f\t----\n", k, xAnt, f(xAnt), xk, f(xk));
		}else{
			erro = fabs((xAtual-xAnt)/xAtual);
			printf("%d\t%.6f\t\t%.6f\t\t%.6f\t\t%.6f\t%.5f\n", k, xAnt, f(xAnt), xk, f(xk), erro);
			if(erro <= pow(10,-5)){
				flg = 0;
			}
		}
		a = (xAnt*f(xAtual))-(xAtual*f(xAnt));
		b = (f(xAtual)-f(xAnt));

		xk = a/b;
		xAnt = xAtual;
		xAtual = xk;
		k++;
	}
}
