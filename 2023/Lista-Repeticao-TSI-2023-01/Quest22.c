/*
22) Escrever um programa que tenha como entrada um número não determinado de valores para m, 
todos inteiros e positivos, um de cada vez. 
Se m for par, verificar quantos divisores possui e escrever esta informação. 
Se m for impar e menor do que 10 calcular e escrever o fatorial de m. Se 
m for ímpar e maior ou igual a 10 calcular e escrever a soma dos inteiros de 1 até m
*/
#include<stdio.h>
int main(){
    int m,divisores,i,fatorial;

    do
    {
        printf("Insira o valor de 'm'.:");
        scanf("%d",&m);

        if (m % 2 == 0)
        {
            divisores=0;
            
            for (i = 1; i <= m; i++)
            {
                if (m%i==0)
                {
                    divisores++;
                }
            }
            printf("\n%d tem %d divisores.\n",m,divisores);
        }
        else
        {
            if (m<10)
            {
                fatorial=1;
                for (i = 1; i <= m; i++)
                {
                    fatorial=fatorial*i;
                }
            }
            printf("\nO fatorial de %d é %d.\n",m,fatorial);
        }

    } while (m>0);
    
    return 0;
}