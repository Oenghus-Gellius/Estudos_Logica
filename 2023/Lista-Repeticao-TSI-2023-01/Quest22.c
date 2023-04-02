/*
22) Escrever um programa que tenha como entrada um número não determinado de valores para m, 
todos inteiros e positivos, um de cada vez. Se m for par, verificar quantos divisores possui e 
escrever esta informação. Se m for impar e menor do que 10 calcular e escrever o fatorial de m. Se 
m for ímpar e maior ou igual a 10 calcular e escrever a soma dos inteiros de 1 até m
*/
#include<stdio.h>
int main(){
    int m,i,divisores,fatorial;

    do
    {
        printf("Insira o valor de 'm'.");
        scanf("%d",&m);
        if (m>0)
        {
            if (m%2==0)
            {
                divisores=0;      
                for (i = 0; i < m; i++)
                {
                    if (m%i==0)
                    {
                        divisores++;
                    }
                }
                printf("");
            }
            else
            {
                if (m<=10)
                {
                    for (i = m; i > 1; i++)
                    {
                        fatorial=fatorial*i;
                    }
                    
                }
                
            }
            
        }
        
    } while (m>0);
    
    return 0;
}