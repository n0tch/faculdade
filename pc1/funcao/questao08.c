/*Faça uma função que recebe a idade de um nadador por parâmetro e retorna, também por parâmetro,
a categoria desse nadador de acordo com a tabela abaixo

*/
#include<stdio.h>

char *categoria(int idd){

	if(idd >= 5 && idd <= 7){
		return "Infantil A";
	}else if(idd >= 8 && idd <= 10){
		return "Infantil B";
	}else if(idd >= 11 && idd <= 14){
		return "Juvenil A";
	}else if(idd >= 14 && idd <= 17){
		return "Juvenil B";
	}else{
		return "Erro!";
	}
}
int main(){

	int idd;
	printf("Informe a idade do nadador: ");
	scanf("%d", &idd);

	printf("%s\n", categoria(idd));
	return 0;
}
