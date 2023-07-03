/*
Atividade 5
Bolivar Augusto Dias Jr
TSI - Logica.:2023
https://github.com/Oenghus-Gellius/Estudos_Logica
*/
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

typedef struct{
    int sCodigo;
    char sNomeDep[50];
}TDepartamento; //sDep

typedef struct{
   int sMatricula;
   char sMomeFunc[100];
   float sSalario;
   int codDep;
}TFuncionario; //sFunc

void retiraEnter(char *s){
    int t = strlen(s);
    if(s[t-1]=='\n')
       s[t-1]='\0';
}

int pesquisarepetDep (FILE *arqDepartamento, int cod)
{
    TDepartamento sDep;
    int posicao;

    fseek(arqDepartamento,0,SEEK_SET);
    while (fread(&sDep,sizeof(TDepartamento),1,arqDepartamento)==1)
    {
        if (sDep.sCodigo==cod)
        {
            return posicao;
        }
        else
        {
            posicao++;
        }
    }
    return -1;
}

int pesqReprtFunc (FILE *arqFuncionario, int mat)
{
    TFuncionario sFunc;
    int posicao;

    fseek(arqFuncionario,0,SEEK_SET);
    while (fread(&arqFuncionario,sizeof(TFuncionario),1,arqFuncionario)==1)
    {
        if (sFunc.sMatricula==mat)
        {
            return posicao;
        }
        else
        {
            posicao++;
        }
    }
    return -1; 
}

void cadDepartamento (FILE *arqDepartamento)
{
    TDepartamento sDep;
    int codigo,pesquisa,sair;

    do
    {
        printf("\nForneça o codigo do Departamento.:");
        scanf("%d",&codigo);
        pesquisa=pesquisarepetDep(arqDepartamento,codigo);
        if (pesquisa==-1)
        {
            sDep.sCodigo=codigo;
            printf("\nForneça o Nome do Departamento>:");
            setbuf(stdin,NULL);
            fgets(sDep.sNomeDep,100,stdin);
            setbuf(stdin,NULL);

            fseek(arqDepartamento,0,SEEK_END);
            fwrite(&sDep,sizeof(TDepartamento),1,arqDepartamento);
        }
        else
        {
            printf("\nCodigo de Departamento já existente!!!");
        }
        printf("\nDeseja sair do cadastro? 1-Não  2-Sim");
        scanf("%d",&sair);
    } while (sair!=2);
    
}

int main(){
    FILE *arqDepartamento, *arqFuncionario;
    
    int menu,sair;

    arqDepartamento=fopen("Departamento.dat","rb+");
    if (arqDepartamento==NULL)
    {
        arqDepartamento=fopen("Departamento.dat","wb+");
    }
    
    arqFuncionario=fopen("Funcionario.dat","rb+");
    if (arqFuncionario==NULL)
    {
        arqFuncionario=fopen("Funcionarios.dat","wb+");
    }
    
    do
    {
        printf("\nMenu.:");
        printf("\n1-Cadastro de departamentos\n2-Cadastro de Funcionarios");
        printf("\n3-Listagem de Funcionarios\n4-Listagem de Departamentos");
        printf("\n5-Funcionários por Departemento\n6-Fim");
        printf("\nForneça sua opção:");
        scanf("%d",&menu);

        switch (menu)
        {
        case 1://Cadastro de departamentos
            cadDepartamento (arqDepartamento);
            break;
        default:
            printf("Opção invalida!!!");
            break;
        }

        printf("\nDeseja fechar o programa.:");
        scanf("%d",&sair);
    } while (sair!=2);
    

    return 0;
}