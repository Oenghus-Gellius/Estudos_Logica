/*
12) Na Teoria de Sistemas define-se como elemento minimax de uma matriz o menor elemento da
linha em que se encontra o maior elemento da matriz. Faça um programa que preencha uma matriz
M(15,15) e determine o seu elemento minimax.

FaÃ§a um programa que determine a posiÃ§Ã£o da Ãºltima ocorrÃªncia do valor mÃ¡ximo e a
posiÃ§Ã£o da primeira ocorrÃªncia do valor mÃ­nimo em um vetor de inteiros de 100 elementos*/

#include <stdio.h>
#define TAM 5

void calcula(int v[],int tamanho, int *posMenor,int *posMaior){
    int i,maior,menor;
    maior=v[0];
    menor=v[0];
    *posMenor=0;
    *posMaior=0;
    for(i=1;i<tamanho;i++){
        if(maior<v[i]){
            maior=v[i];
            *posMaior =i;
        }
        else
           if(maior==v[i])
              *posMaior = i;
            else
               if(menor>v[i]){
                   menor=v[i];
                   *posMenor=i;
               }
    }
}
int main(){
    int v[TAM]={2,1,5,1,5};
    int indiceMenor,indiceMaior;
    calcula(v,TAM,&indiceMenor,&indiceMaior);
    printf("\nÃndice Menor = %d   Ã¬ndice Maior = %d",indiceMenor,indiceMaior);
    return 0;
}