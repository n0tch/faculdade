#include<stdio.h>
#include<math.h>

//raiz da funcao (x^2)-3 no intervalo [1;2] com erro relativo <= 0,01

float a, b, x[2], erro;
float funcA, funcB, funcX;
int flg = 0;

float f(float x){
	return(pow(x,3)-10);
}

void main(){

	int i=0;
	a = 2;//limite inferior
	b = 3;//limite superior

	printf("k\t");
	printf("ak\t");
	printf("f(ak)\t");
	printf("bk\t");
	printf("f(bk)\t");
	printf("xk\t");
	printf("f(xk)\t");
	printf("E\n");

	do{
		printf("%d\t",i);
		printf("%.3f\t", a);
		printf("%.3f\t", f(a));

		printf("%.3f\t", b);
		printf("%.3f\t", f(b));

		x[i] = (a+b)/2;

		printf("%.3f\t", x[i]);
		printf("%.3f\t", f(x[i]));

		if(i>0){
			flg = 1;
			erro = fabs(x[i]-x[i-1])/fabs(x[i]);
			printf("%.3f", erro);
			//printf("%.3f", fabs(x[i] - x[i-1]))/fabs(x[i]);
		}else{
			printf("---");
		}
		printf("\n");

		if(f(a)*f(x[i]) > 0){
			a = x[i];
		}else{
			b = x[i];
		}

		i++;

		if(flg == 1){
			if(erro <= 0.001){
				break;
			}
		}

	}while(1);

}
