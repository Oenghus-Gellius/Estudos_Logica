/*
45) Em um prédio há três elevadores denominados A, B e C. Para otimizar o sistema de controle 
dos elevadores foi realizado um levantamento no qual cada usuário respondia:
a) O elevador que utilizava com mais frequência;
b) O período que utilizava o elevador, entre:
M = matutino;
V = vespertino
N = Noturno
Faça um programa que calcule e imprima:
 Qual é o elevador mais frequentado e em que período se concentra o maior fluxo;
 Qual a diferença entre o mais usado dos horários e o menos usado;
*/
#include<stdio.h>
int main(){
    int elevador,periodo,qtdEle1=0,qtdEle2=0,qtdEle3=0,qtdMat=0,qtdVes=0,qtdNot=0,difereca;

    do
    {
        printf("Qual elevador que mais frequenta.:");
        scanf("%d",&elevador);
        if (elevador!=0)
        {
            printf("Qual o periodo que utiliza o elevador.:");
            scanf("%d",&periodo);
        }
        if (elevador==1)
        {
            qtdEle1++;
        }
        else
            if (elevador==2)
            {
                qtdEle2++;
            }
            else
                if (elevador==3)
                {
                    qtdEle3++;
                }
        if (periodo==1)
        {
            qtdMat++;
        }
        else
            if (periodo==2)
            {
                qtdVes++;
            }
            else
                if (periodo==3)
                {
                    qtdNot++;
                }
                    
    } while (elevador!=0);
    //calculo do elevador mais usado
    printf("\nO mais frequentado é.:");
    if (qtdEle1>qtdEle2 && qtdEle2>qtdEle3)
    {
        printf("\nElevador A");
    }
    else
        if (qtdEle2<qtdEle3 && qtdEle3<qtdEle1)
        {
            printf("\nElevador B");
        }
        else
            if (qtdEle3<qtdEle1 && qtdEle1<qtdEle2)
            {
                printf("\nElevador C");
            }

                
            
        
            f
    
    return 0;
}