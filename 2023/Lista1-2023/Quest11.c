/*
11) Certo dia o professor de Johann Friederich Carl Gauss (aos 10 anos de idade) mandou que os
alunos somassem os números de 1 a 100. Imediatamente Gauss achou a resposta – 5050 –
aparentemente sem cálculos. Supõe-se que já aí, Gauss, houvesse descoberto a fórmula de uma
soma de uma progressão aritmética.

Construa um algoritmo para realizar a soma de uma P.A. de N termos, com o primeiro a e o último
a .
*/
#include <stdio.h>

int main (){
    float p1,pN,r,soma;

    printf("\nQual o primeiro termo da PA.:");
    scanf("%f",&p1);
    printf("\nQual o ultimo termo da PA.:");
    scanf("%f",&pN);
    printf("\nQual a quantidade de termo da PA.:");
    scanf("%f",&r);

    soma=((p1+pN)*r)/2;

    printf("\nA soma de uma P.A.:%.1f",soma);

    return 0;
}
