/*Uma empresa que possui 20 funcionÃ¡rios, guarda a quantidade vendida por cada um de seus
funcionÃ¡rios em cada um dos 7 dias dasemana. FaÃ§a um programa que:
a) Mostre a quantidade vendida por cada funcionÃ¡rio;
b) Mostre em qual ou quais dias da semana cada funcionÃ¡rio vendeu mais;
c) O nome do funcionÃ¡rio ou funcionÃ¡rios com maior valor de venda na semana;
d) Para cada dia da semana, a quantidade vendida por cada funcionÃ¡rio.*/

#include <stdio.h>
#include <string.h>
#define ND 3 
#define NF 2
void retiraEnter(char *s){
    int t=strlen(s);
    if(s[t-1]=='\n')
       s[t-1]='\0';
}
int main(){
    float mVendas[ND][NF],vVendas[NF],maior;
    char vDias[ND][20]={"Domingo","segunda","TerÃ§a"},vNomes[NF][100];
    int linha,coluna,i;
    
    for(coluna=0;coluna<NF;coluna++){
        printf("ForneÃ§a o nome do %do. funcionÃ¡rio:",coluna+1);
        fgets(vNomes[coluna],100,stdin);
        retiraEnter(vNomes[coluna]);
        setbuf(stdin,NULL);
        printf("\nVendas na Semana\n");
        vVendas[coluna]=0;
        for(linha=0;linha<ND;linha++){
            printf("%s:",vDias[linha]);
            scanf("%f",&mVendas[linha][coluna]);
            vVendas[coluna]+=mVendas[linha][coluna];
        }
          
        setbuf(stdin,NULL);
    }
    
    
    //a) Mostre a quantidade vendida por cada funcionÃ¡rio;
    printf("\nQuantidade Vendida por Cada FuncionÃ¡rio\n");
    printf("Nome\t\t\tValor Total\n");
    for(i=0;i<NF;i++)
       printf("%s\t\t\t%.1f\n",vNomes[i],vVendas[i]);
    
    //b) Mostre em qual ou quais dias da semana cada funcionÃ¡rio vendeu mais;
    for(coluna=0;coluna<NF;coluna++){
        //encontrando o maior valor da coluna corrente       
        maior = mVendas[0][coluna];
        for(linha=1;linha<ND;linha++){
            if(maior<mVendas[linha][coluna])
                 maior=mVendas[linha][coluna];
        }
        
        printf("\nMaior venda na semana do funcionÃ¡rio %s = %.1f",vNomes[coluna],maior);
        printf("\nDias da Semana com maior valor de venda\n");
        for(linha=0;linha<ND;linha++)
            if(mVendas[linha][coluna]==maior)
               printf("%s\n",vDias[linha]);
    }
    
    //c) O nome do funcionÃ¡rio ou funcionÃ¡rios com maior valor de venda na semana;
    maior =vVendas[0];
    for(i=1;i<NF;i++){
       if(maior<vVendas[i])
          maior = vVendas[i];
    }
    printf("\nMaior Venda na semana = %.1f",maior);
    printf("\nFuncionÃ¡rios com maior valor de venda na semana");
    for(i=0;i<NF;i++)
        if(vVendas[i]==maior)
            printf("%s\n",vNomes[i]);
            
    //d) Para cada dia da semana, a quantidade vendida por cada funcionÃ¡rio.*/  
    printf("\nQuantidade Vendida por cada FuncionÃ¡rio em cada Dia da Semana\n");
    
    for(linha=0;linha<ND;linha++){
        printf("%s\n",vDias[linha]);
        for(coluna=0;coluna<NF;coluna++)
           printf("%s =%.1f\n",vNomes[coluna],mVendas[linha][coluna]);
    }
    return 0;
}
