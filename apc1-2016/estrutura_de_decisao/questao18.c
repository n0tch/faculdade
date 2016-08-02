#include<stdio_ext.h>

void main(){
	int num1, num2;
	char operacao;

	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);

	printf("Informe o segundo numero: ");
	scanf("%d", &num2);

	printf("Informe a operacao ('+','-','*','/'): ");
	__fpurge(stdin);
	scanf("%c", &operacao);

	if(operacao == '+'){
		printf(">> %d + %d = %d\n", num1, num2, (num1+num2));
	}else if(operacao == '-'){
		printf(">> %d - %d = %d\n", num1, num2, (num1-num2));
	}else if(operacao == '*'){
		printf(">> %d * %d = %d\n", num1, num2, (num1*num2));
	}else if(operacao == '/'){
		printf(">> %d / %d = %.2f\n", num1, num2, ((float)num1/(float)num2));
		//converto os numero para float para que apareca o resultado depois da virgula.
	}else{
		printf("Operacao desconhecida.\n");
	}
}
