/*
13) Faça um algoritmo que calcule o peso idela de uma pessoa usando as seguintes fórmulas:
 homens: (72.7*altura) -58
 mulheres: (62.1*altura) – 44.7
*/
#include<stdio.h>
int main(){
    int sexo;
    float alt,pesoId;

    printf("1-Homem\n2-Mulher\nSexo.:");
    scanf("%d",&sexo);
    printf("Insira sua altura.:");
    scanf("%f",&alt);

    if (sexo==1)
    {
        pesoId=(alt*72.7)-58;
        printf("\n\nO peso ideal para um homem com a altura %.1f m é de %.1fkg",alt,pesoId);
    }
    else
    {
        pesoId=(alt*62.1)-44.7;
        printf("\n\nO peso ideal para uma mulher com a altura %.1f m é de %.1fkg",alt,pesoId);
    }
    return 0;
}