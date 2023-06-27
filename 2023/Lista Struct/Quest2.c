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
    float sal;

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
                do
                {
                    printf("\nSalario.:");
                    scanf("%f",&structFunc[*ultimaPosCad].salario);  
                    if (structFunc[*ultimaPosCad].salario < 0)
                    {
                        printf("\nValor incorreto!!!");
                    }
                } while (structFunc[*ultimaPosCad].salario < 0);
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

void funcConsultaMat (Tfuncionario structFunc[], int ultimaPosCad){
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
    int i;
    if (ultimaPosCad>=0)
    {
        for (i = 0; i <= ultimaPosCad; i++)
        {
            printf("\n---------");
            printf("\nMatricula.: %d",structFunc[i].matricula);
            printf("\nNome.:%s",structFunc[i].nome);
            printf("\nSalario.:%.2f",structFunc[i].salario);
            printf("\n---------");
        }  
    }
}

void funcAlteracao (Tfuncionario structFunc[], int ultimaPosCad){
    int i,sair,mat,alt,posicao;
    if (ultimaPosCad>=0)
    {
        do
        {
            printf("\nInsira a Matricula do funcionario a ser alterado.:");
            scanf("%d",&mat);
            posicao=funcCheckMatricula(structFunc,mat,ultimaPosCad);
            if (posicao!=-1)
            {
                
                printf("\nDeseja alterar o nome? 1-SIM 2-Não");
                scanf("%d",&alt);
                if (alt==1)
                {
                    setbuf(stdin,NULL);
                    printf("\nInsira a alteração para o nome.:");
                    fgets(structFunc[posicao].nome,100,stdin);
                    setbuf(stdin,NULL);
                }
                alt=0;
                printf("\nDeseja alterar o salario?1-SIM 2-Não");
                scanf("%d",&alt);
                if (alt==1)
                {
                    printf("\nInsira a alteração para o Salario.:");
                    scanf("%f",&structFunc[posicao].salario);
                    alt=0;
                }
            }
            else
            {
                printf("\nNenhum funcionario com esse numero de Matricula");
            }
            printf("\nContinuar as Alterações Sim -1 | Não - 2");
            scanf("%d",&sair);
        } while (sair!=2);
    }
}

void funcRemocao (Tfuncionario structFunc[], int tamanho, int *ultimaPosCad){
    int i,posicao,sair,mat,remocao;
    if (*ultimaPosCad>=0)
    {
        do
        {
            printf("\nInsira a Matricula do funcionario a ser Removida.:");
            scanf("%d",&mat);
            posicao=funcCheckMatricula(structFunc,mat,*ultimaPosCad);
            if (posicao!=-1)
            {
                printf("\nDeseja realmente remover a o funcionarios.:");
                printf("\nNome.:%s",structFunc[posicao].nome);
                printf("\nSalario.:%.2f",structFunc[posicao].salario);
                printf("\n1-SIM/2/Não");
                scanf("%d",&remocao);
                if (remocao==1)
                {
                    structFunc[posicao]=structFunc[*ultimaPosCad];
                    (*ultimaPosCad)--;
                }
            }
            printf("\nContinuar a exclusão Sim -1 | Não - 2");
            scanf("%d",&sair);
        } while (sair!=2);
    }
    else
    {
        printf("\nSem cadastro de Funcionario!!!");
    }
    
}

int main(){
    int menu;
    int ultimaPosCad;
    Tfuncionario funcCheck[MAX];
    
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
            funcCadastro(funcCheck,MAX,&ultimaPosCad);
            break;
        case 2://Consulta matricula
            funcConsultaMat(funcCheck,ultimaPosCad);
            break;
        case 3://Consulta Nome
            funcPesquisaNome (funcCheck,ultimaPosCad);
            break;
        case 4://Alteração
            funcAlteracao (funcCheck,ultimaPosCad);
            break;
        case 5://Exclusão
            funcRemocao (funcCheck,MAX,&ultimaPosCad);
            break;
        case 6://Listagem
            funcListagem (funcCheck,ultimaPosCad);
            break;
        default:
            break;
        }    
    } while (menu!=7);
    

    return 0;
}