/*
17. O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025. Fazer um 
programa para obter todos os números de 4 algarismos com a mesma característica do 
número 3025. 
*/
#include <stdio.h>

int main() {
    int i, j, num;

    for (i = 10; i < 100; i++) {
        for (j = 10; j < 100; j++) {
            num = i * 100 + j;
            if (num == (i + j) * (i + j)) {
                printf("%d\n", num);
            }
        }
    }

    return 0;
}