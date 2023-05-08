/*
16)Foram levantados dados relativos a 300 alunos de uma universidade. Para cada aluno
foram obtidos nome, altura e idade. Faça um programa que leia estes dados do teclado e
forneça: 
a) nome dos alunos que têm altura superior à média;
b) número de alunos com mais de 25 anos;
c) quantos alunos tem idade inferior à média de idades;
d) nome dos alunos com idade inferior a 18 anos, que têm altura inferior à média de
alturas. 
*/
#include <stdio.h>
#include <string.h>
#define TAM 3

int main(){
    int vetIdade[TAM];
    char vetNome[TAM][100];
    float vetAltura[TAM];
    float mediaAlt,maiorAlt;
    int i,posAlt,alunos25Mais,alunosMenorMediaIdade,mediaIdade,pos18Menos;

    mediaAlt=0;
    mediaIdade=0;
    alunosMenorMediaIdade=0;

    for (i = 0; i < TAM; i++)
    {
        printf("\nNome.:\t");
        scanf("%s",&vetNome[i]);
        /*fgets(vetNome[i],100,stdin);
        setbuf(stdin,NULL);
        */
        do
        {
            printf("\nAltura.:\t");
            scanf("%f",&vetAltura[i]);
            setbuf(stdin,NULL);
            if (vetAltura[i] < 0)
            {
                printf("\nAltura Invalida!");
            }
        } while (vetAltura[i] < 0);
        do
        {
            printf("\nIdade.:\t");
            scanf("%d",&vetIdade[i]);
            if (vetIdade[i] < 0)
            {
                printf("\nIdade Invalida!");
                setbuf(stdin,NULL);
            }
        } while (vetIdade[i] < 0);
    }
    for (i = 0; i < TAM; i++)
    {
        mediaAlt=(mediaAlt+vetAltura[i]);//calculo da media
        mediaIdade=mediaIdade+vetIdade[i];
    }
    mediaAlt=mediaAlt/TAM;//alturamedia
    mediaIdade=mediaIdade/TAM;


    for (i = 0; i < TAM; i++)
    {
        if (vetAltura[i]<mediaAlt)
        {
            posAlt=i;
            printf("\nO %s com %f está abaixo da media %f",vetNome[posAlt],vetAltura[posAlt],mediaAlt);
        }
        if (vetIdade[i]>25)//Quantidade de alunos com 25 mais anos
        {
            alunos25Mais++;
        }
        if (vetIdade[i]<mediaIdade)//quantos alunos tem idade inferior à média de idades;
        {
            alunosMenorMediaIdade++;
        }
        if (vetIdade[i]<18)
        {
            if (vetAltura[i]<mediaAlt)
            {
                pos18Menos=i;
                printf("\n%s tem idade inferior a 18e altura inferior a media %f",vetNome[pos18Menos],mediaAlt);
            }
            else
            {
                printf("\nNão há alunos cadastrados com essas caracteristicas.");
            }
            
        }
    }
    printf("\n%d\tAlunos com mais de 25 anos.",alunos25Mais);
    printf("\n%d\tQuantidades de alunos inferior a media %d",alunosMenorMediaIdade,mediaIdade);
    return 0;
}