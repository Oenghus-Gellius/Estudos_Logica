#include <stdio.h>
//FuncionÃ¡rio matrÃ­cula, nome, salÃ¡rio
 struct TFuncionario{
    int matricula;
    char nome[100];
    float salario; 
 };
int main(){
    struct TFuncionario f;
    printf("ForneÃ§a a matrÃ­cula:");
    scanf("%d",&f.matricula);
    setbuf(stdin,NULL);
    printf("ForneÃ§a o nome:");
    fgets(f.nome,100,stdin);
    setbuf(stdin,NULL);
    printf("ForneÃ§a o SalÃ¡rio:");
    scanf("%f",&f.salario);
    printf("\nDados do FuncionÃ¡rio\n");
    printf("\nMatrÃ­cula: %d",f.matricula);
    printf("\nNome: %s",f.nome);
    printf("SalÃ¡rio: R$ %.2f",f.salario);
    return 0;
}