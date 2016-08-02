#include<stdio_ext.h>

void main(){
	char a,b,c,d,e,f,g,h,i;

	printf("X para jogador 1.\n");
	printf("O para jogador 2.\n");
	printf("1 para casa vazia.\n");

	//jogadas da primeira linha
	printf("Informe a casa (1,1): ");
	scanf("%c", &a);
	__fpurge(stdin);
	printf("Informe a casa (1,2): ");
	scanf("%c", &b);
	__fpurge(stdin);
	printf("Informe a casa (1,3): ");
	scanf("%c", &c);
	__fpurge(stdin);

	//jogadas da segunda linha
	printf("\nInforme a casa (2,1): ");
	scanf("%c", &d);
	__fpurge(stdin);
	printf("Informe a casa (2,2): ");
	scanf("%c", &e);
	__fpurge(stdin);
	printf("Informe a casa (2,3): ");
	scanf("%c", &f);
	__fpurge(stdin);

	//jogadas da terceira linha
	printf("\nInforme a casa (3,1): ");
	scanf("%c", &g);
	__fpurge(stdin);
	printf("Informe a casa (3,2): ");
	scanf("%c", &h);
	__fpurge(stdin);
	printf("Informe a casa (3,3): ");
	scanf("%c", &i);
	__fpurge(stdin);

	printf("\n%c|%c|%c\n", a,b,c);//status do jogo
	printf("%c|%c|%c\n", d,e,f);
	printf("%c|%c|%c\n", g,h,i);

	//verificacao das 3 linhas para X
	if( (a == 'X' && b == 'X' && c == 'X') || (d == 'X' && e == 'X' && f == 'X') || (g == 'X' && h == 'X' && i == 'X')){
		printf("X ganhou.\n");
	//verificacao das 3 linhas para O
	}else if((a == 'O' && b == 'O' && c == 'O') || (d == 'O' && e == 'O' && f == 'O') || (g == 'O' && h == 'O' && i == 'O')){
		printf("O ganhou.\n");
	//verificacao das 3 colunas para X
	}else if((a == 'X' && d == 'X' && g == 'X') || (b == 'X' && e == 'X' && h == 'X') || (c == 'X' && f == 'X' && i == 'X')){
		printf("X ganhou!\n");
	//verificacao das 3 colunas para O
	}else if((a == 'O' && d == 'O' && g == 'O') || (b == 'O' && e == 'O' && h == 'O') || (c == 'O' && f == 'O' && i == 'O')){
		printf("O ganhou.\n");
	//verificacao para diagonais do X
	}else if((a == 'X' && e == 'X' && i == 'X') || (c == 'X' && e == 'X' && g == 'X')){
		printf("X ganhou!\n");
	}else if((a == 'O' && e == 'O' && i == 'O') || (c == 'O' && e == 'O' && g == 'O')){
		printf("O ganhou!\n");
	}else{
		printf("Velha!\n");
	}
}
