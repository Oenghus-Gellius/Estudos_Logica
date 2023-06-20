/*FaÃ§a um programa que leia uma matriz de 4x5 de inteiros. Imprimir 0 nÃºmero de 
ocorrÃªncias de cada elemento na matriz.*/

#include <stdio.h>
#define NL 3 
#define NC 3
int main(){
   int mat[NL][NC]={{10,1,10},{10,5,2},{10,7,10}};
   int vElementos[NL*NC];
   int linha,coluna,i,k,posV=-1,achou,cont;
   
   for(linha=0;linha<NL;linha++){
       for(coluna=0;coluna<NC;coluna++){
           //verificando se o valor corrente jÃ¡ foi contado
           i=0;
           achou=0;
           while(i<=posV && achou==0){
               if(mat[linha][coluna]==vElementos[i])
                  achou=1;
               else
                  i++;
           }
           
           if(achou==0){
              posV++;
              vElementos[posV]=mat[linha][coluna];
              cont=0;
              for(i=linha;i<NL;i++)
                 for(k=0;k<NC;k++)
                    if(mat[linha][coluna]==mat[i][k])
                       cont++;
              
              printf("\nNÃºmero de ocorrÃªncias do nÃºmero %d = %d",mat[linha][coluna],cont) ;          
           }
       }
   }

    return 0;
}
