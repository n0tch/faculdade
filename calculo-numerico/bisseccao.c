#include<stdio.h>
#include<math.h>
//para a funcao x^2-3 no intervalo [1,2]
float a,b, funcA, funcB, xk;

float f(float x){
	return pow(x,2) - 3;
}

void main(){
	int i=0;

	a = 1;
	b = 2;

	printf("k\tak\tf(ak)\tbk\tf(bk)\txk\tf(xk)\tE\t\n");
	do{
		printf("%d\t",i);
		printf("%.3f\t",a);
		funcA = f(a);
		printf("%.3f\t",funcA);
		printf("%.3f\t",b);
		funcB = f(b);
		printf("%.3f\t",funcB);

		xk = (a+b)/2;
		printf("%.3f\t",xk);

		printf("%.3f\t",f(xk));

		if(f(a)*f(xk) > 0){
			a = xk;
		}else{
			b = xk;
		}

		if(i!=0){
			printf("%f", fabs( (2) ));
		}
		i++;

		printf("\n");
		if(i==5)
			break;
	}while(1);
}
