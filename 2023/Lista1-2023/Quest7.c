/*
7) Uma P.A. (progressão aritmética) fica determinada pela sua razão (r) e pelo primeiro termo(a1).
Escreva um algoritmo que seja capaz de determinar qualquer termo de uma P.A., dado a razão e o
primeiro termo.
an = a + (n − 1) × r
*/
#include <stdio.h>

int main() {
  float a1, r, n, an;

  printf("Digite o primeiro termo da P.A.: ");
  scanf("%f", &a1);

  printf("Digite a razao da P.A.: ");
  scanf("%f", &r);

  printf("Digite o numero do termo que voce deseja calcular: ");
  scanf("%f", &n);

  an = a1 + (n - 1) * r;

  printf("O %0.0f-esimo termo da P.A. eh: %0.2f", n, an);

  return 0;
}