/*
Atividade 5
Bolivar Augusto Dias Jr
TSI - Logica.:2023
https://github.com/Oenghus-Gellius/Estudos_Logica

Atividade.:
A função listagem, retorne a quantidade de funcionários por departamento, 
sem que seja feita toda a leitura do arquivo, 
ou seja que seja feita a leitura dos departamentos que estão ordenados, 
contando o número de funcionários de cada departamento até o último funcionário 
cadastrado naquele departamento.
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
   char sNomeFunc[100];
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
    posicao=0;

    rewind(arqDepartamento);//fseek(arqDepartamento,0,SEEK_SET);
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

    posicao=0;

    rewind(arqFuncionario);//fseek(arqFuncionario,0,SEEK_SET);
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

    fseek(arqDepartamento,0,SEEK_END);
    sDep.sCodigo=ftell(arqDepartamento)/sizeof(TDepartamento);

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
            retiraEnter(sDep.sNomeDep);
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

void cadFuncionario (FILE *arqFuncionario,FILE *arqDepartamento)//Esta sobrecrevendo os funcionarios
{
    TFuncionario sFunc;
    TDepartamento sDep;
    int pesquisa,codD,pesquisaDepCod,sair;

    fseek(arqDepartamento,0,SEEK_END);
    sFunc.sMatricula=ftell(arqFuncionario)/sizeof(TFuncionario);

    if (ftell(arqDepartamento)/sizeof(TDepartamento)==0)
    {
        printf("\nNenhum Departamento cadastrado");
        return;
    }

    do
    {
        sFunc.sMatricula++;
        printf("\nForneça o nome do Funcionario.:");
        setbuf(stdin,NULL);
        fgets(sFunc.sNomeFunc,100,stdin);
        retiraEnter(sFunc.sNomeFunc);
        setbuf(stdin,NULL);
        printf("\nSalario do Funcionario.:");
        scanf("%f",&sFunc.sSalario);

        do
        {
            printf("\nDepartamentos Cadastrados>:");
            printf("\nCodigo\t\tNome.:");
            rewind(arqDepartamento);
            while (fread(&sDep,sizeof(TDepartamento),1,arqDepartamento)==1)
            {
                printf("\n%d\t\t%s",sDep.sCodigo,sDep.sNomeDep);
            }
            printf("\nInsira o codigo do Departamento do funcionario.:");
            scanf("%d",&sFunc.codDep);

            pesquisaDepCod=pesquisarepetDep(arqDepartamento,sFunc.codDep);

            if (pesquisaDepCod==-1)
            {
                printf("\nDepartamento Inexistente!!!");
            }
        } while (pesquisaDepCod==-1);
        fseek(arqFuncionario,0,SEEK_END);
        fwrite(&sFunc,sizeof(TFuncionario),1,arqFuncionario);

        printf("\nDeseja sair do cadastro? 1-Não  2-Sim");
        scanf("%d",&sair);
    } while (sair!=2);
}

void listaFuncionarios (FILE *arqFuncionario,FILE *arqDepartamento)
{
    TFuncionario sFunc;
    TDepartamento sDep;
    int pesquisa;

    printf("\nDados Funcionarios.:");
    printf("\nCodigo\t\tNome.: ");
    rewind(arqFuncionario);
    while (fread(&sFunc,sizeof(TFuncionario),1,arqFuncionario)==1)
    {
        printf("\n%d\t%.2f\t\t%s",sFunc.sMatricula,sFunc.sSalario,sFunc.sNomeFunc);
        pesquisa=pesquisarepetDep(arqDepartamento,sFunc.codDep);
        fseek(arqDepartamento,pesquisa*sizeof(TDepartamento),SEEK_SET);
        fread(&sDep,sizeof(TDepartamento),1,arqDepartamento);
        printf("\t%s\n",sDep.sNomeDep);
    }
}

void listagemDep (FILE *arqDepartamento,FILE *arqFuncionario)
{
    TDepartamento sDep;
    
    printf("\nCodigo\tNome.:");
    rewind(arqDepartamento);
    while (fread(&sDep,sizeof(TDepartamento),1,arqDepartamento)==1)
    {
        printf("\n%d\t\t%s",sDep.sCodigo,sDep.sNomeDep);
    }
}

void listaFunPorDep (FILE *arqDepartamento, FILE *arqFuncionario)
{
    TDepartamento sDep;
    TFuncionario sFun;
    int soma,pesquisa;

    rewind(arqDepartamento);
    
    while (fread(&sDep,sizeof(TDepartamento),1,arqDepartamento)==1)
    {
        printf("----------------");
        printf("\nDepartamento: %s",sDep.sNomeDep);
        setbuf(stdin,NULL);
        printf("\nMatricula\tSalario\t\tNome");
        soma=0;
        rewind(arqFuncionario);
        while (fread(&sFun,sizeof(TFuncionario),1,arqFuncionario)==1)
        {
            if (sFun.codDep==sDep.sCodigo)
            {
                printf("\n%d\t\t%.2f\t%s",sFun.sMatricula,sFun.sSalario,sFun.sNomeFunc);
                soma++;
            } 
        }
        printf("\n%d Funcionarios no departamento\n",soma);
    }
}

int main(){
    FILE *arqDepartamento;
    FILE *arqFuncionario;
    
    int menu,sair;

    setlocale(LC_ALL,"");

    arqDepartamento=fopen("Departamento.dat","rb+");
    if (arqDepartamento==NULL)
    {
        arqDepartamento=fopen("Departamento.dat","wb+");
    }
    
    arqFuncionario=fopen("Funcionario.dat","rb+");
    if (arqFuncionario==NULL)
    {
        arqFuncionario=fopen("Funcionario.dat","wb+");
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
        case 2://Cadastro de Funcionario
            cadFuncionario (arqFuncionario,arqDepartamento);
            break;
        case 3://Listagem de Funcionarios
            listaFuncionarios (arqFuncionario,arqDepartamento);
            break;
        case 4://Listagem por Departemento
            listagemDep (arqDepartamento,arqFuncionario);
            break;
        case 5://Funcionários por Departemento
            listaFunPorDep (arqDepartamento,arqFuncionario);
            break;
        case 6://sair
            return 0;
            break;
        default:
            printf("Opção invalida!!!");
            break;
        }
        printf("\nDeseja fechar o programa.: 1-Não  2-Sim");
        scanf("%d",&sair);
    } while (sair!=2);
    
    return 0;
}