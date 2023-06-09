/*11) Faça um programa em C que receba:
a) 10 nomes de produtos e armazene-os em um vetor (o nome é único);
b) O estoque de cada um destes produtos, em cada um dos 5 armazéns e armazene-os em uma
matriz 5X10;
c) O custo(preço) dos 10 produtos e armazene-os em um vetor.

Deve ser calculado e impresso:
· O total de itens armazenados em cada armazém;
· O total de itens armazenados de cada produto em todos os armazéns juntos;
· O nome do produto e o número do armazém que possui a maior quantidade de itens estocados
deste produto;
· O nome e o valor estocado de cada produto(soma dos armazéns)*/

#include <stdio.h>
#include <string.h>
#define ARMAZEM 2
#define PRODUTOS 3


//check se repete
char funcCheckRepete (char nomeCheck[],char vetNome[][100], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (strcmp(nomeCheck,vetNome[i])==0)
        {
            return 1;
        }
    }
    return 0;
}

int main(){
    char vetNome[PRODUTOS][100]={"Veja","Escova","Camisinha"};
    char nomeProd[100];
    int mEstoque[ARMAZEM][PRODUTOS]={{5,1,4},{6,2,3}};
    float vetValorProd[PRODUTOS]={5,7,6},vetTotalPorArmazem[ARMAZEM];
    int i,k;
    int sair,codProduto,codArmazem,qtdPruduto,valorProd,maiorQtdProduto,baseMaiorProdProd,baseMaiorProdArm;
    int vetTotalArmazem[ARMAZEM],vetTotalProduto[PRODUTOS];

/*
    for (i = 0; i < PRODUTOS; i++)//a) cadastro produto
    {
        printf("\n\nInsira o nome %dº do produto.:",i+1);
        fgets(nomeProd,100,stdin);
        setbuf(stdin,NULL);
        if (funcCheckRepete(nomeProd,vetNome,PRODUTOS))
        {
            printf("\nnome de produto repetido");
            i--;
        }
        else
        {
            strcpy(vetNome[i],nomeProd);
        } 
    }
    do//cadastro estoque produto e armazem.
    {
        do
        {
            printf("\nInsira o codigo do produto.:");
            scanf("%d",&codProduto);
            printf("\nInsira o codigo do Armazem.:");
            scanf("%d",&codArmazem);
            if (codProduto<0 || codProduto>PRODUTOS || codArmazem<0 || codArmazem>ARMAZEM)
            {
                printf("Valores incorretos!!!");
            }
            else
            {
                printf("\nInsira o quantidade de %s no Armazem %d:",vetNome[codArmazem],codProduto);
                scanf("%d",&qtdPruduto);
                mEstoque[codArmazem][codProduto]=qtdPruduto;
            }
            
        } while (codProduto<0 || codProduto>PRODUTOS || codArmazem<0 || codArmazem>ARMAZEM);
        mEstoque[codArmazem][codProduto]=qtdPruduto;
        printf("\nPara sair do controle de estoque digite 1.:");
        scanf("%d",&sair);
    } while (sair!=1);
    
    printf("\nInsira o valor do produto.:");
    for (i = 0; i < PRODUTOS; i++)//valor dos produtos
    {
        do
        {
            printf("\n%s.:",vetNome[i]);
            
            scanf("%f",&valorProd);
            if (valorProd<0)
            {
                printf("valor incorreto!!!");
                i--;
            }
            else
            {
                vetValorProd[i]=valorProd;
            }
        } while (valorProd<0);
    }
*/
    //saida
    printf("\nRelatorio de Estoque!!!");
    for (i = 0; i < ARMAZEM; i++)//total em cada Armezm
    {
        vetTotalArmazem[i]=0;
        vetTotalPorArmazem[i]=0;
        for (k = 0; k < PRODUTOS; k++)
        {
            vetTotalArmazem[i]=vetTotalArmazem[i]+mEstoque[i][k];//<--AQUI
            vetTotalPorArmazem[i]=vetTotalPorArmazem[i]+(vetValorProd[i]*mEstoque[i][k]);
            
        }
        printf("\nO total de prudutos no armazem %d é.: %d",i,vetTotalArmazem[i]);
        printf("\nO valor em estoque do armazem %d é %.2f",i,vetTotalPorArmazem[i]);
    }

    for (i = 0; i < PRODUTOS; i++)//produto no total do armazem 
    {
        vetTotalProduto[i]=0;
        for (k = 0; k < ARMAZEM; k++)
        {
            vetTotalProduto[i]=vetTotalProduto[i]+mEstoque[k][i];//<--AQUI
        }
        printf("\nO total de %s é.: %d",vetNome[i],vetTotalProduto[i]);
    }
    //O nome do produto e o número do armazém que possui a maior quantidade de itens 
    //estocados deste produto;
    
    for (i = 0; i < PRODUTOS; i++)
    {
        maiorQtdProduto=mEstoque[0][i];
        baseMaiorProdProd=i;
        baseMaiorProdArm=0;
        for (k = 0; k < ARMAZEM; k++)
        {
            if (maiorQtdProduto<mEstoque[i][k])
            {
                baseMaiorProdProd=i;
                baseMaiorProdArm=k;
            }
        }
        printf("\nO produto %s tem %d no Armazem %d",vetNome[i],mEstoque[baseMaiorProdProd][baseMaiorProdArm],baseMaiorProdArm);
    }
    
    return 0;
}