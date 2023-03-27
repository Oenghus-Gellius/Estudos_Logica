/*
2) Faça um algoritmo que tenha como entrada 3 valores a,b,c e os imprima em ordem crescente.
*/
#include <stdio.h>

int main(){
    int a,b,c,maior,meio,menor;

    printf("Insira o valor de A.:");
    scanf("%d",&a);
    printf("Insira o valor de B.:");
    scanf("%d",&b);
    printf("Insira o valor de C.:");
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
    printf("em or dem crescente os numeros são.: %d - %d - %d",menor,meio,maior);

    return 0;
}