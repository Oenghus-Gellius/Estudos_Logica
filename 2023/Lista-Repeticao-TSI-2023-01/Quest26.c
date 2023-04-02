/*
26) Foi realizada uma pesquisa de algumas características físicas da população de uma certa região, 
a qual coletou os seguintes dados referentes a cada habitante para serem analisados: 
- sexo (masculino e feminino);
- cor dos olhos (azuis, verdes ou castanhos);
- cor dos cabelos (louros, castanhos, pretos);
- idade.
Faça um programa que determine e escreva: 
- a maior idade dos habitantes 
- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que 
tenham olhos verdes e cabelos louros. 
O final do conjunto de habitantes é identificado pelo valor -1 fornecido para idade.
*/
#include <stdio.h>
int main(){
    int sexo,olhos,cabelo,idade,start=1,maiorId,cutIdOvCl=0;

    do
    {
        printf("Insira a idade.:");
        scanf("%d",&idade);
        if (idade>0)
        {
            printf("1-masculino\t2-Feminino\nQual seu sexo.:");
            scanf("%d",&sexo);
            printf("1-Azuis\t\t2-Verdes\t3-Castanhos\nQual a cor dos olhos.:");
            scanf("%d",&olhos);
            printf("1-Louro\t2-Castanhos\t3-Pretos\nQual a cor do cabelo.:");
            scanf("%d",&cabelo);
            if (start==1)
            {
                maiorId=idade;
                start=0;
            }
            if (maiorId<=idade)
            {
                maiorId=idade;
            }
            if (sexo==2 && idade>=18 && idade<=25 && olhos==2 && cabelo==1)
            {
                cutIdOvCl++;                
            }
        }   
    } while (idade>0);
    
    printf("\nA maior idade é.:%d",maiorId);
    printf("\nA quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos louros são.:%d \n",cutIdOvCl);

    return 0;
}