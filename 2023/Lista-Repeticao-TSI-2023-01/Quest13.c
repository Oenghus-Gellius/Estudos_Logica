/*
13) Escreva um programa que calcule a média aritmética das 3 notas dos alunos de uma classe. O 
programa deverá ler, além das notas, o código do aluno e deverá ser encerrado quando o código for 
igual a zero. 
*/
#include<stdio.h>
int main(){
    int mat,i;
    float nota1,nota2,nota3,media;

    do
    {
        printf("\nInsira o numero de matriculoa.:");
        scanf("%d",&mat);
        if (mat>0)
        {
            printf("Insira a 1ª nota");
            scanf("%f",&nota1);
            printf("Insira a 2ª nota");
            scanf("%f",&nota2);
            printf("Insira a 3ª nota");
            scanf("%f",&nota3);
            media=((float)nota1+nota2+nota3)/3;
            printf("A media é.: %.1f",media);
        }
      
    } while (mat!=0);
    
    return 0;
}