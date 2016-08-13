#include<stdio.h>
#include<math.h>

double f(double x){
	return ( 2*pow(x,3)+log(x)-5 );
}

double fl(double x){
	return ( 6*pow(x,2)+(1/x) );
}

double f2l(double x){
	return ( 12*x-(1/pow(x,2)) );
}

void main(){

	double xk[2], fxk, flxk, erro;
	double xAtual, xAnterior;
	double tmp;
	//fxk = f(xk)
	//flkx = f'(xk)

	int i = 0;//contador
	int flg = 1;

	if( f(1)*f2l(1) > 0){
		//xk[i] = 1;
		xAtual = 1;
	}else{
		//xk[i] = 2;
		xAtual = 2;
	}

	printf("k\txk\t\tf(xk)\t\tf'(xk)\t\tE\n");

	while(flg == 1){
		//fxk = f(xk[i]);
		fxk = f(xAtual);
		//flxk = fl(xk[i]);
		flxk = fl(xAtual);

		printf("%d\t",i);
		//printf("%.8lf\t", xk[i]);
		printf("%.8lfzt", xAtual);
		printf("%.8lf\t", fxk);
		printf("%.8lf\t", flxk);

		if(i>0){
			//erro = fabs(( fabs(xk[i])-fabs(xk[i-1]) ) / ( fabs(xk[i]) ));
			erro = fabs( (fabs(xAnterior)-fabs(xAtual)) / fabs(xAtual));
			printf("%.8f",erro);

			if(erro <= pow(10,-7)){
				printf("\n");
				//printf("Erro: %.8lf\n", erro);
				break;
				//printf("\n\n%d\n",i);
				flg = 0;
			}

			tmp = xAtual;
			xAtual = xAnterior - (f(xAnterior)/fl(xAnterior));
			xAnterior = tmp;

		}else{
			printf("---");
			xAnterior = xAtual;
		}
		printf("\n");
		i++;

		//xAnterior = xAtual;
//		tmp = xAtual;
//		xAtual = xAnterior - (f(xAnterior)/fl(xAnterior));
//		xAnterior = tmp;
		//xk[i] = xk[i-1] - (f(xk[i-1]) / fl(xk[i-1]));

	}


}
