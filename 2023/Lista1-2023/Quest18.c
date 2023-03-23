/*
18) Um algoritmo para gerenciar os saques de um caixa eletrônico deve possuir algum mecanismo
para decidir o número de notas de cada valor que deve ser disponibilizado para o cliente que
realizou o saque. Um possível critério seria o da "distribuição ótima" no sentido de que as notas de
menor valor fossem distribuídas em número mínimo possível. Por exemplo, se a quantia solicitada
fosse R$ 87,00, o algoritmo deveria indicar uma nota de R$ 50,00, três notas de R$ 10,00, uma
nota de R$ 5,00 e duas notas de R$ 1,00. Escreva um algoritmo que receba o valor da quantia
solicitada e retorne a distribuição das notas de acordo com o critério da distribuição ótima.
Obs.: Notas disponíveis: R$50,00 , R$20,00, R$10,00, R$5,00 e R$1,00
*/

#include <stdio.h>
#include <locale.h>

int main(){
    int saque,qtd50,qtd20,qtd10,qtd5,qtd1,resto;
    
    setlocale(LC_ALL, "Portuguese");
    printf("\nInsira o valor de saque.:");
    scanf("%d",&saque);

    qtd50=saque/50;
    resto=saque%50;
    qtd20=resto/20;
    resto=resto%20;
    qtd10=resto/10;
    resto=resto%10;
    qtd5=resto/5;
    resto=resto%5;
    qtd1=resto/1;
    resto=resto%1;

    printf("\nA Quantidade de notas de 50 é.:%d",qtd50);
    printf("\nA Quantidade de notas de 20 é.:%d",qtd20);
    printf("\nA Quantidade de notas de 10 é.:%d",qtd10);
    printf("\nA Quantidade de notas de 5 é.:%d",qtd5);
    printf("\nA Quantidade de notas de 1 é.:%d",qtd1);
    return 0;
}

