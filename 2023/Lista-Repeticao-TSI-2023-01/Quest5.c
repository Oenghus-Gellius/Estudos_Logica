/*
5) Faça um programa que receba quinze números inteiros positivos do usuário e imprima a soma 
da raiz quadrada de cada número.
*/
#include<stdio.h>
#include<math.h>
int main(){
    int num,i;
    float soma=0;

    i=0;
    do
    {
        printf("Insira o %dº.:",i+1);
        scanf("%d",&num);
        i++;
        soma=soma+sqrt(num);
    } while (i<15);
    printf("A soma das raizes dos numeros é.: %.1f",soma);
    return 0;
}