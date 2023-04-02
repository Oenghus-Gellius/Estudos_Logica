/*
32) Faça um programa que tenha como entrada a nota de cada um dos alunos de uma turma. Deve 
ser calculado e impresso o número de alunos que tiraram a maior nota e o número de alunos que 
tiraram a segunda maior nota. Imprimir os resultados.
*/
#include<stdio.h>
int main(){
    int maiorNota,segNota,start=1;
    float nota;

    do
    {
        printf("Insira a nota.:");
        scanf("%f",nota);
        if (start==1)
        {
            segNota=nota;
            maiorNota=nota;
        }
        if (maiorNota<nota)
        {
            segNota=maiorNota
        }
        


    } while (nota>=0);
    

    return 0;
}