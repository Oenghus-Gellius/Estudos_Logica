/*
Questão 01
A Associação Alvinopolense de Tênis (AAT) mantém, há anos, uma lista com os 10 melhores
jogadores de cada semana. Considerando que o primeiro jogador da lista dos 10 melhores da
semana ganha 10 pontos, o segundo 9, e assim de forma decrescente, onde o décimo colocado da
semana ganha 1 ponto. 
Faça um programa que indique qual foi o melhor jogador, a partir das listas
dos melhores de cada semana. 
Considere a possibilidade de empate. Você deve inicialmente ler o
número de semanas. Em seguida, para cada semana, ler os nomes dos atletas que 
fazem parte da lista da semana(sem valores repetidos). Considere que o número máximo 
de jogadores seja 20000.

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
    int vetPontos[NUMPLAYERS]={0};
    int semanas,i,s,j,k,posCadastro,achei,numSelectionSort,base;
    char nomeCad[100],nomeSelectionSort[100];
    char vetNomeBase[NUMPLAYERS][100],vetNomeSemana[LISTASEMANAL][100];

    do
    {
        printf("\nInsira o numero de semanas.:");
        scanf("%d",&semanas);
        setbuf(stdin,NULL);
        if (semanas<=0)
        {
            printf("\nValor incorreto de semadas!!!");
        }
        
    } while (semanas<=0);
    posCadastro=0;
    for (s = 0; s < semanas; s++)//variavem s é o numero de semanas 
    {
        printf("\nOs melhores da %dª Semana.:",s+1);
        for (i = 0; i < LISTASEMANAL; i++)//A variavel i é a colocação dos atletas na semana
        {
            printf("\nNome %dº Colocado.:",i+1);
            fgets(nomeCad,100,stdin);
            setbuf(stdin,NULL);
            for(k = 0; k < LISTASEMANAL; k++)
            {
                if(strcmp(nomeCad,vetNomeSemana[k]) == 0)
                {
                    printf("\nNome repetido, entre outro nome para o %dº Colocado: ",i+1);
                    fgets(nomeCad, 100, stdin);
                    setbuf(stdin,NULL);
                    k = 0;
                }
            }
            k=0;
            while (strcmp(nomeCad,vetNomeBase[k])!=0 && k < posCadastro)
            {
                k++;
            }
            strcpy(vetNomeBase[k],nomeCad);
            strcpy(vetNomeSemana[i],nomeCad);
            vetPontos[k]=vetPontos[k]+(10-i);
            if (k==posCadastro)
            {
                posCadastro++;
            }
        } 
        printf("\nClassificação da semana.:");
        for (i = 0; i < LISTASEMANAL; i++)
        {
            printf("\n%d\t\t%s",vetPontos[i],vetNomeSemana[i]);
            strcpy(vetNomeSemana[i],"\0");
        }
    }
    //Algoritmo de Ordenação por Seleção
    for (i = 0; i < posCadastro-1; i++)
    {
        base=i;
        for (j = (i+1); j < posCadastro; j++)
        {
            if (vetPontos[j] > vetPontos[base])
            {
                base=j;
            }
        }
        if (i != base)
        {
            numSelectionSort=vetPontos[i];
            vetPontos[i]=vetPontos[base];
            vetPontos[base]=numSelectionSort;

            strcpy(nomeSelectionSort,vetNomeBase[i]);
            strcpy(vetNomeBase[i],vetNomeBase[base]);
            strcpy(vetNomeBase[base],nomeSelectionSort);
        } 
    }
    printf("\nClassificação final:");
    for (i = 0; i < posCadastro; i++)
    {
        if (i > 0 && vetPontos[i]==vetPontos[i-1])
        {
            printf("\n\t%d\t\t%s",vetPontos[i],vetNomeBase[i]);
        }
        else
        {
            printf("\n%dº\t%d\t\t%s",i+1,vetPontos[i],vetNomeBase[i]);
        }
    }
    return 0;
}