/*
Questão 01
A Associação Alvinopolense de Tênis (AAT) mantém, há anos, uma lista com os 10 melhores
jogadores de cada semana. Considerando que o primeiro jogador da lista dos 10 melhores da
semana ganha 10 pontos, o segundo 9, e assim de forma decrescente, onde o décimo colocado da
semana ganha 1 ponto. 
Faça um programa que indique qual foi o melhor jogador, a partir das listas
dos melhores de cada semana. 
Considere a possibilidade de empate. Você deve inicialmente ler o
número de semanas. Em seguida, para cada semana, ler os nomes dos atletas que fazem parte da
lista da semana(sem valores repetidos). Considere que o número máximo de jogadores seja 20000.

Exemplo de Entrada(considerando 4 jogadores por semana).
5
Maria Pedro Ana Laura
1
Pedro Maria Bia Amanda
3
Maria Amanda Pedro Bianca
2
Maria Bianca Amanda Pedro
3
Pedro Maria Carla Amanda

Saída
Maria
Pedro
*/

#include <stdio.h>
#include <string.h>
#define LISTASEMANAL 3
#define NUMPLAYERS 20

int main(){
    int vetPontos[NUMPLAYERS];
    int semanas,i,j,posCadastro,achei;
    char Nome[100];
    char vetNomeBase[NUMPLAYERS][100],vetNomeSemana[LISTASEMANAL][100];

    printf("\nInsira o numero de semanas.:");
    scanf("%d",&semanas);

    posCadastro=0;
    printf("\nLista Semanal.:");

    

    



    return 0;
}