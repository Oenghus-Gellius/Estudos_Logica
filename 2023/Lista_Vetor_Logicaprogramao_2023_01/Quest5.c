/*
5) Faça um programa que leia um vetor G de 20 elementos caracter que representa o
gabarito de uma prova. A seguir, para cada um dos 50 alunos da turma, leia o vetor de
respostas (R) do aluno e conte o número de acertos. Mostre o nº de acertos do aluno e uma
mensagem APROVADO, se a nota for maior ou igual a 12; e mostre uma mensagem de
REPROVADO, caso contrário.

*/
#include <stdio.h>
#define ELEM 20
#define QTDALUNOS 50

int main(){

    int gabVet[ELEM],respVet[ELEM];
    int acertos=0,i,j;
    const int MEDIA = 12;

    for (j = 1; j <= QTDALUNOS; j++)
    {
        printf("\nAluno %d.:",j);
        for (i = 1; i <= ELEM; i++)
        {
            printf("\nInsira a resposta da Questão %d.:",i);
            scanf("%d",&gabVet[i]);
        }
        for (i = 0; i < ELEM; i++)
        {
            printf("\nQual a resposta da questão %d",i);
            scanf("%d",&respVet[i]);
            if (gabVet[i]==respVet[i])
            {
                acertos++;
            }
        }
        if (acertos>=MEDIA)
        {
            printf("\nAluno %d - APROVADO",j);
        }
        else
        {
            printf("\nAluno %d - REPROVADO",j);
        }
    } 
    
    return 0;
}