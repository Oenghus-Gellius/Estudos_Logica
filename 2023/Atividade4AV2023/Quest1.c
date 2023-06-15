/*
Questão 01) Faça um programa para simular o controle de emissão de cédulas de um caixa
eletrônico. O seguinte menu deve ser apresentado:
 Terminal de Autoatendimento (Módulo Administrador)
1 - Efetuar Saque
2 - Relatório de cédulas disponíveis
3 - Valor total disponível
4 - Efetuar reposição de cédulas
5 -Sair do programa
Escolha uma opção:
1
O programa deve trabalhar com uma matriz 6 x 2, responsável por guardar a quantidade de cédulas
disponível de cada valor. Veja a figura a seguir:

Opção 1: realizar uma simulação de saque no caixa eletrônico. Quando o usuário escolher esta
opção, o programa deverá solicitar o valor do saque e em seguida “efetuar o saque”, mostrando na
tela quantas cédulas de cada valor foram emitidas. Por exemplo, se o usuário solicitar um saque no
valor de R$ 784,00, o programa deverá mostrar:
Cédulas de 50: 15
Cédulas de 20: 1
Cédulas de 10: 1
Cédulas de 2: 2
Saque efetuado com sucesso!
Obs.
a) O programa deve fazer o cálculo de quais cédulas serão emitidas visando emitir o menor
número de notas possível, dando prioridade para as cédulas de maior valor. Para simular o saque,
o programa deve fazer a devida atualização na matriz de quantidades de cédulas disponíveis.

b) Se as notas de algum valor acabarem, o programa deve tentar efetuar o saque através das
demais notas existentes, caso seja possível, sempre visando emitir o menor número de cédulas.

c) Se não for possível a realização do saque solicitado com a quantidade de notas existentes, o
programa deverá emitir a mensagem “Saque não realizado por falta de cédulas”.

d) O programa não deverá permitir que mais de 30 cédulas sejam emitidas, impossibilitando os
saques nesses casos.

Opção 2: o programa deverá mostrar a matriz de quantidades de cédulas, informando quantas notas
estão disponíveis para cada valor no compartimento.

Opção 3: o programa deverá apresentar o valor total em reais disponível no caixa.

Opção 4: deve possibilitar que o usuário faça a “reposição” das cédulas, ou seja, que o usuário
informe os valores da segunda coluna da matriz de quantidades.

*/

#include <stdio.h>
#define VALORES 2
#define CEDULAS 6

void funcSaque(int caixaCedulas[][CEDULAS]){
    int saque,vetDiv[CEDULAS],resto;
    int i;
    do
    {
        printf("\nInsira o valor do saque.:");
        scanf("%f",&saque);
        if (saque<=0)
        {
            printf("Valor incorreto.");
        }
        else
            if (saque>funcValorTotal(caixaCedulas[VALORES][CEDULAS]))
            {
                printf("\nValor insuficiente no Caixa para saque!!");
            }
            else
            {
                resto=saque;
                for (i = 0; i < CEDULAS; i++)
                {
                    vetDiv[i]=resto/caixaCedulas[0][i];
                    resto=resto%caixaCedulas[0][i];
                }
                printf("\n-----------\nSaque.:%d",saque);
                for (i = 0; i < CEDULAS; i++)
                {
                    printf("\n%d Cedulas de.: %d",vetDiv[i],caixaCedulas[0][i]);
                }
            }
    } while (saque<=0);
}
void funcRelatorio (int caixaCedulas[][CEDULAS]){
    int i;
    for (i = 0; i < CEDULAS; i++)
    {
        printf("\n%d cedulas de %d",caixaCedulas[0][i],caixaCedulas[1][i]);
    }
}
int funcValorTotal (int caixaCedulas[][CEDULAS]){
    int valorTotal,i;
    valorTotal=0;
    for (i = 0; i < CEDULAS; i++)
    {
        valorTotal=valorTotal+(caixaCedulas[0][i]*caixaCedulas[1][i]);
    }
    return valorTotal;  
}
void funcReposicaoCedulas (int caixaCedulas[][CEDULAS]){
    int i,notasDin;
    printf("\nInsira as cedulas.:");
    for (size_t i = 0; i < CEDULAS; i++)
    {
        printf("\nCedulas de %d.:",caixaCedulas[0][i]);
        scanf("%d",&notasDin);
        caixaCedulas[1][i]=caixaCedulas[1][i]+notasDin;
    }
}

int main(){
    int caixaCedulas[VALORES][CEDULAS]={100,50,20,10,2,1,8,8,8,8,8,8};
    int i,k,menu,cedulas;
    float saque;
    
    do
    {
        printf("\n-------------------------------------");
        printf("\nTerminal de Autoatendimento (Módulo Administrador)\n1 - Efetuar Saque\n2 - Relatório de cédulas disponíveis\n3 - Valor total disponível\n4 - Efetuar reposição de cédulas\n5 - Sair do programa.:");
        printf("\nEscolha uma das opções.:");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1://Saque
            funcSaque (caixaCedulas);
        break;
        case 2://Relatório de cédulas disponíveis = ok
            funcRelatorio (caixaCedulas);
            break;
        case 3://Valor total disponível - ok
            printf("\nTotal disponivel no caixa.: %d",funcValorTotal (caixaCedulas));
            break;
        case 4://Efetuar reposição de cédulas
            funcReposicaoCedulas(caixaCedulas);
            break;
        default:
            printf("\nOpção invalida!!");

        }
    } while (menu!=5);
    printf("Obrigado!!!");

    return 0;
}