/*
Questão 03)
Em uma eleição presidencial existem quatro candidatos, sendo:1-Maria Luíza, 2-Pedro 
Henrique, 3-Lara Cota e 4-Letícia Cota. Os votos são informados através de códigos. Os 
dados utilizados para a contagem dos votos obedecem à seguinte codificação:
- 1,2,3,4 = voto para os respectivos candidatos;
- 5 = voto nulo; 
- 6 = voto em branco; 
Elabore um programa que leia o código do candidato em um voto e calcule/escreva.: -
total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco; 
-nome do candidato vencedor. 
Suponha que não ocorrerá empate. Como finalizador do conjunto de votos, tem-se o 
valor 0.
*/
#include<stdio.h>
int main(){
    int voto,maria=0,pedro=0,lara=0,leticia=0,nulo=0,branco=0,count=0;

    do
    {
        printf("\nInsira seu voto.:");
        scanf("%d",&voto);
        switch (voto)
        if (voto!=0)
        {
            {
            case 1:
                maria++;
                break;
            case 2:
                pedro++;
                break;
            case 3:
                lara++;
                break;
            case 4:
                leticia++;
                break;
            case 5:
                nulo++;
                break;
            case 6:
                branco++;
                break;        
            default:
                break;
            }
            count++;
        }
    } while (voto!=0);
    if (count>0)
    {
        printf("---Relatorio---");
        if (maria>pedro && maria>lara && maria>leticia)
        {
            printf("\nMARIA ELEITA com %d votos\n",maria);
        }
        else
            if (pedro>maria && pedro>lara && pedro>leticia)
            {
                printf("\nPEDRO ELEITO com %d votos\n",pedro);
            }
            else
                if (lara>maria && lara>pedro && lara>leticia)
                {
                    printf("\nLARA ELEITA com %d votos\n",lara);
                }
                else
                {
                    printf("\nLETICIA ELEITA com %d votos\n",leticia);
                }
        printf("\n%d\tMaria votos.",maria);
        printf("\n%d\tPedro votos.",pedro);
        printf("\n%d\tlara votos.",lara);
        printf("\n%d\tLeticia votos.",leticia);
        printf("\n%d\tNulo votos.",nulo);
        printf("\n%d\tBranco votos.",branco);
        
    }
    else
    {
        printf("Eleições invalidas");
    }
    
    

    return 0;
}