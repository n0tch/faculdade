#include<stdio.h>

void main(){
	int num, vzs=0, j,i;
	printf("Informe o numero: ");
	scanf("%d", &num);

	for(i=num;i>num/2;i--){//vou decrementando do numero dado ate num/2.
		vzs = 0;
		for(j=1;j<=i;j++){
			if(i%j==0){//caso o numero seja divisivel pelo j
				vzs++;//acrescenta 1 na variavel vzs
			}
		}
		if(vzs == 2){//caso a var vzs for exatamente 2, o numero eh primo.
			printf("%d << %d >> ", (j-1), num);
			break;
		}
	}

	vzs=0;
	for(i=num;vzs!=2;i++){		//faz o mesmo que o for anterior, porem, indo do numero
		vzs=0;			//ate a condicao vzs ser diferente de 2, que me garante q o numero 
		for(j=1;j<=i;j++){	//é primo.
			if(i%j==0){
				vzs++;
			}
		}
		if(vzs == 2){
			printf("%d\n", (j-1));
			break;
		}
	}

}
