#include<stdio.h>
#include<stdlib.h>

void soma();//realiza a soma dos vetores
void subtracao();//realiza a subtracao dos vetores
void prodEscalar(int op);//realiza o produto escalar dos vetores ||| op -> 1 = vetor  \ 2 = constante
void prodVetorial();//realiza o produto vetorial dos vetores
char letraCoeficiente(int pos);//recebe uma posicao e devolve a letra correspondente (0->i | 1->j | 2->k)
void mostrarResultado(int *vetResult);//mostra o vetor apos a operacao escolhida ser realizada

void main(){

	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Produto Vetorial\n");
	printf("4 - Produto Escalar com Vetor\n");
    printf("5 - Produto Escalar com constante real\n");

	int esc;//esc -> escolha da operacao
	int qnt;//qnt -> quantidade de vetores
	int op;//op -> multiplicacao escalar por vetor ou constante

	scanf("%d", &esc);

	switch(esc){
		case 1:
			soma();
			break;
		case 2:
			subtracao(qnt);
			break;
		case 3:
			prodVetorial();
			break;
		case 4:
			op = 1;
			prodEscalar(op);
			break;
		case 5:
			op = 2;
			prodEscalar(op);
			break;
		default:
			printf("Operacao invalida!\n");
	}
}

char letraCoeficiente(int pos){
	char letra;
	if(pos == 0){
		letra = 'i';
	}else if(pos == 1){
		letra = 'j';
	}else if(pos == 2){
		letra = 'k';
	}

	return letra;
}

void soma(){

	int i=0, j, vet[3] = {0,0,0};
	int vetResult[3] = {0,0,0};
	int op = 1;

	system("cls");
	while(op){
		if(i == 0){
			printf("--vetor %d---\n", i+1);
			for(j=0;j<3;j++){
				printf("Informe o coeficiente de %c: ", letraCoeficiente(j));
				scanf("%d", &vetResult[j]);
			}
		}else{
			printf("---vetor %d---\n", i+1);
			for(j=0;j<3;j++){
				printf("Informe o coeficiente de %c: ", letraCoeficiente(j));
				scanf("%d", &vet[j]);
				vetResult[j] += vet[j];
			}
		}

		i++;
		if(i>1){
			printf("Deseja informar outro vetor? (1 - Sim / 0 - Nao): ");
			scanf("%d", &op);
		}
		system("cls");
	}

	printf("---Vetor resultante (soma)---\n");
	mostrarResultado(vetResult);

}

void subtracao(){
	int i=0, j, vet[3] = {0,0,0};
	int vetResult[3] = {0,0,0};
	int op = 1;

	system("cls");
	while(op){
		if(i == 0){
			printf("--vetor %d---\n", i+1);
			for(j=0;j<3;j++){
				printf("Informe o coeficiente de %c: ", letraCoeficiente(j));
				scanf("%d", &vetResult[j]);
			}
		}else{
			printf("---vetor %d---\n", i+1);
			for(j=0;j<3;j++){
				printf("Informe o coeficiente de %c: ", letraCoeficiente(j));
				scanf("%d", &vet[j]);
				vetResult[j] -= vet[j];
			}
		}

		i++;
		if(i>1){
			break;
		}
		system("cls");
	}

	printf("---Vetor resultante (subtracao)---\n");
	mostrarResultado(vetResult);
}

void prodEscalar(int tipo){
	int i=0, j, vet[3] = {1,1,1};
	int vetResult[3] = {1,1,1};
	int op = 1, result=0;

	system("cls");
	while(op){
		if(i == 0){
			printf("--vetor %d---\n", i+1);
			for(j=0;j<3;j++){
				printf("Informe o coeficiente de %c: ", letraCoeficiente(j));
				scanf("%d", &vetResult[j]);
			}
		}else{
			if(tipo == 1){
				printf("---vetor %d---\n", i+1);
				for(j=0;j<3;j++){
					printf("Informe o coeficiente de %c: ", letraCoeficiente(j));
					scanf("%d", &vet[j]);
					vetResult[j] *= vet[j];
				}
			}else{
				float numReal;
				printf("Informe o numero real: ");
				scanf("%f", &numReal);
				for(j=0;j<3;j++){
					vetResult[j] *= numReal;
				}
				break;
			}

		}

		i++;
		if(i>1){
			break;
		}
		system("cls");
	}

	printf("---Valor resultante (produto escalar)---\n");
	for(j=0;j<3;j++){
		result += vetResult[j];
	}
	printf("Resultado: %d\n", result);
	system("pause");
}

void prodVetorial(){
	int i=0, j, u[3];
	int v[3];
	int vetResult[3];
	int op = 1;

	system("cls");
	while(op){
		if(i == 0){
			printf("--vetor %d---\n", i+1);
			for(j=0;j<3;j++){
				printf("Informe o coeficiente de %c: ", letraCoeficiente(j));
				scanf("%d", &v[j]);
			}
		}else{
			printf("---vetor %d---\n", i+1);
			for(j=0;j<3;j++){
				printf("Informe o coeficiente de %c: ", letraCoeficiente(j));
				scanf("%d", &u[j]);
			}

			//regra de cramer
            vetResult[0] = ((v[1]*u[2]) - (v[2]*u[1]));
            vetResult[1] = ( ((v[0]*u[2]) - (v[2]*u[0])) ) * (-1);
            vetResult[2] = ((v[0]*u[1]) - (v[1]*u[0]));

		}

		i++;
		if(i>1){
			break;
		}
		system("cls");
	}

	printf("---Produto Vetorial---\n");
	mostrarResultado(vetResult);
}

void mostrarResultado(int *vetResult){
	int j;
	for(j=0;j<3;j++){
		if(j!=2){
			printf("(%d)%c + ", vetResult[j], letraCoeficiente(j));
		}else{
			printf("(%d)%c\n", vetResult[j], letraCoeficiente(j));
		}
	}
	system("pause");
}
