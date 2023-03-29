/*
13. Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são o 
número de horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se 
acrescenta nenhum adicional. Acima de 40h e até 60h há um bônus de 50% para essas horas. 
Acima de 60h há um bônus de 100% para essas horas. 
*/
#include <stdio.h>

int main(){
    int horas;
    float valorHoras,salario,salarioFinal;

    printf("\nInsira as hroas trabalhadas na semana.:");
    scanf("%d",&horas);
    if (horas>0)
    {
        printf("\nInsira o valor da hora de trabalho.");
        scanf("%f",&valorHoras);
        if (valorHoras>0)
        {
            salario=valorHoras*horas;
            if (horas<=40)
            {
                salarioFinal=salario;
            }
            else
                if (horas>40 && horas<=60)
                {
                    salarioFinal=salario+salario*0.5;
                }
                else
                    if (horas>60)
                    {
                        salarioFinal=salario+salario*1;
                    }

        printf("\n\nO salario semanal é.: %.2f",salarioFinal);
        
        }
        else
        {
            printf("Valor invalido.");
        }
    }
    else
    {
        printf("Horas de trabalho invalidas.");
    }

    return 0;
}