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
    int vetPontos[NUMPLAYERS]={0};
    int semanas,i,s,j,k,p,posCadastro,achei;
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
            do
            {
                printf("\nNome %dº Colocado.:",i+1);
                fgets(vetNomeSemana[i],100,stdin);
                setbuf(stdin,NULL);
                k=0;//variavel k é para o check se repete os atletas 
                achei=0;
                while (k < i && achei==0)//procurar alista de jogadores
                {
                    if (strcmp(vetNomeSemana[k],vetNomeSemana[i])==0)
                    {
                        achei=1;
                    }
                    else
                    {
                        k++;
                        vetPontos[i]=10-i;                       
                    }
                }
                if (achei==1)
                {
                    printf("\nNome repetido!!!");
                }
            } while (achei==1);
            
        }
        printf("\nClassificação da semana.:");
        for (i = 0; i < LISTASEMANAL; i++)
        {
            printf("\n%d\t\t%s",vetPontos[i],vetNomeSemana[i]);
        }
        for (i = 0; i < posCadastro; i++)
        {
            for (j = 0; j < posCadastro; i++)
            {
                //Verifica se o jogador já está cadastrado na base
                if (strcmp(vetNomeBase[i],vetNomeSemana[j])==0)
                {
                    achei==1;
                }
                else
                {
                    vetNomeBase[posCadastro]=vetNomeSemana[j];
                    vetPontos[posCadastro]=vetPontos[j];
                    posCadastro++;
                }
                
                

            }
            
        }
    }
    printf("\nClassificação final:");
    for (i = 0; i < posCadastro; i++)
    {
        printf("\n%d\t%dº\t\t%c",i+1,vetPontos[i],vetNomeBase[i]);
    }
    

    

    return 0;
}