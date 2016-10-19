#include<stdio.h>
#include<math.h>

float f(float x){
	return cos(x)/3;
}

void main(){
	int k=0, flg=1;
	float x = 0.25;//ponto especifico
	float erro;

	printf("k\tx\tf(x)\tE\n");
	while(flg){
		erro = fabs((x - f(x)) / f(x));
		printf("%d\t%.4f\t%.4f\t%.4f\n", k, x, f(x), erro);
		x = f(x);
		if(erro <= pow(10,-3))
			flg = 0;

		k++;
	}
}
