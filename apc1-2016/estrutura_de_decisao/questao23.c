#include<stdio_ext.h>

void main(){
	char a,b,c, d,e,f, aux;

	printf("\nPrimeira palavra de 3 letras\n\n");
	printf("Informe a primeira letra: ");
	scanf("%c", &a);
	printf("Informe a segunda letra: ");
	__fpurge(stdin);
	scanf("%c", &b);
	printf("Informe a terceira letra: ");
	__fpurge(stdin);
	scanf("%c", &c);

	printf("\nSegunda palavra de 3 letras\n\n");
	printf("Informe a primeira letra: ");
	__fpurge(stdin);
	scanf("%c", &d);
	printf("Informe a segunda letra: ");
	__fpurge(stdin);
	scanf("%c", &e);
	printf("Informe a terceira letra: ");
	__fpurge(stdin);
	scanf("%c", &f);

	if(a > b){//caso a seja maior do que b troco b de posicao com a
		aux = a;
		a = b;
		b = aux;
	}

	if(b > c){//caso b seja maior do que c troco c de posicao com b
		aux = b;
		b = c;
		c = aux;
	}

	if(a > b){//caso a seja maior do que b troco b de posicao com a
		aux = a;
		a = b;
		b = aux;
	}

	if(d > e){
		aux = d;
		d = e;
		e = aux;
	}

	if(e > f){
		aux = e;
		e = f;
		f = aux;
	}

	if(d > e){
		aux = d;
		d = e;
		e = aux;
	}

	printf("Primeira: %c %c %c\n", a,b,c);
	printf("Segunda: %c %c %c\n", d,e,f);
}
