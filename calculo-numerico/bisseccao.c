#include<stdio.h>
#include<math.h>

//raiz da funcao (x^2)-3 no intervalo [1;2] com erro relativo <= 0,01

float f(float x){
	return(pow(x,3)-10);
}

void main(){

	float a, b, erro;
	float xAnterior, xAtual;
	float funcA, funcB, funcX;
	int flg = 1;

	int i=0;
	a = 2;//limite inferior
	b = 3;//limite superior

	printf("\nFuncao: x^3-10\n\n");

	printf("k\t");
	printf("ak\t");
	printf("f(ak)\t");
	printf("bk\t");
	printf("f(bk)\t");
	printf("xk\t");
	printf("f(xk)\t");
	printf("E\n");

	while(flg == 1){
		printf("%d\t",i);
		printf("%.3f\t", a);
		printf("%.3f\t", f(a));

		printf("%.3f\t", b);
		printf("%.3f\t", f(b));

		xAtual = (a+b)/2;

		printf("%.3f\t", xAtual);
		printf("%.3f\t", f(xAtual));

		if(i>0){
			erro = fabs(xAtual-xAnterior)/fabs(xAtual);
			printf("%.3f", erro);
			if(erro <= pow(10,-3)){
				flg = 0;
			}
		}else{
			printf("---");
		}
		printf("\n");

		if(f(a)*f(xAtual) > 0){
			a = xAtual;
		}else{
			b = xAtual;
		}

		xAnterior = xAtual;
		i++;
	}

}
