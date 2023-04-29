/*
Questão 02
Faça um programa que leia um vetor G de 20 elementos inteiros que representa o gabarito de uma
prova, com as opções 1, 2, 3, 4 e 5. A seguir, para cada um dos 50 alunos da turma, leia a
matrícula(que é única), o nome e as respostas de cada questão e conte o número de acertos. Mostre
o no final da entrada de dados o número acertos de cada aluno e uma mensagem APROVADO, se a
nota for maior ou igual a 12; e mostre uma mensagem de REPROVADO, caso contrário
*/
#include <stdio.h>
#include <string.h>
#define QUESTS 20
#define QTDALUNOS 50

int main(){
    int vetGab[QUESTS],vetRes[QUESTS],vetMat[QTDALUNOS],vetAcertos[QTDALUNOS];
    int i,j,k,posMat,achei,mat,acerto;
    char vetNome[QTDALUNOS][100]; 

    //gabarito
    for (i = 0; i < QUESTS; i++)
    {
        do
        {
            printf("\nInsira o gabarito da questão %dº.:",i+1);
            scanf("%d",&vetGab[i]);
            if (vetGab[i]<=0 || vetGab[i]>5)
            {
                printf("Gabarito Incorreto!!!");
            }
            
        } while (vetGab[i]<=0 || vetGab[i]>5);
    }
    
    posMat=0;
    for (i = 0; i < QTDALUNOS; i++)
    {
        do //validando matricula maior que 0
        {
            printf("\n%d Cadasdro - Insira o numero de Matricula.: ",i+1);
            scanf("%d",&mat);
            if (mat<=0)
            {
                printf("\nNumero de Matricula errada!!!");
            }
        } while (mat<=0);
        j=0;
        achei=0;
        while (j < posMat && achei==0)//não deixando a matricula repetir
        {
            if (vetMat[j]==mat)
            {
                achei=1;
                i=i-1;
            }
            else
            {
                j++;
            }
        }
        if (achei==1)
        {
            printf("\nMatricula repetida!!!");
        }
        if (achei==0)
        {
            vetMat[posMat]=mat;

            printf("\nNome.:");//nome aluno
            //fgets(vetNome[posMat],100,stdin);//<==== Não está registrando 
            //setbuf(stdin,NULL);
            scanf("%s",&vetNome[posMat]);

            //Respostas
            acerto=0;
            for (k = 0; k < QUESTS; k++)
            {
                do
                {
                    printf("\nInsira sua resposta da questão %dº.:",k+1);
                    scanf("%d",&vetRes[k]);
                    if (vetRes[k]<=0 || vetRes[k]>5)
                    {
                        printf("Alternatia incorreta Incorreta!!!");
                    }
                } while (vetRes[k]<=0 || vetRes[k]>5);

                if (vetGab[k]==vetRes[k])
                {
                    acerto++;
                }
            }
            vetAcertos[posMat]=acerto;

            posMat++;
        }
        
        printf("\nposmat= %d",posMat);
        printf("\ni= %d",i);
        printf("\nj= %d",j);
    }
    printf("\nNumeros de matricula.:");
    for (i = 0; i < posMat; i++)
    {
        printf("\n%d\t%s\t\tacerto.:%d",vetMat[i],vetNome[i],vetAcertos[i]);
        if (vetAcertos[i]>=QUESTS*0.6);
        {
            printf("\tAPROVADO!!!");
        }
        if (vetAcertos[i]<QUESTS*0.6)
        {
            printf("\tREPROVADO");
        }
    }
    



    

    return 0;
}