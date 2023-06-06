#include <stdio.h>
#define TAM 5
int main(){
    int v[TAM]={1,2,3,4,5},i,aux,k;
    
    printf("\nElementos do vetor\n");
    for(i=0;i<TAM;i++)
       printf("%d\t",v[i]);
    
    //invertendo o vetor
    /*for(i=0;i<TAM/2;i++){
        aux = v[i];
        v[i]=v[TAM-i-1];
        v[TAM-i-1]=aux;
    }*/
    k=TAM-1;
    for(i=0;i<TAM/2;i++,k--){
        aux = v[i];
        v[i]=v[k];
        v[k]=aux;
    }
    printf("\nElementos do vetor ApÃ³s a InversÃ£o\n");
    for(i=0;i<TAM;i++)
       printf("%d\t",v[i]);
    return 0;
}
