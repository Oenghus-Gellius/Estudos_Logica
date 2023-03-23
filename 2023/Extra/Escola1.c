/*faço um programa similar ao do Colegio Aprendiz 
- Entrada a nota das Avaliações 
- Se a media da AV1 for menor que a media ela é substituidade pela AV2 se for maior que a media
- Apontar se está abaixo ou Acima da media
- meia 6,0*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int mat;
    float n1, n2, n3, media;

    setlocale(LC_ALL,"Portuguese");
    printf("Insira seu número de matrícula:");
    scanf("%d",&mat);
    printf("Nota AV1:");
    scanf("%f",&n1);
    printf("Nota AV2:");
    scanf("%f",&n2);
    printf("Nota AV3:");
    scanf("%f",&n3);
    if (n1 <= 6)
    {
        if (n2 >= 6)
        {
            n1=6;
        }
    }
    media=(n1+n2+n3)/3;
    printf("\nSua matricula:%d - AV1=%.1f AV2=%.1f AV3=%.1f Média no semestre: %.1f\n",mat, n1, n2, n3, media);
    if (media >= 6)
    {
        printf("\n MEDIA!");
    }
    else
    {
        printf("\n ABAIXO DA MEDIA!");
    }
    
    return 0;
}