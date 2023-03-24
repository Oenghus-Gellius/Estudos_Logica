/*
12. (Cortesia do Prof. Bogdan Tomoyuki Nassu) Suponha que você está programando um 
módulo contador de cédulas para caixas eletrônicos. Escreva um programa que informa com 
quantas cédulas de Real podemos representar um dado valor. Exemplo de resposta: R$ 218 
= 2 cédulas de 100, 1 cédula de 10, 1 cédula de 5, 1 cédula de 2 e 1 cédula de 1. Procure 
minimizar o número de cédulas usadas. Desconsidere valores com centavos, e suponha que 
a máquina sempre tem disponíveis as cédulas necessárias. 
*/

#include <stdio.h>

int main(){
    int saque,n100,n10,n5,n2,n1,resto;

    printf("Insira o valor do saque.:");
    scanf("%d",&saque);

    n100=saque/100;
    resto=saque%100;
    n10=resto/10;
    resto=resto%10;
    n5=resto/5;
    resto=resto%5;
    n2=resto/2;
    resto=resto%2;
    n1=resto%1;
    resto=resto%1;

    if (n100>0)
    {
        printf("\nA Questidade de notas de 100 é.:\t%d",n100);
    }
    if (n10>0)
    {
        printf("\nA Questidade de notas de 10 é.:\t%d",n10);
    }
    if (n5>0)
    {
        printf("\nA Questidade de notas de 5 é.:\t%d",n5);
    }
    if (n2>0)
    {
        printf("\nA Questidade de notas de 2 é.:\t%d",n2);
    }
    if (n1>0)
    {
        printf("\nA Questidade de notas de 1 é.:\t%d",n1);
    }    

    return 0;
}

