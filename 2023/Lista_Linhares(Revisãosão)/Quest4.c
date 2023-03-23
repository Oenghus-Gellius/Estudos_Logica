/*
4. Fazer um programa para ler um número do usuário e determinar se este número é par ou não 
par. 
*/
#include <stdio.h>

int main(){
    int num;
    printf("Insira um numero.:");
    scanf("%d",&num);

    if (num%2 == 0)
    {
        printf("O numero %d é PAR!!!",num);
    }
    else
    {
        printf("O numero %d não é PAR!!!",num);
    }
    return 0;
}