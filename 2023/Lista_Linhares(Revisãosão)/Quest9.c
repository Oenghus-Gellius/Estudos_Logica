/*
9. Fazer um programa para solicitar ao usuário um número entre 0 e 99 e mostrar este número 
por extenso. Se o usuário introduzir um número que não está neste intervalo, mostre: 
"número inválido". 
Fonte:http://www.bernhard.pro.br/disciplinas/java/ensino/java-L01.pdf 
*/
#include <stdio.h>
int main(){
    int num;
    
    printf("Insira um numero.:");
    scanf("%d",&num);

    if (num>=0 && num<100)
    {
        printf("É um numero valido!!!");
    }
    else
    {
        printf("Não é um numero valido!!!");
    }
    
    return 0;
}