/*
17) Escrever um programa que leia um número n que indica quantos valores devem ser lidos. Para 
cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor. 
*/
#include <stdio.h>

int main() {
    int n, i, j, num, fat;

    printf("Digite a quantidade de valores a serem lidos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &num);

        fat = 1;
        for (j = num; j > 1; j--) {
            fat *= j;
        }

        printf("Número: %d, Fatorial: %d\n", num, fat);
    }

    return 0;
}