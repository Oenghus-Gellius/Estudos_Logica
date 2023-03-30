/*
4)Faça um algoritmo que leia as três notas de uma aluno. Calcular a média ponderada do aluno,
considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. Mostrar a média
calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se
a média for menor que 5. 
*/
#include <stdio.h>

int main(){
    float n1,n2,n3,maior,meio,menor,media;

    printf("Insira a primenira nota.:");
    scanf("%f",&n1);
    printf("Insira a Segunda nota.:");
    scanf("%f",&n2);
    printf("Insira a Terceira nota.:");
    scanf("%f",&n3);


    if (n1>=n2 && n2>=n3)
    {
        maior=n1;
        meio=n2;
        menor=n3;
    }
    if (n3>=n1 && n1>=n2)
    {
        maior=n3;
        meio=n1;
        menor=n2;
    }
    if (n2>=n3 && n3>=n1)
    {
        maior=n2;
        meio=n3;
        menor=n1;
    }
    if (n1>=n3 && n3>=n2)
    {
        maior=n1;
        meio=n3;
        menor=n2;
    }
    if (n2>=n1 && n1>=n3)
    {
        maior=n2;
        meio=n1;
        menor=n3;
    }
    if (n3>=n2 && n2>=n1)
    {
        maior=n3;
        meio=n2;
        menor=n3;
    }
    
    media=((maior*4)+(meio*3)+(menor*3))/10;

    if (media>=5)
    {
        printf("Aluno APROVADO com a media %.1f",media);
    }
    else
    {
        printf("Aluno REPROVADO com a meida %.1f",media);
    }
    return 0;
}