#include <stdio.h>

struct TFuncionario{
    int matricula;
    char nome[100];
    float salario;
};

void lerFuncionario(struct TFuncionario *funcionario){
    printf("ForneÃ§a a matrÃ­cula:");
    scanf("%d",&funcionario->matricula);
    //scanf("%d",&(*funcionario).matricula);
    setbuf(stdin,NULL);
    printf("ForneÃ§a o nome:");
    fgets(funcionario->nome,100,stdin);
    setbuf(stdin,NULL);
    printf("ForneÃ§a o salÃ¡rio:");
    scanf("%f",&funcionario->salario);
    
}
int main(){
    struct TFuncionario registro;
    lerFuncionario(&registro);

    return 0;
}
