/*
2)Fazer um programa que:
a) leia um conjunto de valores correspondentes a 80 notas dos alunos de uma turma (de
0 a 10);
b) calcule a freqüência absoluta e a freqüência relativa de cada nota;
c) imprima uma tabela contendo os valores das notas (de 0 a 10) e suas respectivas
freqüências absoluta e relativa.
Observações:
 freqüência absoluta de uma nota é o número de vezes que ela aparece no conjunto de
dados;
 freqüência relativa é a freqüência absoluta dividida pelo número total de dados;
 utilizar como variável composta somente aquelas que forem necessárias. 
*/
#include <stdio.h>
#define NUMALUNOS 5
#define NOT 10

int i,k, notas;
int freqNot[NOT];

int main(){

    for (i = 1; i <= NUMALUNOS; i++)
    {
        do
        {
            printf("\nInsira a %dº nota.:",i);
            scanf("%d",&notas);
            if (notas<0 || notas>10)
            {
                printf("Valor incorreto");
            }
        } while (notas<0 || notas>10);

        freqNot[notas]++;
    }
    for (i = 0; i <= NOT; i++)
    {
        printf("\nA nota %d - Repete.: %d Vezes",i,freqNot[i]);
    }
    return 0;
}