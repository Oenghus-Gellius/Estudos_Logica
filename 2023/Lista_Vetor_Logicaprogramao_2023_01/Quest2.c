/*
2) Faça um programa que tenha como entrada 30 valores e colocá-los em 2 vetores
conforme forem pares ou ímpares. Cada vetor possui 5 posições. Se algum vetor estiver
cheio, imprimir o seu conteúdo. Terminada a leitura escrever o conteúdo dos dois vetores.
Cada vetor pode ser preenchido tantas vezes quantas forem necessárias.
*/

#include <stdio.h>
#define NUM 30

int main(){
    int vetEnter[NUM],vetPar[5],vetImpar[5];
    int i,k,numPar=0,numImpar=0;
    
    for (i = 1; i <= NUM; i++)
    {
        vetEnter[i]=i;
        if (vetEnter[i]%2==0)
        {
            vetPar[numPar]=vetEnter[i];
            numPar++;
            if (numPar==5)
            {
                printf("\nVetor de Par cheio.:");
                for (k = 0; k < 5; k++)
                {
                    printf("\t%d",vetPar[k]);
                }
                numPar=0;    
            }
        }
        else
        {
            vetImpar[numImpar]=vetEnter[i];
            numImpar++;
            if (numImpar==5)
            {
                printf("\nVetor de Impar cheio.:");
                for (k = 0; k < 5; k++)
                {
                    printf("\t%d",vetImpar[k]);
                }   
                numImpar=0;             
            }
        }
    }

    return 0;
}