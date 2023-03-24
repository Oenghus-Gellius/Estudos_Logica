/*
7. Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois 
números reais. O programa deve retornar o resultado da operação recebida sobre estes dois 
números.
*/

#include <stdio.h>

int main(){
    char sinal;
    float n1,n2,resultado;

    printf("\n Insira o primeiro numero.:");
    scanf("%f",&n1);
    printf("\n Insira o sinal.:");
    scanf("%c",&sinal);
    printf("\n Insira o segundo numero.:");
    scanf("%f",&n2);
//Não esta rodando
    switch (sinal)
    {
    case '+':
        resultado=n1+n2;
        break;
    case '-':
        resultado=n1-n2;
        break;
    case '*':
        resultado=n1*n2;
        break;
    case '/':
        resultado=n1/n2;
        break;
    
    default:
        break;
    }
    printf("\nO resultado da operação %c é.: %.2f",sinal,resultado);
    
    return 0;
}