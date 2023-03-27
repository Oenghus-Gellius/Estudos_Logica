/*
10) Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e
positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir: 
a) Se i=1 escrever os três valores a, b, c em ordem crescente. 
b) Se i=2 escrever os três valores a, b, c em ordem decrescente. 
c) Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois.
*/
#include<stdio.h>
int main(){
    int a,b,c,i,menor,meio,maior;

    printf("insira o valor de 'i'.:");
    scanf("%d",&i);
    if (i>0)
    {
        printf("Insira o valor de A.:");
        scanf("%d",&a);
        printf("Insira o valor de A.:");
        scanf("%d",&b);
        printf("Insira o valor de A.:");
        scanf("%d",&c);

        if (a>=b && b>=c)
        {
            maior=a;
            meio=b;
            menor=c;
        }
        if (c>=a && a>=b)
        {
            maior=c;
            meio=a;
            menor=b;
        }
        if (b>=c && c>=a)
        {
            maior=b;
            meio=c;
            menor=a;
        }
        if (a>=c && c>=b)
        {
            maior=a;
            meio=c;
            menor=b;
        }
        if (b>=a && a>=c)
        {
            maior=b;
            meio=a;
            menor=c;
        }
        if (c>=b && b>=a)
        {
            maior=c;
            meio=b;
            menor=a;
        }

        switch (i)
        {
        case 1:
            printf("O numeros em ordem crescente são.: %d - %d - %d",menor,meio,maior);
            break;
        case 2:
            printf("O numeros em ordem crescente são.: %d - %d - %d",maior,meio,menor);
            break;
        case 3:
            printf("O numeros em ordem crescente são.: %d - %d - %d",menor,maior,meio);
            break;
        
        default:
            printf("O 'i' é invalido para o programa.");
            break;
        }
    }
    else
    {
        printf("Não é um valor valido!!!");
    }
    
    
    return 0;
}