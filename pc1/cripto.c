#include<stdio.h>
#include<string.h>
#include<math.h>

#define TAM 30

//TENIS
int tenis[5] = {116, 101, 110, 105, 115};
//POLAR
int polar[5] = {112, 111, 108, 97, 114};

//funcao para executar tenis polar
void t_p(char msg[TAM], char t[5], char p[5]);
//verifica se as chaves estao corretas
int check_key(char t[5], char p[5]);
//funcao para criptografar
void cript(char msg[TAM]);

void main(){
	char msg[TAM];
	char t[5],p[5];
	printf("Informe a 1 chave: ");
	scanf("%s", t);
	printf("Informe a 2 chave: ");
	scanf("%s", p);

	//if(strlen(p) == 5){
	//pow(2,10) + pow(2,6) + 1 == 1089
	if(check_key(t,p) == (pow(2,10) + pow(2,6) + 1) ){
		printf("Informe a mensagem: ");
		scanf("%s", msg);
		t_p(msg,t,p);
		printf("Resultado: %s\n", msg);
		cript(msg);
		//check_key(t,p);
	}else{
		printf("Verifique suas chaves!\n");
	}
}

int check_key(char t[5], char p[5]){
	int i, soma=0;
	for(i=0;i<strlen(t);i++){
		soma+=t[i];
	}
	for(i=0;i<strlen(p);i++){
		soma+=p[i];
	}
	//printf("Soma: %d\n", soma);
	return soma;
}

void t_p(char msg[TAM], char t[5], char p[5]){
	int i,j;
	for(i=0;i<strlen(msg);i++){
		for(j=0;j<5;j++){
			if(msg[i] == t[j]){
				msg[i] = p[j];
				continue;
			}
			if(msg[i] == p[j]){
				msg[i] = t[j];
			}
		}
	}
}

void cript(char msg[TAM]){
	//33 - 254
	int i, aux;
	if(strlen(msg) % 2 == 0){
		printf("String par!\n");
		for(i=0;i<strlen(msg)/2;i++){
			aux = fabs(((sin(msg[i]) * 254)));
			printf("aux[%d]: %d\n", i,aux);
			msg[i] = aux;
		}
	}else{
		printf("String impar!\n");
		for(i=0;i<strlen(msg)+1/2;i++){
			aux = fabs(((sin(msg[i]) * 254)));
			printf("aux[%d]: %d\n", i,aux);
			msg[i] = aux;
		}
	}
	printf("%s\n", msg);
	// }else{
	// 	for(i=0;i<(strlen(msg)+1)/2;i++){
	// 		msg[i] = 
	// 	}
	// }
}