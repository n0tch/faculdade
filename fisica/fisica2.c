#include <stdio.h>
#include <math.h>

int main(){

  int i, n;
  double x,z, Q, C, L, r, dQ, dL, k, dEx, dEz, Ex, Ez, xi;
  printf("Programa para calculo do vetor campo\n eletrico de um ponto P em um fio finito.\n");

  printf("Informe a carga eletrica total em Coulombs: ");
  scanf("%lf", &Q);

  printf("Informe o tamanho total do fio em metros: ");
  scanf("%lf", &C);

  printf("Informe a coordenada x do ponto: ");
  scanf("%lf", &x);

  printf("Informe a coordenada z do ponto: ");
  scanf("%lf", &z);

  printf("Em quantas partes deseja particionar o fio: ");
  scanf("%d", &n);

  dL = C/n;
  dQ = Q/n;
  k = 1/(4*M_PI*(8.85418782)*pow(10,-12));
  xi = (dL/2);
  Ex = Ez = 0;

  for(xi=dL/2;xi<n;xi+=dL){
    r = sqrt(pow(x,2) + pow(z,2));
    dEx = (dQ*xi*k)/(pow(r,3));
    dEz = (dQ*z*k)/(pow(r,3));

    Ex = Ex + dEx;
    Ez = Ez + dEz;
  }

  printf("Resultado: %lf\n", sqrt(pow(Ex,2) + pow(Ez,2)));
  return 0;
}
