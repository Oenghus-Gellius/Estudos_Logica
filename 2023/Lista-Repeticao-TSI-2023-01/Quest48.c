/*
48) Escrever um programa que tenha como entrada um valor N inteiro e positivo. Calcular e 
escrever o valor de E.
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!

*/

#include <stdio.h>

int main(){
    int n,i,j,fat=1;
    float soma=0;

    printf("Insira o valor de 'n'.:");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            fat=fat*j;
        }
        soma=soma+1/fat;
    }
    printf("O valor de E.: %f",soma);
    
    return 0;
}