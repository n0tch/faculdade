#include<stdio.h>

void main(){
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10, m1, m2;

	printf("Numero 1: ");
	scanf("%d", &n1);
	printf("Numero 2: ");
	scanf("%d", &n2);
	printf("Numero 3: ");
	scanf("%d", &n3);
	printf("Numero 4: ");
	scanf("%d", &n4);
	printf("Numero 5: ");
	scanf("%d", &n5);
	printf("Numero 6: ");
	scanf("%d", &n6);
	printf("Numero 7: ");
	scanf("%d", &n7);
	printf("Numero 8: ");
	scanf("%d", &n8);
	printf("Numero 9: ");
	scanf("%d", &n9);
	printf("Numero 10: ");
	scanf("%d", &n10);

	if(n1 > n2){
		m1 = n1;
		m2 = n2;
	}else{
		 m1 = n2;
		 m2 = n1;
	}

	if(n3 < m1 && n3 > m2){//n3 esta entre m1 e m2 
		m2 = n3;
	}else if(n3 > m1){//caso n3 seja maior que m1
		m2 = m1;//m1 passa a ser o segundo maior
		m1 = n3;//e m1 recebe o meio numero
	}

	if(n4 < m1 && n4 > m2){//
		m2 = n4;
	}else if(n4 > m1){
		m2 = m1;
		m1 = n4;
	}

	if(n5 < m1 && n5 > m2){
		m2 = n5;
	}else if(n5 > m1){
		m2 = m1;
		m1 = n5;
	}

	if(n6 < m1 && n6 > m2){
		m2 = n6;
	}else if(n6 > m1){
		m2 = m1;
		m1 = n6;
	}
	
	if(n7 < m1 && n7 > m2){
		m2 = n7;
	}else if(n7 > m1){
		m2 = m1;
		m1 = n7;
	}

	if(n8 < m2 && n8 > m2){
		m2 = n8;
	}else if(n8 > m1){
		m2 = m1;
		m1 = n8;
	}
	
	if(n9 < m1 && n9 > m2){
		m2 = n9;
	}else if(n9 > m1){
		m2 = m1;
		m1 = n9;
	}

	if(n10 < m1 && n10 > m2){
		m2 = n10;
	}else if(n10 > m1){
		m2 = m1;
		m1 = n10;
	}

	printf("Maior 2: %d\n", m2);
}
