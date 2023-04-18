/*
24) Faça um programa que leia a, b, c, d, e que constituem o gabarito de uma prova de 5 questões. 
Leia, a seguir, um número não determinado de conjuntos de 6 valores num, a1, b1, c1, d1, e1 onde 
num é o número do aluno e os demais valores são as respostas dos alunos às 5 questões. Conte o 
número de acertos e multiplique por 2. Escrever, para cada aluno, o seu número e a sua nota.
*/
#include <stdio.h>

int main(){
    int mat,contador=1;
    int quest1,quest2,quest3,quest4,quest5;//gabarito
    int resQ1,resQ2,resQ3,resQ4,resQ5;
    int acertos=0;
    
    printf("\nGabarito 1.:");
    scanf("%d",&quest1);
    printf("\nGabarito 2.:");
    scanf("%d",&quest2);
    printf("\nGabarito 3.:");
    scanf("%d",&quest3);
    printf("\nGabarito 4.:");
    scanf("%d",&quest4);
    printf("\nGabarito 5.:");
    scanf("%d",&quest5);

    do
    {
        printf("\nInsira a matricula do aluno.:");
        scanf("%d",&mat);

    printf("\nQuestão 1.:");
    scanf("%d",&resQ1);
    printf("\nQuestão 2.:");
    scanf("%d",&resQ2);
    printf("\nQuestão 3.:");
    scanf("%d",&resQ3);
    printf("\nQuestão 4.:");
    scanf("%d",&resQ4);
    printf("\nQuestão 5.:");
    scanf("%d",&resQ5);    

    if (quest1==resQ1)
    {
        acertos++;
    }
    if (quest2==resQ2)
    {
        acertos++;
    }
    if (quest3==resQ3)
    {
        acertos++;
    }
    if (quest4==resQ4)
    {
        acertos++;
    }
    if (quest5==resQ5)
    {
        acertos++;
    }    
    printf("\n%d\tAcertos!!!.",acertos);
    acertos=0;
        
    }while (mat>0);
 
    return 0;
}
