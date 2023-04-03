/*
44) Um cinema possui capacidade de 100 lugares e está sempre com ocupação total. Certo dia, cada 
espectador respondeu a um questionário, no qual constava:
 sua idade;
 sua opinião em relação ao filme, segundo as seguintes notas:
A: Ótimo
B: Bom
C: Regular
D: Ruim
E: Péssimo
Elabore um programa que, lendo estes dados, calcule e imprima:
 A quantidade de respostas ótimo;
 A média de idade das pessoas que responderam ruim;
 O percentual de respostas péssimo e a maior idade que utilizou esta opção;
 A diferença de idade entre a maior idade que respondeu ótimo e a maior idade 
que respondeu ruim
*/
#include<stdio.h>
int main(){
    const int CINE = 5;
    int nota,i,idade,qtdA=0,qtdD=0,qtdMediaIdRuim=0,qtdE=0,maiorIdPess,maiorIdD,maiorIdA,diferAD;
    float mediaIdRuim=0,percPess=0;

    for (i = 0; i < CINE; i++)
    {
        printf("\nSua idade.:");
        scanf("%d",&idade);
        printf("1: Ótimo\t2: Bom\t3: Regular\t4: Ruim\t5: Péssimo\nSua opinião em relação ao filme, segundo as seguintes notas:");
        scanf("%d",&nota);
        if (nota==1)
        {
            if (qtdA==0)
            {
                maiorIdA=idade;
            }
            if (maiorIdA<idade)
            {
                maiorIdA=idade;
            }
            qtdA++;
        }
        if (nota==4)
        {
            mediaIdRuim=mediaIdRuim+idade;
            if (qtdD==0)
            {
                maiorIdD=idade;
            }
            if (maiorIdD<idade)
            {
                maiorIdD=idade;
            }
            qtdD++;
        }
        if (nota==5)
        {
            if (qtdE==0)
            {
                maiorIdPess=idade;
            }
            if (maiorIdPess<idade)
            {
                maiorIdPess=idade;
            }            
            qtdE++;
        }
        
        
    }
    mediaIdRuim=mediaIdRuim/(float)qtdD;
    percPess=qtdE/(float)CINE*100;
    if (maiorIdA>maiorIdD)
    {
        diferAD=maiorIdA-maiorIdD;
    }
    else
    {
        diferAD=maiorIdD-maiorIdA;
    }
    
    printf("\n%d\tQuantidade de pessoas que acharam OTIMO o Filme.",qtdA);
    printf("\n%.2f\tÉ a media de idade das pessoas que acharam RUIM o Filme.",mediaIdRuim);
    printf("\n%.2f%%\tÉ O Percentual de pessoas que acharam PESSIMO o Filme.",percPess);
    printf("\n%d\tÉ a maior idade da pessoa que achau PESSIMO o Filme.",maiorIdPess);
    printf("\n%d\tÉ a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu RUIM o Filme.",diferAD);

    return 0;
}