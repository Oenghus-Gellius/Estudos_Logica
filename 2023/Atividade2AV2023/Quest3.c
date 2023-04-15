/*
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
Suponha que não ocorrerá empate. Como finalizador do conjunto de votos, tem-se o valor 
0. 
*/
#include <stdio.h>

int main(){
    int voto;
    int maria=0, pedro=0, lara=0, leticia=0,nulo=0,branco=0;

    do
    {
        printf("\nInsira seu voto.:");
        scanf("%d",&voto);

        switch (voto)
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
    } while (voto>0 && voto<7);
    printf("\n\n---Relatorio Eleição---");
    if (maria>pedro && maria>lara && maria>leticia)
    {
        printf("\n%d\tVotos - Maria vence a Eleição!",maria);
    }
    else
        if (pedro>maria && pedro>lara && pedro>leticia)
        {
            printf("\n%d\tVotos - Pedro vence a Eleição!",pedro);
        }
        else
            if (lara>maria && lara>pedro && lara>leticia)
            {
                printf("\n%d\tVotos - lara vence a Eleição!",lara);
            }
            else
            {
                printf("\n%d\tVotos - Leticia vence a Eleição!",leticia);
            }

    printf("\n%d\tVotos Maria",maria);
    printf("\n%d\tVotos Pedro",pedro);
    printf("\n%d\tVotos Lara",lara);
    printf("\n%d\tVotos Letícia",leticia);
    printf("\n%d\tVotos nulos.",nulo);
    printf("\n%d\tVotos brancos",branco);
    
    return 0;
}