/*
2) Faça um programa que possua o menu:
1 – Cadastro
2 – Consulta
3 – Excluir
4 – Fim
caso a opção selecionada seja:
1 – Permitir que se cadastre a matrícula, nome e salário de no máximo 30 funcionários.
Obs.:
a) A matrícula é única
b) Aceitar apenas valores positivos para o campo salário
2 – Pedir ao usuário uma valor e mostrar os dados do funcionário que possua matrícula
igual ao valor fornecido.
3 – Pedir ao usuário uma valor e excluir o funcionário que possua matrícula igual 
ao valor fornecido.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>
#define MAX 100

typedef struct{
    int matricula;
    char nome[100];
    float salario;
}Tfuncionario;

int funcCheckMatricula (Tfuncionario structFunc[], int mat, int ultimaPosCad){
    int i;
    for (i = 0; i <= ultimaPosCad; i++)
    {
        if (mat==structFunc[i].matricula)
        {
            return i;
        }
    }
    return -1;    
}

int funcCheckNome (Tfuncionario structFunc[],char nome[], int ultimaPosCad){
    int i;
    for (i = 0; i <= ultimaPosCad; i++)
    {
        if (strcmp(nome,structFunc[i].nome)==0)
        {
            return i;
        }
    }
    return -1;
}

void funcPesquisaNome (Tfuncionario structFunc[],int ultimaPosCad){
    int i,sair,posicao;
    char nome[100];
    if (ultimaPosCad>=0)
    {
        do
        {
            printf("\nPesquisa por nome de funcionario, digite o nome.:");
            setbuf(stdin,NULL);
            fgets(nome,100,stdin);
            setbuf(stdin,NULL);
            posicao=funcCheckNome(structFunc,nome,ultimaPosCad);
            if (posicao!=-1)
            {
                printf("\nFuncionario.:");
                printf("\nMatricula.:%d",structFunc[posicao].matricula);
                printf("\nNome.:%s",structFunc[posicao].nome);
                printf("\nSalario.:%.2f",structFunc[posicao].salario);
            }
            else
            {
                printf("Funcionario Inexistente!!!");
            }   
            printf("\nContinuar a pesquisa Sim -1 | Não - 2");
            scanf("%d",&sair);
        } while (sair!=2);
    }
    else
    {
        printf("Nome de funcionario inexistente!");
    }
}

void funcCadastro (Tfuncionario structFunc[], int tamanho,int *ultimaPosCad){
    int mat,sair;

    if (*ultimaPosCad<tamanho-1)
    {
        do
        {
            printf("\nInsira o numero de matricula.:");
            scanf("%d",&mat);
            if (funcCheckMatricula(structFunc,mat,*ultimaPosCad)==-1)
            {
                (*ultimaPosCad)++;
                structFunc[*ultimaPosCad].matricula=mat;
                setbuf(stdin,NULL);
                printf("\nNome.:");
                fgets(structFunc[*ultimaPosCad].nome,100,stdin);
                setbuf(stdin,NULL);
                printf("\nSalario.:");
                scanf("%f",&structFunc[*ultimaPosCad].salario);
            }
            else
            {
                printf("\nMatriclua já cadastrada!!!");
            }
            printf("\nPara cadastro digite-1 para sair digite-2.:");
            scanf("%d",&sair);
        } while (sair!=2);
        
    }
    else
    {
        printf("\nTodos os funionarios cadastrados!!!");
    }
}

void funcConsulta (Tfuncionario structFunc[], int ultimaPosCad){
    int i,sair,mat,posicao;
    if (ultimaPosCad>=0)
    {
        do
        {
            printf("Insira a matricula a ser Pesquisada.:");
            scanf("%d",&mat);
            posicao=funcCheckMatricula(structFunc,mat,ultimaPosCad);
            if (posicao!=-1)
            {
                printf("\nFuncionario.:");
                printf("\nMatricula.: %d",structFunc[posicao].matricula);
                printf("\nNome.:%s",structFunc[posicao].nome);
                printf("\nSalario.:%.2f",structFunc[posicao].salario);
            }
            else
            {
                printf("Matricula de funcionario inexistente!");
            }
            printf("\nContinuar a pesquisa Sim -1 | Não - 2");
            scanf("%d",&sair);
        } while (sair!=2);
    }
    else
    {
        printf("\nNenhum Funcionario cadastrado");
    }
}

void funcListagem (Tfuncionario structFunc[], int ultimaPosCad){
    
}

int main(){
    int menu;
    int ultimaPosCad;
    Tfuncionario funcCheckMatricula[MAX];
    
    ultimaPosCad=-1;
    do
    {
        printf("Controle de Funcionarios\n");
        printf("1-Cadastro\n2-Consulta Matricula\n3-Consulta Nome");
        printf( "\n4-Alteração\n5-Exclusão\n6-Listagem\n7-FIm");
        printf("\nForneça sua Opção:");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1://cadastro
            funcCadastro(funcCheckMatricula,MAX,&ultimaPosCad);
            break;
        case 2://Consulta matricula
            funcConsulta(funcCheckMatricula,ultimaPosCad);
            break;
        case 3://Consulta Nome
            funcPesquisaNome (funcCheckMatricula,ultimaPosCad);
            break;
        case 4://Alteração
            funcConsulta(funcCheckMatricula,ultimaPosCad);
            break;
        case 5://Exclusão
            funcConsulta(funcCheckMatricula,ultimaPosCad);
            break;
        case 6://Listagem
            funcConsulta(funcCheckMatricula,ultimaPosCad);
            break;
        default:
            break;
        }    
    } while (menu!=7);
    

    return 0;
}