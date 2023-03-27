/*
1) Faça um algoritmo para calcular a média aritmética das 3 notas de um aluno e mostrar, além do
valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 6, ou a
mensagem "reprovado", caso contrário. 
*/
#include <stdio.h>

int main(){
    float n1,n2,n3,media;

    printf("Insira o valor da primeira nota.:");
    scanf("%f",&n1);
    printf("Insira o valor da segunda nota.:");
    scanf("%f",&n2);
    printf("Insira o valor da terceira nota.:");
    scanf("%f",&n3);

    media=(n1+n2+n3)/3;

    if (media>=6)
    {
        printf("APROVADO!!!");
    }
    else
    {
        printf("REPROVADO!!!");
    }
    
    
    return 0;
}