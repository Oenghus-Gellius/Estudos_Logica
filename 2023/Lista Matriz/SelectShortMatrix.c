/*
faça uma matriz 5x5 com numeros aleatórios e ordenea posteriormente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 3

void preenchMatriz (int matrix[][COL],int linha,int coluna)
{
    int i,k;
    for (i = 0; i < linha; i++)
    {
        for (k = 0; k < coluna; k++)
        {
            matrix[i][k]=rand()%100+1;
        }
    }
}

void printMatrix (int matrix[][COL],int linha,int coluna)
{
    int i,k;
    //saida da matrix base
    for (i = 0; i < linha; i++)
    {
        for (k = 0; k < coluna; k++)
        {
            printf("|%d|\t",matrix[i][k]);
        }
        printf("\n");
    }
}

void ordemandoMatrix (int matrix[][COL],int linha,int coluna)
{
    int i,k,j,aux;
    for (k = 0; k < linha*coluna; k++)
    {
        for (i = 0; i < linha; i++)
        {
            for (j = 0; j < coluna; j++)
            {
                if (matrix[i][j]>matrix[i][j+1])
                {
                    aux=matrix[i][j];
                    matrix[i][j]=matrix[i][j+1];
                    matrix[i][j+1]=aux;
                }
            }
        }
    }
}

int main(){
    int matrix[LIN][COL];

    preenchMatriz (matrix,LIN,COL);
    printf("Matriz original:\n");
    printMatrix (matrix,LIN,COL);
    
    ordemandoMatrix(matrix,LIN,COL);
    printf("\nMatriz ordenada:\n");
    printMatrix (matrix,LIN,COL);

    return 0;
}