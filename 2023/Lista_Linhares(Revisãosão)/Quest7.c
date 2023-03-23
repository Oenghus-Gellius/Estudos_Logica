/*
7. Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois 
números reais. O programa deve retornar o resultado da operação recebida sobre estes dois 
números.
*/

#include <stdio.h>

int mail(){
    char sinal;
    float n1,n2,resultado;

    printf("\n Insira o primeiro numero.:");
    scanf("%c",&sinal);
    printf("\n Insira o sinal.:");
    scanf("%d",&n1);
    printf("\n Insira o segundo numero.:");
    scanf("%d",&n2);

    
    printf("O resultado da operação %c é.: %d",sinal,resultado);
    return 0;
}