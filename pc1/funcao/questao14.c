/*
Faça uma função que recebe, por parâmetro, a hora de inicio e a hora de término de um jogo, ambas
subdivididas em 2 valores distintos: horas e minutos. O procedimento deve retornar, também por
parâmetro, a duração do jogo em horas e minutos, considerando que o tempo máximo de duração de um
jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro.
*/

#include<stdio.h>

//ponteiro Hora
//ponteiro minuto
void calc_hora(int horaI,int minI,int horaF,int minF,int *ph,int *pm){

	*ph = horaF - horaI;
	*pm = minF-minI;

	if(*pm < 0)
		*pm *= (-1);
}

void main(){
//i -> inicial
//F -> final
//T -> total
	int horaI, minI, horaF, minF;
	int horaT, minT;

	printf("---Inicio da Partida---\n");
	printf("Hora: ");
	scanf("%d", &horaI);
	printf("Minuto: ");
	scanf("%d", &minI);

	printf("---Final da Partida---\n");
	printf("Hora: ");
	scanf("%d", &horaF);
	printf("Munuto: ");
	scanf("%d", &minF);

	calc_hora(horaI,minI,horaF,minF,&horaT,&minT);
	printf("Tempo total de jogo: %d horas e %d min(s)\n", horaT,minT);
}
