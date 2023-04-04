/*
Leia a nota e o número de faltas de um aluno e escreva seu conceito de acordo com a
tabela abaixo
Nota Conceito
                Até 20 faltas Acima de 20 faltas
9.0 até 10.0         A               B
7.5 até 8.9          B               C
5.0 até 7.4          C               D
4.0 até 4.9          D               E
0.0 até 3.9          E               E
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int falta;
    float nota;

    printf("\nInsira a sua nota:");
    scanf("%f",&nota);
    printf("\nNumero de faltas:");
    scanf("%d",&falta);

    if (nota>=9 && nota<=10 && falta <=20) 
    {
        printf("\nConceito A\n");
    }
    if (nota>=9 && nota<=10 && falta >20) 
    {
        printf("\nConceito B\n");
    }
    if (nota>=7.5 && nota<9 && falta <=20) 
    {
        printf("\nConceito B\n");
    }    
    if (nota>=7.5 && nota<9 && falta >20) 
    {
        printf("\nConceito C\n");
    }      
    if (nota>=5 && nota<7.5 && falta <=20) 
    {
        printf("\nConceito C\n");
    }    
    if (nota>=5 && nota<7.5 && falta >20) 
    {
        printf("\nConceito D\n");
    }    
    if (nota>=4 && nota<5 && falta <=20) 
    {
        printf("\nConceito D\n");
    }    
    if (nota>=4 && nota<5 && falta >20)  
    {
        printf("\nConceito E\n");
    }   
        if (nota>=0 && nota<4 && falta <=20) 
    {
        printf("\nConceito E\n");
    }    
    if (nota>=0 && nota<4 && falta >20)  
    {
        printf("\nConceito E\n");
    }  
    
    return 0;
}