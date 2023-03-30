/*
24) Escrever um algoritmo que leia a hora de início e hora de término de um jogo, ambas
subdivididas em dois valores distintos : horas e minutos. Calcular e escrever a duração do jogo,
também em horas e minutos, considerando que o tempo máximo de duração de um jogo é de 24
horas e que o jogo pode iniciar em um dia e terminar no dia seguinte
*/
#include<stdio.h>
int main(){
    int hInicio, mInicio, hFim, mFim,duracaoH,duracaoMim;

    printf("Insira a hora de inicio.:");
    scanf("%d",&hInicio);
    printf("Insira os minutos de inicio.:");
    scanf("%d",&mInicio);
    printf("Insira a hora de final.:");
    scanf("%d",&hFim);
    printf("Insira os minutos de final.:");
    scanf("%d",&mFim);

    mInicio=mInicio+(hInicio*60);
    mFim=mFim+(hFim*60);

    if (mFim>mInicio)//mesmo dia
    {
        duracaoMim=mFim-mInicio;
        duracaoH=duracaoMim/60;
        duracaoMim=duracaoMim%60;
        printf("\n\n A partida durou %d horas e %d minutos.\n\n",duracaoH,duracaoMim);
    }
    else//dias diferentes
    {
        duracaoMim=1440-mInicio;
        duracaoMim=duracaoMim+mFim;
        duracaoH=duracaoMim/60;
        duracaoMim=duracaoMim%60;
        printf("\n\n A partida durou %d horas e %d minutos.\n\n",duracaoH,duracaoMim);
    }
    return 0;
}