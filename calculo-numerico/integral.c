#include<stdio.h>
#include<math.h>

#define N 20 	//numero de trapezios
#define A 0 	//intervalo inferior
#define B 1.2	//intervalo superior

float f(float x){
	return pow(M_E, x)*cos(x);
}

void trap_iterativo(int i){//trapezio iterativo
	float h, aux, f_aux;

	h = (B-A)/i;//altura dos trapezios
	f_aux = 0;
	aux = A;//auxiliar comeca sempre no intervalo inferior

	for(int j=0;j<=i;j++){
		if(j != 0 && j != i){//multiplico por 2 exeto na primeira e no ultima iteracao
			f_aux += 2*f(aux);
		}else{
			f_aux += f(aux);
		}
		aux += h;
	}

	f_aux *= (h/2);
	printf("%d\t\t%.7f\n", i,f_aux);
}

int main(){

	printf("Nº Trapezio\tAproximacao\n");
	for(int i=1;i<=N;i++){
		trap_iterativo(i);
	}
	return 0;
}