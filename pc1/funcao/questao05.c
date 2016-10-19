/*
Faça uma função que recebe por parâmetro o tempo de duração de uma fábrica
expressa em segundos e retorna também por parâmetro esse tempo em horas, 
minutos e segundos.
*/

#include<stdio.h>

//ps -> ponteiro segundo
//pm -> ponteiro minuto
//ph -> ponteiro hora
void calc_tempo(int segs, int *ps, int *pm, int *ph){

	*ph = segs/3600;
	*pm = (segs-(*ph * 3600)) / 60;
	*ps = segs - (*ph * 3600)-(*pm*60);
}

int main(){

	int seg_total;
	int seg, min, hr;
	printf("Informe o total de segundos: ");
	scanf("%d", &seg_total);
	calc_tempo(seg_total, &seg, &min, &hr);
	printf("%d horas, %d minutos e  %d segundos!\n", hr, min, seg);
	return 0;
}
