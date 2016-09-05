#include<stdio.h>
#define linha 3
#define coluna 4

float array[linha][coluna];
int ordemMatriz = 0;

//funcao para ler os valores do txt
void lerTXT();
//funcao para mostrar o conteudo da matriz
void mostrar_matriz(void);
//funcao para saber o fator de multiplicacao
float check_signal(float,float);

void main(){

	float aux[4], fator, pivo;
	int flg=1;
	//variavel fator sera para armazenar a constante a ser
	//multiplicada pela linha anterior

	lerTXT();

	//lpivo = pivo da linha
	for(int lpivo=0;lpivo<ordemMatriz;lpivo++){
		printf("%d vez\n", lpivo+1);
		pivo = array[lpivo][lpivo];
		printf("Pivo: %.0f\n\n",pivo);
		for(int i=1;i<ordemMatriz;i++){
			for(int j=0;j<ordemMatriz+1;j++){
				if(flg && i>lpivo){
					fator = check_signal( pivo, array[i][lpivo]  );
					printf("FATOR: %.0f\n", fator);
					flg = 0;
				}

				array[i][j] = array[i][j]+(fator*array[lpivo][j]);
		//		printf("%.0f. + %.0f = %.0f\n",array[i][j], (fator*array[lpivo][j]), array[i][j]+(fator*array[lpivo][j]) );
			}
			flg = 1;
			printf("\n");
		}
		printf("\n");
		mostrar_matriz();
	}
}

void lerTXT(){
	FILE *arq;
	arq = fopen("matriz.txt", "r");

	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			fscanf(arq, "%f", &array[i][j]);
		}
		ordemMatriz+=1;
	}
}

void mostrar_matriz(void){
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%.0f ",array[i][j]);
		}
		printf("\n");
	}
}

float check_signal(float a, float b){
	printf("A: %.0f B: %.0f ",a,b);
	/*
	if(a*b > 0)
		return -b/a;
	else
		return b/a;
	*/
	if(a>0 && b>0){
		return (-b)/a;
	}else if(a>0 && b<0){
		return b/(-a);
	}else if(a<0 && b>0){
		return (-b)/a;
	}else if(a<0 && b < 0){
		return b/a;
	}
}
