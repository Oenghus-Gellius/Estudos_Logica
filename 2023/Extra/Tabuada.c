/*Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9*/

#include <stdio.h>
#include <math.h>

int main (){
    int cont,i,num;

    for (cont = 0; cont < 10; cont++)
    {
        for (i = 1; i < 10; i++)
        {
            printf("\t%d", num=cont*i);
        }
        printf("\n");
    }

    return 0;
}
