/*
6. Fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior deles, o 
menor deles e o valor intermediário. 
*/
#include <stdio.h>
int main(){
    float n1,n2,n3,maior,meio,menor;

    printf("\nInsira o Primeiro numero.:");
    scanf("%f",&n1);
    printf("\nInsira o Segundo numero.:");
    scanf("%f",&n2);
    printf("\nInsira o Terceiro numero.:");
    scanf("%f",&n3);

if (n1>=n2 && n2>=n3)
{
    maior=n1;
    meio=n2;
    menor=n3;
}
if (n2>=n1 && n1>=n3)
{
    maior=n2;
    meio=n1;
    menor=n3;
}
if (n1>=n3 && n3>=n2)
{
    maior=n1;
    meio=n3;
    menor=n2;
}
if (n3>=n2 && n2>=n1)
{
    maior=n3;
    meio=n2;
    menor=n1;
}
if (n3>=n1 && n1>=n2)
{
    maior=n3;
    meio=n1;
    menor=n2;
}
if (n2>=n3 && n3>=n1)
{
    maior=n2;
    meio=n3;
    menor=n1;
}
 
    printf("\nO maior valor é.: %.2f",maior);
    printf("\nO numero intermediario é.:%.2f",meio);
    printf("\nO menor numero é.:%.2f",menor);
    return 0;
}