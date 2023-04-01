/*
12) Em uma eleição presidencial existem quatro candidatos, sendo:1-Maria Luíza, 2-Pedro 
Henrique, 3-Lara Cota e 4-Letícia Cota. Os votos são informados através de códigos. Os dados 
utilizados para a contagem dos votos obedecem à seguinte codificação: 
- 1,2,3,4 = voto para os respectivos candidatos; 
- 5 = voto nulo; 
- 6 = voto em branco;
Elabore um programa que leia o código do candidato em um voto e calcule/escreva.:
- total de votos para cada candidato; 
- total de votos nulos; 
- total de votos em branco;
-nome do candidato vencedor. Suponha que não ocorrerá empate.
Como finalizador do conjunto de votos, tem-se o valor 0.
*/
#include<stdio.h>
int main(){
    int voto,i=0,cand1=0,cand2=0,cand3=0,cand4=0,nulo=0,branco=0,candVitoria;

    do
    {
        printf("Candidatos:\t1-Maria Luíza\t2-Pedro Henrique\t3-Lara Cota\t4-Letícia Cota\nVoto.:");
        scanf("%d",&voto);
        switch (voto)
        {
        case 1:
            cand1++;
            break;
        case 2:
            cand2++;
            break;
        case 3:
            cand3++;
            break;
        case 4:
            cand4++;
            break;
        case 5:
            nulo++;
            break;
        case 6:
            branco++;
            break;        
        default:
            printf("Numero invalido de voto!!!");
            break;
        }
        i++;
    } while (voto!=0);

    candVitoria=cand1;

    if (i>0)
    {
        printf("\n%d voto(s) Maria Luíza\t",cand1);
        printf("\n%d voto(s) Pedro Henrique\t",cand2);
        printf("\n%d voto(s) Lara Cota\t",cand3);
        printf("\n%d voto(s) Letícia Cota\t",cand4);
        printf("\n%d voto(s) Nulos\t",nulo);
        printf("\n%d voto(s) Branco\t",branco);

        if (candVitoria<cand2)
        {
            candVitoria=cand2;
        }
        else
            if (candVitoria<cand3)
            {
                candVitoria=cand3;
            }
            else
                if (candVitoria<cand4)
                {
                    candVitoria=cand4;
                }
        if (candVitoria==cand1)
        {
            printf("\n\n%d Maria Luíza Vitoriosa!!!",candVitoria);
        }
        else
            if (candVitoria==cand2)
            {
                printf("\n\n%d Pedro Henrique Vitorioso!!!",candVitoria);
            }
            if (candVitoria==cand3)
            {
                printf("\n\n%d Lara Cota Vitoriosa!!!\n\n",candVitoria);
            }
            else
                if (candVitoria==cand4)
                {
                    printf("\n\n%d Letícia Cota Vitoriosa!!!",candVitoria);
                }
    }
    
    return 0;
}