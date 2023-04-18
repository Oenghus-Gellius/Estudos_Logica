/*
21) Escrever um programa que tenha como entrada um número não determinado de pares de valores 
m,n, todos inteiros e positivos, um par de cada vez, e calcula e escreve a soma dos n inteiros 
consecutivos a partir de m inclusive. 
*/
#include <stdio.h>
int main(){
    int m,n,i,somaIntervalo=0,somaTotal=0;

    do
    {
        printf("\nInsira o valor de 'm'.:");
        scanf("%d",&m);
        printf("\nInsira o valor de 'n'.:");
        scanf("%d",&n);

        if (m<n)
        {
            for (i = m; i <= n; i++)
            {
                somaTotal=somaTotal+i;
            }
        }
        if (m>n)
        {
            for (i = n; i <= m; i++)
            {
                somaTotal=somaTotal+i;
            }
        }
  
        printf("\n%d\tÉ a soma dos numeros entre %d e %d",somaTotal,m,n);

        somaTotal=0;
    } while (m>0 && n>0);

    return 0;
}