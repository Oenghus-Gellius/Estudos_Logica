#include <stdio.h>
#define VALORES 2
#define CEDULAS 6

int main(){    
    int i, caixaCedulas[VALORES][CEDULAS]={200,100,50,20,10,2,8,8,8,8,8,8};

    for (i = 0; i < CEDULAS; i++)
    {
        printf("\n%d cedulas de %d",caixaCedulas[0][i],caixaCedulas[1][i]);
    }
    return 0;
}
